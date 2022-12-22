#include<iostream>
#include<math.h>
#define PI 3.1416
using namespace std;

class Volume{
    public:
    float volume(int , int , int );
    float volume(int , int );
    int volume(int);
};

float Volume::volume(int l, int h, int w){
    return l*h*w;
}

float Volume::volume(int r, int h){
    return PI * r * r * h;
}

int Volume::volume(int n){
    return pow(n,3);
}

int main(){
    Volume v;
    int l, h, w, r, n;
    cout<<"Enter the number of length, high, width, redius and number : ";
    cin>>l>>h>>w>>r>>n; 
    cout<<"\nVolume of rectangle is "<<v.volume(l, h, w)<<endl;
    cout<<"\nVolume of cylinder is "<<v.volume(r, h)<<endl;
    cout<<"\nVolume of cub is "<<v.volume(n)<<endl;

    return 0;
}