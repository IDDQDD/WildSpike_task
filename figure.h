#pragma once
#include <vector>
#include "point.h"

class Figure
{
  public:

  Figure() = delete;
  Figure(std::initializer_list<Point>&& points) : coordinates(points){};

  inline const std::vector<Point>& Get_Coordinates()  {return coordinates;}

  private:
  std::vector<Point> coordinates;
};