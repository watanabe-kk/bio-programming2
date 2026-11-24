#include<iostream>
#include<cmath>
using namespace std;

double f1(double x){
    double a=exp(x)+x-5;
    return a;
}

double f2(double x){
    double a=cbrt(x);
    return a;
}

double bisection(double f(double),double a,double b,double error,int& count){
    count=0;
    double mid;

    while((b-a)>error){
        mid=(a+b)/2;
        double f_mid=f(mid);
        double f_a=f(a);

        if(f_mid==0){
            a=b=mid;
            count++;
            break;
        }

        if((f_a<0&&f_mid>0)||(f_a>0&&f_mid<0)){
            b=mid;
        }else{
            a=mid;
        }

        count++;

    }
    return (a+b)/2;
}

int main(void){
    int count1,count2;
    double solve1=bisection(f1,0,2,1e-12,count1);
    cout<<"(1)の答え："<<solve1<<"回数："<<count1<<endl;
    double solve2=bisection(f2,-0.1,0.2,1e-12,count2);
    cout<<"(2)の答え："<<solve2<<"回数："<<count2<<endl;

    return 0;
}