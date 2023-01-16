#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double milesperhours;
    cout<<"Enter the mileshours:";
    cin>>milesperhours;
    cout<<"minites per mile:"<<int (1/milesperhours*60)<<endl;
    cout<<"seconds per mile:"<<int (1/milesperhours*60*60)<<endl;
    return 0;
}
