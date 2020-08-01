#include <iostream>
#include "figure.h"
#include "intersects.h"
#include "test_runner.h"

void TestIsIntesect();

int main(void)
{
  TestRunner tr;
  RUN_TEST(tr, TestIsIntesect);
  return EXIT_SUCCESS;
}



void TestIsIntesect()
{
  std::vector<std::pair<Figure, Figure>> Y_Intresects{
  {{Point(2,4), Point(4,2), Point(12,2), Point(12,6), Point(10,8), Point(4,8), Point(2,6),Point(10,8), Point(4,8), Point(2,6)},
  {Point(2,10), Point(4,6), Point(6,4), Point(10,2), Point(14,4), Point(14,8), Point(10,10)}},
  
  {{Point(2,3), Point(4,3), Point(4,1), Point(2,1)},
  {Point(1,3), Point(3,5), Point(5,3)}},

  {{Point(50,50), Point(150,150), Point(200,50)},
  {Point(250,350), Point(300,300), Point(350, 250), Point(300,200), Point(250, 150), Point(156,127), Point(85,149), Point(50,250), Point(100,300),Point(150,350), Point(200,350)}},

  {{Point(5,3), Point(3,6), Point(3,2)},
  {Point(4,6), Point(4,4), Point(5,3), Point(6,4), Point(6,6), Point(5,7)}},

  {{Point(2,3), Point(7,9)},
  {{Point(2,7), Point(7,3)}}},

  {{Point(2,3)}, 
  {Point(2,3)}}

};
  
  for(auto& [figure1, figure2] : Y_Intresects)
  {
     ASSERT(IsIntersect(figure1.Get_Coordinates(), figure2.Get_Coordinates()));
  }

  std::vector<std::pair<Figure,Figure>> N_intersects{
    {{Point(1,1), Point(1,2), Point(4,2), Point(4,1)},
    {Point(2,3), Point(4,5), Point(6,3)}},

    {{Point(1,1), Point(1,7), Point(3,7), Point(3,1)},
    {Point(4,6), Point(4,4), Point(5,3), Point(6,4), Point(6,6), Point(5,7)}},

    {{Point(4,4), Point(4,2)},
    {{Point(8,15), Point(8,100)}}},

    {{Point(3,2)}, 
     {Point(2,3)}},

     {{Point(4,4)},
     {Point(4,8)}}
  
};

  for(auto& [figure1, figure2] : N_intersects)
  {
    ASSERT(!IsIntersect(figure1.Get_Coordinates(), figure2.Get_Coordinates()));
  }
  }
