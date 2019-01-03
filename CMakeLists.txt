project(ShapeHull2D)

cmake_minimum_required (VERSION 2.6)


#file(GLOB_RECURSE Vor_sources "*.cpp")
#file(GLOB_RECURSE Vor_headers "*.h")

find_package(CGAL QUIET COMPONENTS Core )
  include( ${CGAL_USE_FILE} )

  include_directories (BEFORE "../../include")

find_package(OpenGL REQUIRED)
include_directories(${OPENGL_INCLUDE_DIR})

find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})

add_executable(TestShapeHull TestShapeHull.cpp ShapeHull2D.cpp ShapeHull2D.h)
target_link_libraries(TestShapeHull ${GLUT_LIBRARY} ${OPENGL_LIBRARY})   
target_link_libraries(TestShapeHull ${CGAL_LIBRARIES} ${CGAL_3RD_PARTY_LIBRARIES})                               
