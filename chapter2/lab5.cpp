#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double dollars,interestrate,duration,interest,facevalue,payment;
    cout<<"Enter dollars:";
    cin>> dollars;
    cout<<"Enter interestrate:";
    cin>> interestrate;
    cout<<"Enter duration:";
    cin>> duration;
    while(1)
    {
        facevalue=dollars/(1.0-interestrate*duration/12);
        payment=facevalue/duration;
        cout<<"face value:"<<facevalue<<endl;
        cout<<"payment:"<<fixed<<setprecision(2)<<payment<<endl;
        cout<<"Enter dollars:";
        cin>> dollars;
        cout<<"Enter interestrate:";
        cin>> interestrate;
        cout<<"Enter duration:";
        cin>> duration;
    }
    return 0;
}
