#include <iostream>
using namespace std;
int main(){
    int n=1;
    while(n<100 ){
        if(n%3==0 && n%5==0){
            continue;
        }else if(n%77==0){
            break;
        }cout<<n<<" ";
        n++;
    }

    return 0;
}