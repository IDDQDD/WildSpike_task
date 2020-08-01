#pragma once
#include <vector>
#include "point.h"

class Figure
{
  public:

  Figure() = delete;
  Figure(std::initializer_list<Point> points);

  const std::vector<Point>& Get_Coordinates();

  private:
  std::vector<Point> coordinates;
};