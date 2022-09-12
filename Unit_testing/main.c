#include<main.h>

int main()
{
	int a = 10;
	int b = 20;
	int actual = test1(a,b);
	int addition = test1(a,b);
	int expected = 30;
	if (addition == expected)
	{
	printf("Test1 pass and value of Addition = %d\n",addition);
	}
	else
	printf("Test1 fail\n");
	printf("Actual value comes: %d\n",actual);
}



