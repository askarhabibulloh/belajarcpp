#include <iostream>
using namespace std;
int main(){
    float a,b,hasil;
    char aritmatika;

    cout<<"ini kalkulator"<<endl;

    //memasukkan nilai dari user
    cout<<"masukkan nilai pertama"<<endl;
    cin>>a;
    cout<<"masukkan operator"<<endl;
    cin>>aritmatika;
    cout<<"masukkan nilai kedua"<<endl;
    cin>>b;
    
    cout<<a<<aritmatika<<b;

    switch(aritmatika){
        case '+':
        hasil = a+b;
        break;

        case '-':
        hasil = a-b;
        break;

        case '*':
        hasil = a*b;
        break;

        case '/':
        hasil = a/b;
        break;

        default:
        cout<<"operator anda bukan +,-,/,*";
    }
    
    cout<<" = "<<hasil<<endl;
    cin.get();
    return 0;
}