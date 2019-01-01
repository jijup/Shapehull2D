// Copyright (c) 2008  GeometryFactory Sarl (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you may redistribute it under
// the terms of the Q Public License version 1.0.
// See the file LICENSE.QPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/trunk/GraphicsView/include/CGAL/Qt/TriangulationGraphicsItem.h $
// $Id: TriangulationGraphicsItem.h 61414 2011-02-24 16:36:04Z sloriot $
// 
//
// Author(s)     : Andreas Fabri <Andreas.Fabri@geometryfactory.com>
//                 Laurent Rineau <Laurent.Rineau@geometryfactory.com>

#ifndef CGAL_QT_SHAPE_GRAPHICS_ITEM_H
#define CGAL_QT_SHAPE_GRAPHICS_ITEM_H

#include <CGAL/Bbox_2.h>
#include <CGAL/apply_to_range.h>
#include <CGAL/Qt/PainterOstream.h>
#include <CGAL/Qt/GraphicsItem.h>
#include <CGAL/Qt/Converter.h>

#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;

namespace CGAL {
namespace Qt {

template <typename T>
class ShapeGraphicsItem : public GraphicsItem
{
  typedef typename T::Geom_traits Geom_traits;
public:
  ShapeGraphicsItem(T* t_);

  void modelChanged();

public:

  QRectF boundingRect() const;
  
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  
  virtual void operator()(typename T::Face_handle fh);

  const QPen& verticesPen() const
  {
    return vertices_pen;
  }

  const QPen& edgesPen() const
  {
    return edges_pen;
  }

  const QPen& interiorEdgesPen() const
  {
    return interior_edges_pen;
  }
  const QBrush& regularFacesBrush() const
  {
    return regular_faces_brush;
  }

  void setVerticesPen(const QPen& pen)
  {
    vertices_pen = pen;
  }

  void setEdgesPen(const QPen& pen)
  {
    edges_pen = pen;
  }

  void setInteriorEdgesPen(const QPen& pen)
  {
    interior_edges_pen = pen;
  }

  
  void setRegularFacesBrush(const QBrush& b)
  {
    regular_faces_brush = b;
  }

  bool visibleVertices() const
  {
    return visible_vertices;
  }

  void setVisibleVertices(const bool b)
  {
    visible_vertices = b;
    update();
  }

  bool visibleEdges() const
  {
    return visible_edges;
  }

  void setVisibleEdges(const bool b)
  {
    visible_edges = b;
    update();
  }

protected:
  virtual void drawAll(QPainter *painter);
  void paintVertices(QPainter *painter);
  void paintOneVertex(const typename T::Point& point);
  virtual void paintVertex(typename T::Vertex_handle vh);
  void updateBoundingBox();

  T * t;
  QPainter* m_painter;
  PainterOstream<Geom_traits> painterostream;

  typename T::Vertex_handle vh;
  typename T::Point p;
  CGAL::Bbox_2 bb;  
  bool bb_initialized;
  QRectF bounding_rect;

  QPen vertices_pen;
  QPen edges_pen;
  QPen interior_edges_pen;
  QBrush regular_faces_brush;
  bool visible_edges;
  bool visible_vertices;
};


template <typename T>
ShapeGraphicsItem<T>::ShapeGraphicsItem(T * t_)
  :  t(t_), painterostream(0),
     bb(0,0,0,0), bb_initialized(false),
     visible_edges(true), visible_vertices(true)
{
  setVerticesPen(QPen(::Qt::red, 3.));
  if(t->number_of_vertices() == 0){
    this->hide();
  }
  updateBoundingBox();
  setZValue(3);
}

template <typename T>
QRectF 
ShapeGraphicsItem<T>::boundingRect() const
{
  return bounding_rect;
}


template <typename T>
void 
ShapeGraphicsItem<T>::operator()(typename T::Face_handle fh)
{
	if(visible_edges) {
    for (int i=0; i<3; i++) {
      if (fh < fh->neighbor(i) || t->is_infinite(fh->neighbor(i))){
        m_painter->setPen(this->edgesPen());
        painterostream << t->segment(fh,i);
      }
    }
  }
  if(visible_vertices) {
    for (int i=0; i<3; i++) {
      paintVertex(fh->vertex(i));
    }
  }
}

template <typename T>
void 
ShapeGraphicsItem<T>::drawAll(QPainter *painter)
{
	int index=0,ind;
	typedef K::FT FT;
	FT length=FT(0);

	painterostream = PainterOstream<Geom_traits>(painter);

	//painter->setBrush(QColor(255, 153, 18, 255));
	for(typename T::Finite_faces_iterator fit = t->finite_faces_begin();
	fit != t->finite_faces_end();
	++fit){

	if(!t->is_equal(t->locate(t->circumcenter(fit),fit),fit))
			{
				painter->setBrush(QColor(255,255, 255, 255));
				painterostream << t->triangle(fit);
				
	}
	else
	{
				painter->setBrush(QColor(255,255, 255, 255));
				painterostream << t->triangle(fit);
	}
	

	}

	if(visibleEdges()) {
		typename T::Finite_faces_iterator fit=t->finite_faces_begin();
		for(;fit!=t->finite_faces_end();++fit)
		{
			for(int i=0;i<3;i++)
			{
				if(t->is_infinite(fit->neighbor(i)))
				{
					painter->setPen(interiorEdgesPen());					
					painterostream << t->segment(fit,i);
					index++;
				}
				else
				{
					//painter->setPen(edgesPen());
					painter->setPen(QColor(255, 255, 255, 255));
					painterostream << t->segment(fit,i);
				}

			}
		}

		
		//painterostream << t->segment(*eit);	  

		//}
	}
	std::cout<<"\nbdry points"<<index;

paintVertices(painter);
}

template <typename T>
void 
ShapeGraphicsItem<T>::paintVertices(QPainter *painter)
{
	int index;
  if(visibleVertices()) {
    Converter<Geom_traits> convert;

    painter->setPen(verticesPen());
    QMatrix matrix = painter->matrix();
    painter->resetMatrix();
    /*for(typename T::Finite_vertices_iterator it = t->finite_vertices_begin();
        it != t->finite_vertices_end();
        it++){
      QPointF point = matrix.map(convert(it->point()));
      painter->drawPoint(point);
    }*/
	//new code
	
	for(typename T::Finite_faces_iterator fit = t->finite_faces_begin();
        fit != t->finite_faces_end();
        fit++){

			int flag=0,ct=0;
			for(int i=0;i<3;i++)
			{
				if(t->is_infinite(fit))
				{ct++;
					index=i;
				}
			}
			if(ct>1)
			{
				for(int i=0;i<3;i++)
				{
			QPointF point = matrix.map(convert(fit->vertex(i)->point()));
			painter->drawPoint(point);
				}
			}
			else if(ct==1)
			{
			QPointF point = matrix.map(convert(fit->vertex(t->cw(index))->point()));
			painter->drawPoint(point);
			point = matrix.map(convert(fit->vertex(t->ccw(index))->point()));
			painter->drawPoint(point);

			}
			//std::cout<<"hai\n";
		}
			
  }
}

template <typename T>
void 
ShapeGraphicsItem<T>::paintOneVertex(const typename T::Point& point)
{
  Converter<Geom_traits> convert;

  m_painter->setPen(this->verticesPen());
  QMatrix matrix = m_painter->matrix();
  m_painter->resetMatrix();
  m_painter->drawPoint(matrix.map(convert(point)));
  m_painter->setMatrix(matrix);
}

template <typename T>
void 
ShapeGraphicsItem<T>::paintVertex(typename T::Vertex_handle vh)
{
  Converter<Geom_traits> convert;

  m_painter->setPen(this->verticesPen());
  QMatrix matrix = m_painter->matrix();
  m_painter->resetMatrix();
  m_painter->drawPoint(matrix.map(convert(vh->point())));
  m_painter->setMatrix(matrix);
}

template <typename T>
void 
ShapeGraphicsItem<T>::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget * /*widget*/)
{
  painter->setPen(this->edgesPen());
//   painter->drawRect(boundingRect());
  if ( t->dimension()<2 || option->exposedRect.contains(boundingRect()) ) {
    drawAll(painter);
  } else {
    m_painter = painter;
    painterostream = PainterOstream<Geom_traits>(painter);
    CGAL::apply_to_range (*t, 
                          typename T::Point(option->exposedRect.left(),
                                            option->exposedRect.bottom()), 
                          typename T::Point(option->exposedRect.right(),
                                            option->exposedRect.top()), 
                          *this);
	
  }
}

// We let the bounding box only grow, so that when vertices get removed
// the maximal bbox gets refreshed in the GraphicsView
template <typename T>
void 
ShapeGraphicsItem<T>::updateBoundingBox()
{
  prepareGeometryChange();
  if(t->number_of_vertices() == 0){
    bb = Bbox_2(0,0,0,0);
    bb_initialized = false;
    return;
  } else if(! bb_initialized){
    bb = t->finite_vertices_begin()->point().bbox();
    bb_initialized = true;
  }
  
  if(t->dimension() <2){
    for(typename T::Finite_vertices_iterator it = t->finite_vertices_begin();
	it != t->finite_vertices_end();
	++it){
      bb = bb + it->point().bbox();
    }
  } else {
    typename T::Vertex_handle inf = t->infinite_vertex();
    typename T::Vertex_circulator vc = t->incident_vertices(inf), done(vc);
    do {
      bb = bb + vc->point().bbox();
      ++vc;
    } while(vc != done);
  }
  bounding_rect = QRectF(bb.xmin(),
                         bb.ymin(),
                         bb.xmax()-bb.xmin(),
                         bb.ymax()-bb.ymin());
}


template <typename T>
void 
ShapeGraphicsItem<T>::modelChanged()
{
  if((t->number_of_vertices() == 0) ){
    this->hide();
  } else if((t->number_of_vertices() > 0) && (! this->isVisible())){
    this->show();
  }
  updateBoundingBox();
  update();
}


} // namespace Qt
} // namespace CGAL

#endif // CGAL_QT_SHAPE_GRAPHICS_ITEM_H
