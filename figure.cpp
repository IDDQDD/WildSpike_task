#include "figure.h"
Figure::Figure(std::initializer_list<Point> points)
{
  
  coordinates.insert(std::end(coordinates), std::move(points));
}

  const std::vector<Point>& Figure::Get_Coordinates()
  {
    return coordinates;
  }