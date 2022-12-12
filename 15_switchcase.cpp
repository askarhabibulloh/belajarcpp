#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "masukkan nilai : ";
    cin>>a;

    switch(a ){
        case 5:
            cout<< "benar ini adalah 5";
            break;
        case 4:
            cout<<"ini adalah 4";
            break;
        default:
            cout<<"ini adalah default";
    }

    cout<<endl<<"selesai";

    return 0;
}