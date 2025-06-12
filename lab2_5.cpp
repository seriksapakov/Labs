#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"your age:";
    cin>>a;
    if(a<7){
        cout<<"vy doshkolnik";
    }else if(7<=a<17){
        cout<<"vy shkolnik";
    }else if(17<=a<=22){
        cout<<"vy student";
    }else if(22<a<=60){
        cout<<"vy rabotaete";
    }else if(a>60){
        cout<<"vy pensioner";
    }

    return 0;
}