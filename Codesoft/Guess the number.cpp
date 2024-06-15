#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"\n";
	cout<<"--------------------------------NUMBER GUESSING GAME----------------------------------------";
	cout<<"\n";
	srand(time(0));
	int number=rand()%100+1;
	int level;
	int guess;
	int input;
	cout<<"Enter the number to select the Level\n1 for Easy\n2 for Normal\n3 for Hard"<<endl;
	cin>>level;
	if(level==1)
	{
	  	guess=15;
	}
	else if(level==2)
	{
		guess=10;
	}
    else
	{
		guess=5;
	}

	cout<<"You have "<<guess<<" Guesses!";
	cout<<"Guess the number between 1 to 100 : "<<endl;
	cin>>input;
	while(guess)
	{
		if(input<number)
		{
			 cout<<"The guessed number is low :("<<endl;
			 if(--guess==0)
			 {
			 	cout<<"You lose :(";
			 	break;
			 }
			 else if(guess==1)
			 {
			 	cout<<"It's your last chance";
			 	 cout<<"Guess the number : ";
			   cin>>input;
			 }
			 else
			 {
			 cout<<"You have remaining  "<<guess<<" guesses.Try again."<<endl;
			 cout<<"Guess the number : ";
			 cin>>input;
	     	}
		}
		 
		  
		else if(input>number)
		{   
		    if(--guess==0)
			 {
			 	cout<<"You lose :(";
			 	break;
			 }
			else if(guess==1)
			 {
			 	cout<<"It's your last chance";
			 	 cout<<"Guess the number : ";
			   cin>>input;
			 }
			 else{
			 	 cout<<"The guessed number is high :("<<endl ;
		       	cout<<"You have remaining"<<" "<<guess<<" guesses.Try again."<<endl;
			    cout<<"Guess the number : ";
			    cin>>input;
			 }
			 
		   
		}
		  
		else{
			cout<<"You won :)";
			guess=0;
		}
		  
		
	}
	
		
	
	
}
