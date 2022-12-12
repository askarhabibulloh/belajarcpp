#include <iostream>
using namespace std;
int main(){
    float a,b,hasil;
    char aritmatika;

    cout<<"ini kalkulator";

    //memasukkan nilai dari user
    cout<<"masukkan nilai pertama"<<endl;
    cin>>a;
    cout<<"masukkan operator";
    cin>>aritmatika;
    cout<<"masukkan nilai kedua";
    cin>>b;
    
    cout<<a<<aritmatika<<b;

    if (aritmatika == '+'){
        hasil= a+b;
    }else if (aritmatika == '-'){
        hasil= a-b;
    }else if (aritmatika == '/'){
        hasil= a/b;
    } else{
        hasil= a*b;
    }
    
    cout<<" = "<<hasil<<endl;
    cin.get();
    return 0;
}