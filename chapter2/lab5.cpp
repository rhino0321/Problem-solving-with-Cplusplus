#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int roomcapacity,numberofpeople;
    cout<<"Enter room capacity:";
    cin>>roomcapacity;
    cout<<"Enter numberofpeople:";
    cin>>numberofpeople;
    while(1)
    {
        if(roomcapacity>=numberofpeople)
        {
            cout<<"It's legal!"<<endl;
            cout<<"addional people:"<<roomcapacity-numberofpeople<<endl;
        }
        else
        {
            cout<<"The meeting cannot be held!"<<endl;
            cout<<"excluded people:"<<numberofpeople-roomcapacity<<endl;
        }
        cout<<"Enter room capacity:";
        cin>>roomcapacity;
        cout<<"Enter numberofpeople:";
        cin>>numberofpeople;
    }
    return 0;
}
