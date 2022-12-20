#include<iostream>
using namespace std;

class Time{
    int hourses;
    int minutes;
    public:
    void getTime();
    void addTime(Time T1, Time T2);
    void putTime();
};

void Time::getTime(){
    cout<<"Enter time "<<endl;
    cout<<"Hours ?";
    cin>>hourses;
    cout<<"Minute ?";
    cin>>minutes;
}

void Time::addTime(Time T1, Time T2){
    this->minutes = T1.minutes +T2.minutes;
    this->hourses = T1.hourses + T2.hourses + (this->minutes/60);
    this->minutes %=60;
}

void Time::putTime(){
    cout<<endl;
    cout<<"Time after add : ";
    cout<<hourses<<" : "<<minutes<<endl;
}

int main(){
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();

    T3.addTime(T1,T2);
    T3.putTime();
    return 0;
}