#include<iostream>
using namespace std;
// For loop
 // Ques-->humko sare numbers ka sum krna hai 0 se le kr user k diye hue number tak
/*int main()
{
	int num,sum = 0;
	cin>>num;
	int i;
	for(i = 0;i <= num;i++)
	{
		sum = sum+i;
	}
	cout<<sum;
	return 0;
}


// While loop
// user jab tak koi -ve number nhi deta tab tak user se number lete raho
int main()
{
	int num;
	while(num >= 0)
	{
		cin>>num;
	}
	return 0;
}*/

// Do while loop
// same ques while loop wala(do while loop ek bar to loop mai jata hi hai)

int main()
{
	int num;
	do{
		cin>>num;
		cout<<num;
	}while(num >= 0);
return 0;
}



