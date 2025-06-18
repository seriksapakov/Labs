#include <iostream>
using namespace std;
int main(){
    const int size=4;
    int matrix[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }cout<<"main:";
    for(int i=0;i<size;i++){
        cout<<matrix[i][i]<<" ";
    }
    cout<<endl;

    cout<<"secondary:";
    for(int i=0;i<size;i++){
        cout<<matrix[i][size-1-i]<<" ";
    }
    cout<<endl;

    return 0;
}