#include<stdio.h>


int *f(void)
{
	static int local_auto;

	return &local_auto;

}
int main()
{
	int *ptr = (f);
	printf("%p\n",ptr);
}




