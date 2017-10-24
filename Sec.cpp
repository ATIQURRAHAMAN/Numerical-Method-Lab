#include<bits/stdc++.h>
using namespace std;
#define EPS 0.000000001

class SecMeth{
    double y;
public:
    double f(double x){
        y=x*x+5*x+6;
        return y;
    }
    double secant(double x2,double x1){
        double h=f(x2)*(x2-x1)/(f(x2)-f(x1));
        double x=x2-h;
        if(fabs(x2-x)<EPS)
            return x;
        return secant(x,x2);
    }

};



int main(){
    SecMeth ob;
    double x;
    x=ob.secant(-3,3);
    cout<<x<<endl;
return 0;
}
