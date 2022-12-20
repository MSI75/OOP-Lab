#include<iostream>
using namespace std;

class Float{
    float n;
    public:
    Float operator + (Float &a){
        Float temp;
        temp.n = n + a.n;
        return temp;
    }

    Float operator - (Float &a){
        Float temp;
        temp.n = n - a.n;
        return temp;
    }

   friend Float operator * (float a, Float &b){
        Float temp;
        temp.n = a * b.n;
        return temp;
    }

    Float operator / (float a){
        Float temp;
        temp.n = n / a;
        return temp;
    }
    void setShow(float x){
        n = x;
    }
    float show(){
        return n;
    }
};


int main(){
    Float x1, x2, y;
    float a, b;
    cout<<"Enter the number of a and b : ";
    cin>>a>>b;

    
    x1.setShow(a);
    x2.setShow(b);

    y = x1 + x2;
    cout<<"Addition number : "<<y.show()<<endl;

    y = x1 - x2;
    cout<<"Subtraction number : "<<y.show()<<endl;


    y = a * x2;
   cout<<"Multiplication number : "<<y.show()<<endl;


    y = x1/(float)b;
    cout<<"Division number : "<<y.show()<<endl;

    return 0;
}