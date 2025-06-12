#include <iostream>
using namespace std;
int main(){
    string password;
    const string cpassword="1234";

    do{
        cout<<"parol:";
        cin>>password;
        if(password!=cpassword){
            cout<<"neverniy parol"<<endl;
        }

    }while(password !=cpassword);
    cout<<"dostupno"<<endl;


    return 0;
}