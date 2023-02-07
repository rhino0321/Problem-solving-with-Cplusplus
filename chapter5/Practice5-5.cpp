#include <iomanip>
#include <cmath>
void getinput(double&);
double cal(double);
void output(double,char&);
int main()
{
    using namespace std;
    char flag;
    double pounds,kilo;
    do
    {
        getinput(pounds);
        kilo=cal(pounds);
        output(kilo,flag);
    }   while(flag=='y'||flag=='Y');
    cout<<"End";
    return 0;
}
void getinput(double& pounds)
{
    using namespace std;
    cout<<"Enter pounds"<<endl;
    cin>>pounds;
}
double cal(double pounds)
{
    return pounds/2.2046;
}
void output(double kilo,char& flag)
{
    using namespace std;
    cout<<"Kilo:"<<kilo<<endl;
    cout<<"do you want to calculate again?"<<endl;
    cin>>flag;
}
