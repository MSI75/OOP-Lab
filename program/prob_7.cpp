#include <iostream>

using namespace std;

// Base class
class area {
   public:
      double width;
      double height;
      area (double a, double b) 
      {
          width = a;
          height = b;
      }
      virtual void getArea(){} 
      
    };
// Derived class
class Rectangle: public area {   
   public:

       Rectangle (double a, double b):area(a,b) { }   
      void getArea(){     
        cout<<"Total Rectangle area : " << width * height << endl;
      }
};
// Derived class
class Isosceles: public area {
   public:
      Isosceles( double a, double b):area(a, b) { }

      void getArea () {
         cout << "Isosceles Triangle class area : " << (width * height)/2 << endl;

      }
};
int main(void) {

    area *obj;
    double a, b;
    cout<<"Enter number of a and b : ";
    cin>>a>>b;
    Rectangle rec(a,b);  
    Isosceles tri(a,b);
    obj = &rec; 
    obj -> getArea(); 
    obj = &tri;
    obj ->getArea();
   return 0;
}
