Prerequisites:
CGAL 3.9, Boost 1_47_0, QT 4.7.4, cmake 2.9. 
Platform: Tested on Windows 7
Replace the corresponding files of CGAl 3.9 using the following files found in this folder:
1.	Replace CGAL 3.9\demo\Triangulation_2\Delaunay-triangulation_2.cpp
2.	Replace CGAL 3.9\demo\Triangulation_2\MAPGraphicsItem.h
3.	Replace CGAL 3.9\demo\Triangulation_2\Dealaunay_triangulation_2 (Qt designer file)
4.	Replace CGAL 3.9\demo\Triangulation_2\ui_Delaunay_triangulation_2.h
5.	Replace CGAL 3.9\demo\Triangulation_2\qrc_Delaunay_triangulation_2.cpp
6.	Replace CGAL 3.9\include\CGAL\ Delaunay_triangulation_2.h
7.	Replace CGAL 3.9\include\CGAL\ Triangulation_2.h
8.	Replace CGAL 3.9\include\CGAL\ Triangulation_data_structure_2.h
9.	Replace CGAL 3.9\include\CGAL\Triangulation_ds_face_2.h
10.	Replace CGAL 3.9\include\CGAL\ Triangulation_ds_face_base_2.h
11.	Replace CGAL 3.9\include\CGAL\QT\ShapeGraphicsItem.h
12.	Replace CGAL 3.9\include\CGAL\QT\TriangulationGraphicsItem.h

To build the code, visual studio 2008 or higher is used. One can use the cmake to configure the Triangulation_2 package first. Then, build the project by compiling Delaunay_triangulation_2.cpp available in CGAL 3.9/demo/Triangulation_2 
Also attached are the data files, the point-sets used in the testing.  
