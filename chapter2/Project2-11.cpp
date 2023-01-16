#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int startdegree,enddegree;
    double velocity;
    cout<<"Enter startdegree:";
    cin>>startdegree;
    cout<<"Enter enddegree:";
    cin>>enddegree;
    for(int i=0;i<=(enddegree-startdegree);i++)
    {
        velocity=331.3+0.61*(startdegree+i);
        cout<<"At "<<startdegree+i<<" degrees Celsius the velocity of sound is ";
        cout<<fixed<<setprecision(1)<<velocity<<" m/s"<<endl;
    }
    return 0;
}
