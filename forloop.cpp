#include <iostream>
using namespace std;

int main()
{
    int total;
    cout<<"\n Loop 1 \n";
    for (int i = 1,total=i; i <= 10; i++,total+=i)
    {
        cout<<i<<" ||| "<<total<<endl;
    }


    cout<<"\n Loop 2 \n";
    for (int i = 1,total=i; i <= 10; i+=2,total+=i)
    {
        cout<<i<<" ||| "<<total<<endl;
    }


    cout<<"\n Loop 3 \n";
    for (int i = 1,total=i; i >= -10; i--,total+=i)
    {
        cout<<i<<" ||| "<<total<<endl;
    }
    
    return 0;
}
