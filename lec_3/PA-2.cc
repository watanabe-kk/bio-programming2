#include<iostream>
#include<cmath>
using namespace std;

void solve_after(float a,float b,float c,float x1,float x2){
    float d=sqrt(b*b-4*a*c);
    x1=(-b-d)/(2*a);
    x2=(-b+d)/(2*a);
}

void solve_before(float a,float b,float c,float x1,float x2){
    float d=sqrt(b*b-4*a*c);
    if(b>=0){
        x1=(-b-d)/(2*a);
    }else{
        x1=(-b+d)/(2*a);
    }
    x2=c/(a*x1);
}

int main(void){
    float a=1;
    float b=10000;
    float c=1;

    float after_x1,after_x2;
    float before_x1,before_x2;

    solve_after(a,b,c,after_x1,after_x2);
    solve_before(a,b,c,before_x1,before_x2);

    cout<<"before_x1:"<<before_x1<<"before_x2:"<<before_x2<<endl;
    cout<<"after_x1:"<<after_x1<<"after_x2:"<<after_x2<<endl;
}