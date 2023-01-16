#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double nowcost,inflationrate,futurecost;
    int years;
    cout<<"Enter cost:";
    cin>>nowcost;
    cout<<"Enter inflationrate:";
    cin>>inflationrate;
    cout<<"Enter years:";
    cin>>years;
    futurecost=nowcost;
    for(int i=0;i<years;i++)
    {
        futurecost=futurecost*(1+0.01*inflationrate);
    }
    cout<<"Future cost:"<<futurecost;
    return 0;
}
