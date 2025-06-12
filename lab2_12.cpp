#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    int i=0;
    cout<<"txt:";
    getline(cin,s);
    for(char &c : s){
        c=tolower(c);
        

        
    }cout<<s<<endl;

    
    return 0;
}