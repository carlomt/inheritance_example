class Polygon {
  protected:
    double width, height;
  public:
  Polygon(double x, double y) :
    width(x), height(y) {}
    void set_values (int a, int b) { width=a; height=b;}
  virtual double area() =0;
 };
