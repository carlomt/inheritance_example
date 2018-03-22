class Rectangle : public Polygon
{
public:
  Rectangle(double x=0., double y=0.) : Polygon(x, y) {};
  virtual double area()
  {
    return width*height;
  };
};
