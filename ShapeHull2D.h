#include <fstream>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<sys/timeb.h>
//CGAL headers
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include "Delaunay_triangulation_2.h"


#include <CGAL/point_generators_2.h>

//Qt headers
#include <QtGui>
#include <QString>
#include <QActionGroup>
#include <QFileDialog>
#include <QInputDialog>

// GraphicsView items and event filters (input classes)
#include "TriangulationCircumcircle.h"
#include "TriangulationMovingPoint.h"
#include "TriangulationConflictZone.h"
#include "TriangulationRemoveVertex.h"
#include "TriangulationPointInputAndConflictZone.h"
#include <CGAL/Qt/TriangulationGraphicsItem.h>
#include <CGAL/Qt/VoronoiGraphicsItem.h>
#include <CGAL/Qt/MAPGraphicsItem.h>
#include <CGAL/Qt/ShapeGraphicsItem.h>




//for viewportsBbox
#include <CGAL/Qt/utility.h>
  
//the two base classes
#include "ui_Delaunay_triangulation_2.h"
#include <CGAL/Qt/DemosMainWindow.h>

//xtra
#include <CGAL/IO/Color.h>
#include <CGAL/Triangulation_face_base_with_info_2.h>

struct timeb t1,t2,t3,t4;

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


class ShapeHull2D{
private:
Delaunay dt;
std::vector<int, int> boundary_;
	
public:
ShapeHull2D();
std::vector<int, int> *extractBoundary();

}