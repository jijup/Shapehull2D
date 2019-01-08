#include "ShapeHull2D.h"

using namespace shapehull;

void createDelaunay(Delaunay &dt, vector<pair<double, double> > *pointVec)
{

	for (int i = 0; i < (int)pointVec->size(); i++)
	{
		Point point((*pointVec)[i].first, (*pointVec)[i].second);
		Vertex_handle vertex = dt.insert(point);
		
	}

}

void setCircumRadius(Delaunay &dt){

        Face_iterator fit=dt.finite_faces_begin();
	do{
	  Segment_2 seg=Segment_2(fit->vertex(0)->point(),dt.circumcenter(fit));

         dt.set_circum_radius(fit, seg.squared_length());
	
	}while(++fit!=dt.finite_faces_end());

}

void ShapeHull2D::createPQ(){

Face_iterator fit=dt.finite_faces_begin();
	do{
	for (int i=0; i<3;++i){
		if(dt.is_infinite(fit->neighbor(i)))
			{
				shapepq.push(fit);
				break;
			}

	}
	
	}while(++fit!=dt.finite_faces_end());


}


ShapeHull2D::ShapeHull2D(vector<std::pair<double, double> > pointVec){

points=pointVec;
//Create Delaunay
createDelaunay(dt, &pointVec);

//set Circum radius
setCircumRadius(dt);

//create priority queue
createPQ();

//create shapehull
sculpt();

}


void ShapeHull2D::sculpt(){ 
Face_handle top;
int flag, index;
while(!shapepq.empty())
{
top=shapepq.top();
shapepq.pop();
flag=0;

for(int i=0;i<3;i++)
	{
		if(dt.is_infinite(top->neighbor(i)))
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag)
	{		
		Face_handle f=Face_handle();
		if(dt.is_infinite(dt.locate(dt.circumcenter(top),top)))
		{
			if(!dt.dangling_edge(top) && !dt.junction_point(top,index))
				{
shapepq.push(top->neighbor((index+1)%3));
shapepq.push(top->neighbor((index+2)%3));


					dt.delete_boundary_faces(top,index);
					
				
			
		}
		

}  	
	
	

}
}
}


int ShapeHull2D::getIndex(double x, double y)
{
	for(int i=0; i<(int)points.size(); ++i)
	{
		if (fabs(points[i].first-x)<0.0001 && fabs(points[i].second-y)<0.0001)
			return i;
	}
	
	return -1;		
}


std::vector<std::pair<int, int>> *ShapeHull2D::extractBoundary(){
int edges=0;
Face_iterator fit=dt.finite_faces_begin();
for(;fit!=dt.finite_faces_end();++fit)
		{
			for(int i=0;i<3;i++)
			{
				if(dt.is_infinite(fit->neighbor(i)))
				{

boundary_.push_back(pair<int, int>(getIndex(fit->vertex((i+1)%3)->point().x(),fit->vertex((i+1)%3)->point().y()), getIndex(fit->vertex((i+2)%3)->point().x(),fit->vertex((i+2)%3)->point().y())));
					
					edges++;
				}
		
			}
		}

boundary_.resize(edges);		


return &boundary_;
}
