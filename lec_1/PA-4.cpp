#include<string>
#include<iostream>

using namespace std;


class Matrix{
public:
    double a,b,c,d;
    void set(double x,double y,double z,double w){
        a=x;
        b=y;
        c=z;
        d=w;
    }

    Matrix add(Matrix &q){
        Matrix m;
        m.a = a + q.a;
        m.b = b + q.b;
        m.c = c + q.c;
        m.d = d + q.d;
        return(m);
    }

    Matrix mult(Matrix &q){
        Matrix m;
        m.a = a * q.a + b * q.c;
        m.b = a * q.b + b * q.d;
        m.c = c * q.a + d * q.c;
        m.d = c * q.b + d * q.d;
        return(m);
    }

    double trace(void){
        return a+d;
    }

    Matrix inverse(void){
        Matrix m;
        double det=a*d-b*c;
        m.a=d/det;
        m.b=-b/det;
        m.c=-c/det;
        m.d=a/det;
        return(m);
    }
};

int main(void){
    Matrix p, q;
    p.set(1,2,3,4);
    cout << p.a << p.b << endl;
    cout << p.c << p.d << endl;

    cout << "トレースは" << p.trace() << endl;
    
    Matrix inv = p.inverse();
    cout << "逆行列は" << endl;
    cout << inv.a << "," << inv.b << endl;
    cout << inv.c << "," << inv.d << endl;

    return 0;

}