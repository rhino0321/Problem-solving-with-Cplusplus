#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char player1,player2;
    int done=0;
    while(!done)
    {
        cout<<"player1:";
        cin>>player1;
        cout<<"player2:";
        cin>>player2;
        if((player1=='p'&&player2=='r')||(player1=='r'&&player2=='s')||(player1=='s'&&player2=='p'))
            cout<<"player1 win"<<endl;
        else if((player1=='r'&&player2=='p')||(player1=='s'&&player2=='r')||(player1=='p'&&player2=='s'))
            cout<<"player2 win"<<endl;
        else
            cout<<"tie"<<endl;
        cout<<"done?";
        cin>>done;
    }
    return 0;
}
