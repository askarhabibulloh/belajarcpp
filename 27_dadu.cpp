#include <iostream>
#include <cstdlib>

using namespace std;
 int main()
 {
    char lanjut;
    
    while (true)
    {
        cout<<"Lempar dadu (y/n)\n";
        cin>>lanjut;
        if (lanjut=='y')
        {
        cout<< "\n"<< 1+(rand()%6) << endl;
        } else if (lanjut=='n')
        {
            break;
        }else
        {
            cout<<"ketik y atau n\n";
        }
        cout<<endl;
        
    }
    
    return 0;
 }
 