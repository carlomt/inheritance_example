#ifndef CICRLE_HH
#define CIRCLE_HH

class Circle : Polygon
{
public:

  Circle(const std::string n="",
	 const double x=0, const double y=0)
    : Polygon(n, x, y, "circle") {};

};

#endif
