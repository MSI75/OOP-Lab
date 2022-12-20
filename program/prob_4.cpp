#include<iostream>
using namespace std;

class A{
        
    int a;
public:
    void setN(int x)
   {
    a = x;
   }
   int getN()
   {
    return a;
   }
};

class B{
        
    int b;
public:
   void setN(int x)
   {
    b = x;
   }

   int getN()
   {
    return b;
   }
};

int main(){
    int a , b;
    cout<<"Enter the number of a and b : ";
    cin>>a>>b;

    A obj1;
    B obj2;

    obj1.setN(a);
    int x = obj1.getN();
    obj2.setN(b);
    int y = obj2.getN();

    if(x<y){
        cout<<"Largest number in second class "<<y<<endl;
    }else{
        cout<<"Largest number in first class "<<x<<endl;
    }
    return 0;
}