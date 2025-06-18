#include <iostream>
using namespace std;
int main(){
    const int size=3;
    int matrix[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }for(int j=0;j<size;j++){
        for(int i=0;i<size;i++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}