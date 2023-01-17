#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x1,x2,y1,y2,m,c;
    cout<<"x1:";
    cin>>x1;
    cout<<"x2:";
    cin>>x2;
    cout<<"y1:";
    cin>>y1;
    cout<<"y2:";
    cin>>y2;
    m=(y2-y1)/(x2-x1);
    c=y1-m*x1;
    cout<<"c:"<<c;
    return 0;
}
