#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double interestrate=0.015;
    double cost,interest,total=0;
    int month=0;
    cout<<"Enter the cost:";
    cin>>cost;
    while(cost>=0)
    {
        total+=cost*interestrate;
        cost=cost-(50-cost*interestrate);
        month++;
    }
    cout<<"total interest:"<<total<<endl;
    cout<<"Month:"<<month<<endl;
    return 0;
}
