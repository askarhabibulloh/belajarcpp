#include <iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"masukkan jumlah baris \n";
    cin>>n;
    cout<<endl;
    cout<<"pola satu \n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;


    cout<<"pola dua \n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;


    cout<<"pola tiga \n";

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1;k < i; k++)
        {
            cout<<"  ";
        }
        
        for (int j = n; j >= i; j--)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;
    ;


    cout<<"pola empat \n";

    for (int i = 1; i <= n; i++)
    {
        for (int k = n;k > i; k--)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <= i; j++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;
    return 0;
}
