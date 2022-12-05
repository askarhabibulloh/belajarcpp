#include <iostream> 
using namespace std;

int main(){

    int a = 6;
    int b = 4;
    int hasil;

    //ini contoh pertambahan
    cout<< a + b <<endl;

    //pertambahan
    hasil = a + b;
    cout<< a << " + " << b << " = " << hasil <<endl;

    //pengurangan
    hasil = a - b;
    cout<< a << " - " << b << " = " << hasil <<endl;

    //perkalian
    hasil = a * b;
    cout<< a << " x " << b << " = " << hasil <<endl;

    //pembagian
    hasil = a / b;
    cout<< a << " / " << b << " = " << hasil <<endl;

    //modulus
    hasil = a % b;
    cout<< a << " % " << b << " = " << hasil <<endl;

    //pembagian yang bener
    //salahsatu harus float, dan variabel penampungnya juga harus float
    float b2 = 4;
    int a2 = 6;
    float hasil2;
    hasil2 = a2 / b2;
    cout<< a2 << " / " << b2 << " = " << hasil2 <<endl;

    cin.get();
    return 0;
}