#include <iostream>
#include <iomanip>
#include <cmath>
double cal(double,double);
double cal(double,double,double);
using namespace std;
int main()
{
    double base,perpendicular,hypotenuse,perimeter;
    cin>>base>>perpendicular;
    hypotenuse=cal(base,perpendicular);
    cout<<"hypotenuse:"<<hypotenuse<<endl;
    perimeter=cal(base,perpendicular,hypotenuse);
    cout<<"perimeter:"<<perimeter;
    return 0;
}
double cal(double base,double perpendicular)
{
    return sqrt(pow(base,2)+pow(perpendicular,2));
}
double cal(double base,double perpendicular,double hypotenuse)
{
    return base+perpendicular+hypotenuse;
}
