#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double proportion=1.0/7.0,soda=0.35;
    double pounds;
    cout<<"Enter pounds:";
    cin>>pounds;
    while(pounds>=0) //¸õ¥X°j°é¿é¤J­t­È
    {
        double output=pounds*454.0*proportion/soda;
        cout<<"Can drink "<<output<<" soda"<<endl;
        cin>>pounds;
    }
    return 0;
}
