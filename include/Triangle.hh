class Triangle : public Polygon 
{
 public:
  Triangle(double x=0., double y=0.) : Polygon(x, y) {};
  virtual double area() override
  { 
   return width*height/2; 
  };
};
