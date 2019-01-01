#include <fstream>
#include <queue>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<sys/timeb.h>
//CGAL headers
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include "Delaunay_triangulation_2.h"
#include <CGAL/point_generators_2.h>

#include <stdlib.h>
#if defined(__APPLE__)
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


//xtra
#include <CGAL/IO/Color.h>
#include <CGAL/Triangulation_face_base_with_info_2.h>


typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 Point_2;
typedef K::Iso_rectangle_2 Iso_rectangle_2;
typedef K::Segment_2 Segment_2;
typedef K::FT FT;



typedef CGAL::Delaunay_triangulation_2<K> Delaunay;


//xtra
typedef Delaunay::Face_circulator       Face_circulator;
typedef Delaunay::Vertex_circulator		Vertex_circulator;
typedef Delaunay::Edge_circulator		Edge_circulator;
typedef Delaunay::Point					Point;
typedef Delaunay::Face_iterator			Face_iterator;
typedef Delaunay::Finite_vertices_iterator	Finite_vertices_iterator;
typedef Delaunay::Vertex_handle			Vertex_handle;
typedef Delaunay::Face_handle			Face_handle;
typedef Delaunay::Segment				Segment;
typedef Delaunay::Edge					Edge;
typedef Delaunay::All_edges_iterator	All_edges_iterator;
typedef Delaunay::Triangle				Triangle;
typedef Delaunay::Area					Area;

using namespace std;
struct comparator{
	bool operator () (const Face_handle lhs, const Face_handle rhs){
	return lhs->radius<rhs->radius;
	}
	};

class ShapeHull2D{
private:
Delaunay dt;
priority_queue <Face_handle, vector<Face_handle>, comparator> shapepq;
std::vector<pair<int, int>> boundary_;
vector<pair<double, double> > points;
void createPQ();
void sculpt();
int getIndex(double x, double y);
	
public:
ShapeHull2D(vector<pair<double, double> > pointVec);
std::vector<pair<int, int>> *extractBoundary();

};
