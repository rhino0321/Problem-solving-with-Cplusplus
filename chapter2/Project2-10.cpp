#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num,minimum,maximum;
    cout<<"Enter num:";
    cin>>num;
    minimum=num;
    maximum=num;
    while(num>=0)
    {
        if(minimum-num<0)
            minimum=num;
        if(maximum-num>0)
            maximum=num;
        cout<<"Maximum:"<<maximum<<endl;
        cout<<"Minimum:"<<minimum<<endl;
        cout<<"Enter num:";
        cin>>num;
    }
    cout<<"out the loop!";
    return 0;
}
