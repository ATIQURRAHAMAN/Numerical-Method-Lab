#include<bits/stdc++.h>
using namespace std;
#define EPS 0.000000001

class NewRap{
    double y;

    public:
        double f1(double x){
                y=x*x+6*x+5;
                return y;
        }


        double f2(double x){
                y=2*x+6;
                return y;
        }


        double newton_rapson(double d){
            double h=f1(d)/f2(d);
            double x=d-h;
            if(fabs(d-x)<EPS)
                return x;
            return newton_rapson(x);
        }

};




int main(){
    NewRap ob;
    double x;
    x=ob.newton_rapson(1);
    cout<<x<<endl;

    return 0;
}
