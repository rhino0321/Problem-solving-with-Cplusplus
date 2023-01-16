#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double basenumber,multiply=1;
    int exponent;
    cout<<"Enter base number:";
    cin>>basenumber;
    cout<<"Enter exponent:";
    cin>>exponent;
    for(int i=1;i<=exponent;i++)
        multiply*=basenumber;
    if(exponent==0)
        multiply=1;
    cout<<"output:"<<multiply<<endl;
    return 0;
}
