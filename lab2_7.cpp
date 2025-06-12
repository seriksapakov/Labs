#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"chislo:";
    cin>>num;
    int a=0,b=1,sum=0;
    for(int n=0;n<num;n++){
        sum+=a;
        int next=a+b;
        a=b;
        b=next;

    }cout<<"the sum is:"<<sum<<endl;


    return 0;
}