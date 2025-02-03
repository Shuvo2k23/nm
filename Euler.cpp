#include<bits/stdc++.h>
using namespace std;
#define db double

class Euler{
private:
    db px,py,h,x;
    db f(db x,db y){
        return -y;
    }
public:
    Euler(db px,db py, db h, db x){
        this->px = px;
        this->py = py;
        this->h = h;
        this->x = x;
    }
    db solve(){
        while(px<x){
            py = py + h*f(px,py);
            px +=h;
        }
        return py;
    }
};

int main(){
    Euler euler = Euler(0, 1,0.01, 0.04);
    cout << euler.solve() << endl;
}