#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double carpetprice=2.75,discount=0.85;
    double length,total;
    cout<<"Enter the length:";
    cin>>length;
    if(length<=10)
        total=length*carpetprice;
    else
        total=27.5+(length-10)*carpetprice*discount;
    cout<<"Total="<<total;
    return 0;
}
