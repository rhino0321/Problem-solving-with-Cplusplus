#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double ton=35273.92;
    double ounces;
    cout<<"Enter your ounces"<<endl;
    cout<<"if you want to end the loop enter negative value"<<endl;
    while(ounces>=0)
    {
        cin>>ounces;
        cout<<ounces/ton<<"tons"<<endl;
        int box=int (ton/ounces);
        if((ton/ounces)!=box)
            cout<<"Need "<<box+1<<" boxes"<<endl;
        else
            cout<<"Need "<<box<<" boxes"<<endl;
    }
    return 0;
}
