#include<bits/stdc++.h>
using namespace std;
//typedef ...
#define ll long long
#define endl        '\n'
#define en          '\n';
class Tripezoidal{
private:
    double a,b,n;
    double function(double x){
        return 1/(1+x);
    }
public:
Tripezoidal(double a,double b,double n){
    this->a=a;
    this->b=b;
    this->n=n;
}
// formula = h((y0+yn)/2 + ∑yi for i=1 to n-1)
double integral(){
    double h = (b-a)/n;
    double sum = 0.5*(function(a) + function(b));
    for(int i=1;i<n;i++){
        double x = a + i*h;
        sum += function(x);
    }
    return h*sum;
}
};
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    Tripezoidal tz = Tripezoidal(0,1,8);
    cout<<tz.integral()<<endl;

    return 0;
}
