#include<iostream>
using namespace std;

/*int main()
{
	int marks;
	cout<<"Enter your marks"<<endl;

	cin>>marks;

	if(marks >= 30 && marks < 50)
	{
		cout<<"You passed with 3nd division";
	}
	else if (marks >= 50 && marks <= 70)
	{
		cout<<"You passed with 2st division";
	}
	else if (marks > 71)
	{
		if(marks > 90)
		cout<<"You passed with first Division with Honours ";
		else
			cout<<"You got 1st division";
	}
	else
		cout<<"You are fail";
}

// Ques: find largest of 3 given number

int main()
{
	int a, b, c;
 // aese bhi type kr sakte hai cin>>a>>b>>c;
	cin>>a;
	cin>>b;
	cin>>c;

	if (a > b)
	{
		if (a > c)
		{
		cout<<"The largest number is a\n";
		cout<<a;
		}
		else
		{
		cout<<"The largest number is c\n";
		cout<<c;
		}
	}
	else if (b > a)
	{
		if (b > c)
		{
		cout<<"The largest number is b\n";
		cout<<b;
		}
	else
		{
		cout<<"The largest number is c\n";
		cout<<c;
		}
	}

return 0;
}*/

int main()
{
	int a;
	cin>>a;
	int temp = a%2;
	if(temp == 0){
		cout<<"The number you enter is an even number";
	}
	else
		cout<<"The number you enter is an odd number";
	return 0;
}





