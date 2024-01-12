#ifndef POLYGON_HH
#define POLYGON_HH

#include <string>

class Polygon {

protected:

  double width, height;

  std::string type, name;

  
public:

  Polygon(const std::string n,
	  const double x, const double y,
	  const std::string t="polygon")
    : width(x), height(y), type(t), name(n)
  {}

  void set_values (const int a, const int b) { width=a; height=b;};

  virtual double area() const =0;

  inline virtual std::string GetType() const { return type; };

  inline virtual std::string GetName() const { return name; };

};

#endif
