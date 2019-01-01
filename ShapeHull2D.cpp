#include "ShapeHull2D.h"


ShapeHull2D::ShapeHull2D(){
	

}


void ShapeHull2D::reconstruct(){
	
    std::cout<<"Now I'm going to construct the shape\n"<<"Some coding on due\n";
	//ftime(&t1);
	
	Face_iterator fit=dt.finite_faces_begin();
	do{
	//set radius
	
	}while(fit!=dt.finite_faces_end());
	
	struct comparator{
	bool operator () (const Face_handle lhs, const Face_handle rhs){
	return lhs->cradius<rhs->cradius;
	}
	}
	
	priority_queue <Face_handle, vector<Face_handle>, comparator> shapeq;
	
	
	
	Face_iterator fit=dt.finite_faces_begin();
	do{
	for (int i=0; i<3;++i){
	}
	
	}while(fit!=dt.finite_faces_end());
	
	do{
		ok=0;
	Face_iterator fit=dt.finite_faces_begin();
	do
	{
	flag=0;
	for(int i=0;i<3;i++)
	{
		if(dt.is_infinite(fit->neighbor(i)))
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag)
	{
		//std::cout<<"\nCircum center- "<< dt.circumcenter(fit)<<std::endl;
		Face_handle f=Face_handle();
		if(dt.is_infinite(dt.locate(dt.circumcenter(fit),fit)))
		{
			if(!dt.dangling_edge(fit))
				if(!dt.junction_point(fit,index))
				{
					dt.delete_boundary_faces(fit,index);
					ok=1;
				}
			
		}
		
	}
	fit++;
	}while(fit!=dt.finite_faces_end());
}while(ok);

}