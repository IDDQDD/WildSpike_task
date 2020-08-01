#pragma once
struct Point
{
  Point() = delete;
  explicit Point(double x_, double y_):x(x_), y(y_){};
  double x, y;
};
