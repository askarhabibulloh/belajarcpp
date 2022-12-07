#include <iostream>
using namespace std;
int main()
{
    int n,f_n,f_n1,f_n2;
    cout<<"ini program deret fibonacci";
    cout<<endl<<"masukkan nilai ke-n \n";
    cin>>n;

    f_n1=1;
    f_n2=0;
    cout<<endl<<1<<" ";
    for (int i = 1; i < n; i++)
    {
        f_n=f_n1+f_n2;
        cout<<f_n<<" ";
        f_n2=f_n1;
        f_n1=f_n;
    }
    cout<<endl<<endl;
    
    return 0;
}
