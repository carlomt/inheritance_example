#include <string>

class Polygon {
protected:
  double width, height;
  std::string type, name;
public:
  Polygon(const std::string n,
	  const double x, const double y,
	  const std::string t="polygon")
    : width(x), height(y), name(n), type(t) {}
  void set_values (int a, int b) { width=a; height=b;};
  virtual double area() const =0;
  inline virtual std::string GetType() const { return type; };
  inline virtual std::string GetName() const { return name; };
};
