#include <iostream>
using namespace std;
int main()
{
    cout<<"loop tanpa control flow"<<endl;
    for (int i = 0; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    cout<<endl<<endl;

    cout<<"loop dengan break saat i = 5"<<endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            break;
        }
        
        cout<<i<<endl;
    }
    cout<<endl<<endl;

    cout<<"loop dengan continue saat i = 5"<<endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            continue;
        }
        
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    
    cout<<"selesai"<<endl<<endl;
    return 0;
}
