#include <iostream>
using namespace std;

int kuadrat(int x){
    int y = x*x;
    return y;
}
void tampilkan(int input){
    cout<<"Hasilnya adalah\n";
    cout<< input<<endl;
}
int main(int argc, char const *argv[])
{
    int input,hasil,a,b;
    cout<<"kuadrat dari : "<<endl;
    cin>>input;
    hasil=kuadrat(input);
    tampilkan(hasil);
    return 0;
}
