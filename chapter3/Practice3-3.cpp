#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int done=0;
    while(!done)
    {
        int month,day;
        cout<<"Month:";
        cin>>month;
        cout<<"day:";
        cin>>day;
        switch(month)
        {
            case 1:
                if(day<18)
                    cout<<"Capricorn"<<endl;
                else if(18<=day&&day<=19)
                    cout<<"Capricorn and cusp(Aquarius)"<<endl;
                else if(20<=day&&day<=21)
                    cout<<"Aquarius and cusp(Capricorn)"<<endl;
                else
                    cout<<"Aquarius"<<endl;
                break;
            case 2:
                if(day<17)
                    cout<<"Aquarius"<<endl;
                else if(17<=day&&day<=18)
                    cout<<"Aquarius and cusp(Pisces)"<<endl;
                else if(19<=day&&day<=20)
                    cout<<"Pisces and cusp(Aquarius)"<<endl;
                else
                    cout<<"Pisces"<<endl;
                break;

        }
        cin>>done;
    }
    return 0;
}
