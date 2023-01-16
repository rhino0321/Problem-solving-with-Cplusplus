#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double inch2feet=0.083333,pi=3.1416,foot2gallons=7.48;
    double radius,depth,gallons;
    cout<<"Enter radius(inch):";
    cin>>radius;
    cout<<"Enter depth(feet):";
    cin>>depth;
    gallons=pi*(inch2feet*radius)*(inch2feet*radius)*depth*foot2gallons;
    cout<<"Gallons:"<<fixed<<setprecision(0)<<gallons<<endl;
    if(gallons>=250)
        cout<<"no need to install a seperate holding tank!"<<endl;
    else
        cout<<"need to install a seperate holding tank!"<<endl;
    return 0;
}
