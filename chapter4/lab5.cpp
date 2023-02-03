#include <iostream>
#include <iomanip>
#define M_PI
#include <cmath>
double hypotenuse(double,double);
using namespace std;
int main()
{
    double base,perpendicular;
    cin>>base>>perpendicular;
    cout<<"hypotenuse:"<<hypotenuse(base,perpendicular);
    return 0;
}
double hypotenuse(double base,double perpendicular)
{
    return sqrt(pow(base,2)+pow(perpendicular,2));
}
