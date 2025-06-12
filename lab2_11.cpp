#include <iostream>
using namespace std;
int main(){
    int a;
    int sum=0;
    cout<<"vvedite chislo:";
    cin>>a;
    for(int i=0;i<a+1;i++){
        sum+=i;

    }cout<<"summa:"<<sum<<endl;


    return 0;
}