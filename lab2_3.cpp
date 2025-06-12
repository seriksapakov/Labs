#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"enter: ";
    cin>>n;
    if(n%4==0){
        cout<<"Leap year";
    }else{
        cout<<"not leap year";
    }
    
    return 0;
}