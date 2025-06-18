#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
    int n;
    int odd=0;
    int even=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even+=1;
        }else{
            odd+=1;
        }
        
    }cout<<"even:"<<even<<endl;
    cout<<"odd:"<<odd<<endl;


    return 0;
}