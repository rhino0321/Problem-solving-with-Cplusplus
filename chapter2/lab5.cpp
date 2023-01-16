#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double carpetprice,discount;
    double length,total;
    cout<<"Enter the length:";
    cin>>length;
    cout<<"Enter the carpetprice:";
    cin>>carpetprice;
    cout<<"Enter the discount:";
    cin>>discount;
    if(length<=10)
        total=length*carpetprice;
    else
        total=27.5+(length-10)*carpetprice*discount;
    cout<<"Total="<<total;
    return 0;
}
