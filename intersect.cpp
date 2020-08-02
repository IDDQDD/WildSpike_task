#include "intersect.h"
#include<cmath>

double Direction(const Point& p1, const Point& p2,const Point& p3)
{
  return ((p3.x - p1.x)*(p2.y - p1.y) - (p2.x - p1.x)*(p3.y - p1.y));
}

bool OnSegment(const Point& p1, const Point& p2, const Point& p3)
{
return (std::min(p1.x, p2.x) <= p3.x && p3.x <= std::max(p1.x, p2.x)) 
       &&
       (std::min(p1.y, p2.y) <= p3.y && p3.y <= std::max(p1.y, p2.y));
      
      
}

bool SegmentsIntersect(const Point& p1, const Point& p2,
                       const Point& p3, const Point& p4)
{
  auto d1 = Direction(p3, p4, p1);
  auto d2 = Direction(p3, p4, p2);
  auto d3 = Direction(p1, p2, p3);
  auto d4 = Direction(p1, p2, p4);
  
  if(((d1 > 0 &&  d2 < 0) || (d1 < 0 && d2 > 0))
      &&
      ((d3 > 0 &&  d4 < 0) || (d3 < 0 && d4 > 0)))
      return true;
  if(d1 == 0 && OnSegment(p3, p4, p1))
  return true;
  if(d2 == 0 && OnSegment(p3, p4, p2))
  return true;
  if(d3 == 0 && OnSegment(p1, p2, p3))
  return true;
  if(d4 == 0 && OnSegment(p1, p2, p4))
  return true;

  return false;
}                       

bool IsIntersect(const std::vector<Point>& a, const std::vector<Point>& b)
{
 return  LinesIntersect(a, b);
}

bool LinesIntersect(const std::vector<Point>& lines1, const std::vector<Point>& lines2)
  {
         
    for(auto it = std::begin(lines1); it != std::end(lines1); ++it)
    {
            for(auto it2 = std::begin(lines2); it2 != std::end(lines2); ++it2)
            {
                    if(SegmentsIntersect(*it, *Next(it, lines1), *it2, *Next(it2, lines2)))
                    return true;
            }
    }
    return false;
  }                             