#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double interestdue=0,amountdue=0,minimumpayment,input=0,subamount=0;
    int flag=1;
    cout<<"Enter input:";
    cin>>input;
    while(input>=0)
    {
        subamount+=input;
        if(subamount<=1000)
            interestdue=input*0.015;
        else if((subamount>1000)&&(flag))
        {
           interestdue=(1000-(subamount-input))*0.015+(subamount-1000)*0.01;
           flag=0;
        }
        else
        {
           interestdue=input*0.01;
        }
        amountdue+=interestdue;
        if(amountdue<=10)
            minimumpayment=amountdue;
        else if(amountdue*0.1<=10)
            minimumpayment=amountdue*0.1;
        else
            minimumpayment=10;
        cout<<"interestdue:"<<interestdue<<endl;
        cout<<"amountdue:"<<amountdue<<endl;
        cout<<"minimumpayment:"<<minimumpayment<<endl;
        cout<<"Enter input:";
        cin>>input;
    }
    return 0;
}
