#include <iostream>
using namespace std;
int main(){
    const int size=4;
    int matrix[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }

    int maxsum=0;
    int maxrow=0;
    for(int i=0;i<size;i++){
        int rowsum=0;
        for(int j=0;j,size;j++){
            rowsum+=matrix[i][j];
        }
        if(rowsum>maxsum || i==0){
            maxsum=rowsum;
            maxrow=i;
        }
    }
    cout<<"row"<<maxrow<<"has the max sum:"<<maxsum<<endl;
    return 0;
}