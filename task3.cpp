#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double p=3.14;
    double r;
    cout<<"значение: ";
    cin>>r;
    double n=pow(r,2);
    double area=p * n;
    cout<<area;
    return 0;
} 
