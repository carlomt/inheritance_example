#include <iostream>
#include <vector>
#include "Polygon.hh"
#include "Rectangle.hh"
#include "Triangle.hh"
#include "Circle.hh"

using std::cout;
using std::endl;
using std::vector;

int main () {
  Rectangle rect1(4, 5);
  Triangle trgl1(4, 5);
  
  Rectangle rect2;
  Triangle trgl2;
  rect2.set_values(4,5);
  trgl2.set_values(4,5);
  cout << rect1.area() << endl;
  cout << trgl2.area() << endl;

  //WRONG!
  //because area is pure virtual you can't istantiate a polygon, therefore you can't make a std::vector of instance
  // vector<Polygon> AllMyFigures2;
  // AllMyFigures2.push_back(rect1);
  // AllMyFigures2.push_back(trgl1);
  // AllMyFigures2.push_back(rect2);
  // AllMyFigures2.push_back(trgl2);
  //but you can do a std::vector of pointers of Polygon instances

  vector<Polygon*> AllMyFigures;
  //because Triangle and Rectangle inherit from Polygon I can their instances pointers to a std::vector<Polygon*>
  AllMyFigures.push_back(&rect1);
  AllMyFigures.push_back(&trgl1);
  AllMyFigures.push_back(&rect2);
  AllMyFigures.push_back(&trgl2);


  cout<<"testing polymorphism:"<<endl;
  //c++98 style loop
  for(size_t i=0; i<AllMyFigures.size(); i++)
    {
      //thanks to polymrphism and the virtual attribute of the method "area()"
      //you can get the correct formula even if they are now considered Polygon pointers
      cout<<" i: "<<i<<" area: "<<AllMyFigures[i]->area()<<endl;
    }

  //c++11 style loop
  for(const auto& figure : AllMyFigures)
    {
      cout<<" area: "<<figure->area()<<endl;
    }
  // Circle(1,2);
  
  return 0;
}
