class Triangle : public Polygon 
{
 public:

  Triangle(const std::string n="",
	   const double x=0., const double y=0.)
    : Polygon(n, x, y, "triangle") {};

  virtual double area() const override
  { 
   return width*height/2; 
  };

};
