// break statement is use to break the loop or terminate the loop
// continue

// Ques--> print "go out" on odd days of month. in each loop number ki value kaam karo
// or jese hi number = 0 hojaye tabhi loop break krdo.  terminate krdo loop ko
#include<iostream>
using namespace std;
int main()

{
	int number = 4000;
	int i;
	for (i = 1; i < 32 ; i++)
	{
		if (i%2 == 0)
		{
			continue; // loop mai se even dates ko skip krne k liye
		}
		if (number <= 0)
		{
			break; // loop ko end krne k liye
		}
		cout<<i<<endl;
		cout<<"Go out\n";
		number = number - 300;
	}
	cout<<"The value of number = ";
	cout<<number<<" so loop is end here."<<endl;
}



