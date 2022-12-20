#include<iostream>
using namespace std;

class Complex{
    private:
    double real, imaginary;
    public:
    Complex(){
        real=imaginary=0;
    }
    Complex(double r, double i){
        real = r;
        imaginary = i;
    }

    Complex(Complex &obj){
        real = obj.real;
        imaginary = obj.imaginary;
    }

    Complex add(Complex &c){
        Complex Add;
        Add.real = real + c.real;
        Add.imaginary = imaginary + c.imaginary;
        return Add;
    }

    void show(){
        cout<<real<<" + "<<imaginary<<" i"<<endl<<endl;
    }

     void setReal(double re){
        real = re;
    }

    void setImag(double im){
        imaginary = im;
    }

      double getReal() const{
        return real;
    }

    double getImag() const{
        return imaginary;
    }

};

int main(){
    double real1, imag1, real2, imag2;
    cout<<"Enter the real first and second numbers : ";
    cin>>real1>>real2;
    cout<<"Enter the imaginary first and second numbers : ";
    cin>>imag1>>imag2;

    Complex obj1(real1, imag1), obj2(real2, imag2), c;

    obj1.show();

    obj2.show();

    c = obj1.add(obj2);

    cout<<"Addition is : ("<<c.getReal()<<") + ("<<c.getImag()<<")i"<<endl;
    return 0;
    
}