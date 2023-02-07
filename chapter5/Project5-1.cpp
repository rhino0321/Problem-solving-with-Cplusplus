#include <iostream>
#include <iomanip>
#include <cmath>
void getinput(int&,int&);
void convert(int&,char&);
void output(int,int,char,char&);
int main()
{
    using namespace std;
    char flag,AMPM;
    int hours,minutes;
    do
    {
        getinput(hours,minutes);
        convert(hours,AMPM);
        output(hours,minutes,AMPM,flag);
    }   while(flag=='y'||flag=='Y');
    cout<<"End";
    return 0;
}
void getinput(int& hours,int& minutes)
{
    using namespace std;
    cout<<"Enter hours"<<endl;
    cin>>hours;
    cout<<"Enter minutes"<<endl;
    cin>>minutes;
}
void convert(int& hours,char& AMPM)
{
    if(hours>=12)
    {
        hours-=12;
        AMPM='P';
    }
    else
        AMPM='A';
}
void output(int hours,int minutes,char AMPM,char& flag)
{
    using namespace std;
    cout<<hours<<":"<<minutes<<AMPM<<"M"<<endl;
    cout<<"do you want to calculate again?"<<endl;
    cin>>flag;
}
