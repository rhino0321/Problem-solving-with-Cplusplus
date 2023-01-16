#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char record;
    cout<<"Hello"<<endl;
    cout<<"Are you having a good day?"<<endl;
    cin>>record;
    while(!((record=='y')||(record=='n')))
    {
        cout<<"Are you having a good day?"<<endl;
        cin>>record;
    }
    if(record=='y')
        cout<<"I'm glad to hear that";
    else
        cout<<"I hope your days gets better soon";
    return 0;
}
