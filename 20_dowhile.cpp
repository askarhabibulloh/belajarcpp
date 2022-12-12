#include <iostream>
using namespace std;
int main() {

    int a=1;

    //syaratnya salah
    do
    {
        cout<<"nilai a sekarang-->"<< a <<endl;
    } while (a<0);
    
    //syaratnya benar
    int b=1;
    do
    {
        cout<<"nilai b sekarang-->"<< b <<endl;
        b++;
    } while (b<5);
    
    cout<<"selesai"<<endl;

    return 0;
}