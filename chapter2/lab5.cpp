#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double paidrate=16.78;
    double hours;
    int members;
    cout<<"Enter the hours:";
    cin>>hours;
    cout<<"Enter the members:";
    cin>>members;
    while(1)
    {
        double subtotal;
        if(hours<=40)
            subtotal=hours*paidrate;
        else
            subtotal=40*paidrate+(hours-40)*paidrate*1.5;
        double total;
        if(members>=3)
            total=subtotal*0.75-35-10;
        else
            total=subtotal*0.75-10;
        cout<<"gross pay:"<<subtotal<<endl;
        cout<<"withholding amount:"<<subtotal-total<<endl;
        cout<<"net take-home pay:"<<total<<endl;
        cout<<"Enter the hours:";
        cin>>hours;
        cout<<"Enter the members:";
        cin>>members;
    }
    return 0;
}
