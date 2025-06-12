#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"coefficents";
    cin>>a>>b>>c;
    if(a==0){
        cout<<"this is not kvadratnoe uravnenie"<<endl;
    }
    double D=pow(b,2)-4*a*c;
    cout<<"discriminant:"<<D<<endl;
    if(D>0){
        cout<<"x1:"<<(-b+sqrt(D))/2*a<<endl;
        cout<<"x2:"<<(-b-sqrt(D))/2*a<<endl;
    }else if(D==0){
        cout<<"x:"<<(-b)/2*a<<endl;
    }else{
        cout<<"net kornei"<<endl;
    }

    return 0;
}