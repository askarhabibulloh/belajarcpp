#include <iostream>
using namespace std;
int main(){
    int a;
    
    cout<<"masukkan nilai : ";
    cin>>a;


    //if statement
    //kondisi dalam bentuk boolean
    if(a==3){
        cout<<"halo \n";
    } else if(a==4){
        cout<<"nilainya adalah 4"<<endl;
    }else {
        cout<<"angkanya bukan 3 atau 4"<<endl;
    }

    cout<<"selesai"<<endl;
    cin.get();
    return 0;
}