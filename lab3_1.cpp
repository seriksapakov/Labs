#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"vvedite:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int j=0;j<n+1;j++){
        sum+=a[j];
    }cout<<"summa:"<<sum<<endl;
    
    
    return 0;
}