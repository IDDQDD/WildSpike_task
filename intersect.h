#pragma once
#include <vector>
#include "point.h"

 inline auto Next(const std::vector<Point>::const_iterator It, const std::vector<Point>& obj)
 {
   return std::next(It,1) == std::end(obj) ?
          std::begin(obj) : std::next(It,1);
         
 }

 bool LinesIntersect(const std::vector<Point>& lines1, const std::vector<Point>& lines2);
                                           
 double Direction(const Point& p1, const Point& p2,const Point& p3);

 bool OnSegment(const Point& p1, const Point& p2, const Point& p3);

 bool SegmentsIntersect(const Point& p1, const Point& p2,
                       const Point& p3, const Point& p4);

 bool IsIntersect(const std::vector<Point>& a, const std::vector<Point>& b);                       