#include<iostream>
#include<cmath>
using namespace std;

double f1(double x){
    return exp(x)+x-5;
}

double f2(double x){
    return cbrt(x);
}

double df1(double x){
    return exp(x)+1;
}

double df2(double x){
    return (1/3)*cbrt(-x*x);
}

double newton(double f(double),double df(double),double x0,double error,int& count){
    double x=x0;
    count=0;
    double sol;
    for(int i=0;i<1000;i++){
        double grad=df(x);
        double next_x=x-f(x)/grad;
        count++;
        if(fabs(next_x-x)<error){
            sol=next_x;
        }

        x=next_x;
    }
    return sol;
}

int main(void){
    double sol1,sol2;
    int count1;
    sol1=newton(f1,df1,0,1e-12,count1);
    cout<<"(1)の答え："<<sol1<<"回数："<<count1<<endl;
    int count2;
    sol2=newton(f2,df2,0,1e-12,count2);
    cout<<"(2)の答え："<<sol2<<"回数："<<count2<<endl;
}