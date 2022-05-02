#ifndef RECTANGLE_HH
#define RECTANGLE_HH

class Rectangle : public Polygon
{
public:

  Rectangle(const std::string n="",
	    double x=0., double y=0.)
    : Polygon(n, x, y, "rectangle") {};

  virtual double area() const override
  {
    return width*height;
  };

};

#endif
