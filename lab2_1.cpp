#include <iostream>
using namespace std;
int main(){
    char operation;
    int a;
    int b;
    cout<<"the first number:";
    cin>>a;
    cout<<"the second number:";
    cin>>b;
    cout<<"operation is:";
    cin>>operation;
    if(operation=='+'){
        cout<<"result is:"<<a+b<<endl;
    }else if(operation=='-'){
        cout<<"result is:"<<a-b<<endl;
    }else if(operation=='*'){
        cout<<"result is:"<<a*b<<endl;
    }else if(operation=='/'){
        cout<<"result is:"<<a/b<<endl;
    }else{
        cout<<"operation is not true!";
    }


    return 0;
}