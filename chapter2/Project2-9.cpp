#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1,n2,n3,temp,substract=0;
    cin>>n1>>n2>>n3;
    temp=n1;
    if((n2-n1)<=0)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if((n3-n1)<=0)
    {
        temp=n1;
        n1=n3;
        n3=temp;
    }
    if((n3-n2)<=0)
    {
        temp=n2;
        n2=n3;
        n3=temp;
    }
    cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}
