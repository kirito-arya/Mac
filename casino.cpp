#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace::std;
void rules();
int main()
{
    string player_name;
    int balance;
    int betting_amount;
    int guess;
    int dice;
    char choice;
    srand(time(0));

    cout<<"\n\t\t=======WELCOME TO THE CASINO WORLD=======\n\n";
    cout<<"What's your name :";
    getline(cin,player_name);
    cout<<"Enter the starting balance to play the game : $";
    cin>>balance;
    do
    {  rules();
      cout<<"Your current balance is $"<<balance<<endl;
      do
      {
          cout<<"Hey, "<<player_name<<",enter amount to bet :  $";
      cin>>betting_amount;
      if(betting_amount>balance)
         {
          cout<<"Betting amount can't be more than current balance!\n"
              <<"\nRe-enter balance\n";
        }
       } while (betting_amount>balance);
  do
  {
      cout<<"Guess any betting number between 1 to 10 :";
      cin>>guess;
      if(guess<=0 ||guess>10)
       {
           cout<<"Number should be between 1 to 10\n"<<"Re-enter your guess: \n";
       }
  } while (guess<=0||guess>10);
     dice=rand()%10+1;
    if (dice==guess)
    {
        cout<<"\n\nYou are in luck!! You have won $"<<betting_amount*10;
         balance=balance+betting_amount*10;
    }
      else
      {
          cout<<"Oops, Better luck next time!! You lost $ "<<betting_amount<<endl;
          balance=balance-betting_amount;
      }
      cout<<"\nThe  winning number was : "<<dice<<endl;
      cout<<"\n"<<player_name<<",You have balance of $ "<<balance<<"\n";
       if(balance==0)
         {
             cout<<"You have no money to play any further.";
             break;
         }
        cout<<"\n\n-->Do you want to play again (Y/N)?";
        cin>>choice;
    } while (choice=='Y'||choice=='y');
      cout<<"\n\n\n";
      cout<<"\n\nThanks for playing the game.Your balance is :  $"<<balance<<"\n\n";
      return 0;
}
void rules()
{ 
  cout<<"\t\t==========CASINO NUMBER GUESSING RULES!==========\n";
  cout<<"\t1.Choose a number between 1 to 10.\n";
  cout<<"\t2.Winner gets 10 times of the money bet\n";
  cout<<"\t3.Wrong bet, and you lose the amount you bet\n\n";
}