#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"masukkan jumlah baris \n";
    cin>>n;
    cout<<endl;

    cout<<"pola lima \n";

    for (int i = 1; i <= n; i++)
    {
        for (int k = n;k > i; k--)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <= 2*i-1; j++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;

    
    cout<<"pola enam \n";

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1;k < i; k++)
        {
            cout<<"  ";
        }
        
        for (int j = n; j >= 2*i-n; j--)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;

    cout<<"pola tujuh \n";

    for (int i = 1; i <= n-1; i++)
    {
        for (int k = n;k > i; k--)
        {
            cout<<"  ";
        }
        
        for (int j = 1; j <= 2*i-1; j++)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1;k < i; k++)
        {
            cout<<"  ";
        }
        
        for (int j = n; j >= 2*i-n; j--)
        {
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl<<endl;
    return 0;
}
