#include <iostream>
using namespace std;
int main(){
    int ch;
    cout<<"menu:"<<endl;
    cout<<"1.apple 1kg=500 tg"<<endl;
    cout<<"2.potato 1kg=400 tg"<<endl;
    cout<<"3.pineapple=1500 tg"<<endl;
    cout<<"4.carrot 1kg=450 tg"<<endl;
    cout<<"5.tomato 1kg=800 tg"<<endl;

    cout<<"choose product:";
    cin>>ch;

    switch(ch){
        case 1:
            cout<<"you choose apple - 500tg"<<endl;
            break;
        case 2:
            cout<<"you choose potato - 400tg"<<endl;
            break;
        case 3:
            cout<<"you choose pineappple - 1500tg"<<endl;
            break;
        case 4:
            cout<<"you choose carrot - 450tg"<<endl;
            break;
        case 5:
            cout<<"you choose tomato - 800tg"<<endl;
            break;
        default:
            cout<<"error"<<endl;
            break;
    }

    return 0;
}