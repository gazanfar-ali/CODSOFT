#include <iostream>
using namespace std;

//This program is for a basic Calculator
int main()
{
	//Menu of Calculator
	cout<<"                BASIC CALCULATOR                        " <<endl;
	cout<<"--------------------------------------------------------" <<endl;
	cout<<"1.Addition  2.Subtraction  3.Multipalication  4.Division" <<endl;
	
	//Taking input for choice of operation
	int choice;
	cout<<"\nEnter choice of operation from 1 to 4: ";
	cin>>choice;
	
	//Declaring Variables
	double num1,num2;
	
	//taking input of numbers from user
	cout<<"Enter first number: ";
	cin>>num1;
	
	cout<<"Enter second number: ";
	cin>>num2;
	
	//Using IF-ELSE Function 
	if (choice==1)
	{
		cout<<"THE ADDITION IS: " <<num1 + num2 <<endl;
	}
	
	else if (choice==2)
	{
		cout<<"THE SUBTRACTION IS: " <<num1 - num2 <<endl;
	}
	
	else if (choice==3)
	{
		cout<<"THE MULTIPALICATION IS: " <<num1 * num2 <<endl;
	}
	
	else if (choice==4)
	{
		cout<<"NOTE: For Division 'Num1' must be greater than 'Num2'. " <<endl;
		cout<<"THE DIVISION IS: " <<num1 / num2 <<endl;
	}
	
	else 
	{
		cout<<"Invalid Choice....!  Please choose from 1 to 4.";
	}
	
	return 0;
}
