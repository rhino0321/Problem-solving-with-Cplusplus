#include <iostream>
#include <iomanip>
#include <cmath>
void swapp(int&,int&);
void getinput(int&,int&,int&);
int main()
{
    using namespace std;
    int a,b,c;
    getinput(a,b,c);
    swapp(a,b);
    swapp(a,c);
    swapp(b,c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
void getinput(int& a,int& b,int& c)
{
    using namespace std;
    cin>>a>>b>>c;
}
void swapp(int& x,int& y)
{
    int temp;
    if(x<y)
    {
        temp=x;
        x=y;
        y=temp;
    }
}
