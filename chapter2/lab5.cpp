#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double radius,volume;
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    volume=(4.0/3.0)*3.1415*radius*radius*radius;
    cout<<"The volume is "<<volume<<endl;
    return 0;
}
