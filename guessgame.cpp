#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int secretno=4;
    int guess, guesscount=0 ,guesslimit=3;
    bool outofguesses=false;
    while(secretno!=guess && !outofguesses)
    {
        if(guesscount<=3)
        {
            cout<<"enter your guess"<<endl;
            cin>>guess;
            guesscount++;
        }
        else
        outofguesses=true;

    }
    if(outofguesses)
    {
        cout<<"you lose!"<<endl;
    }
    else
    cout<<"you win";

 return 0;


}
