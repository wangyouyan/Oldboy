#include <stdio.h>

void fun(int i)
{
	printf("%d\n",i);
	if(i>0)
	{
		fun(i/2);
	}
	printf("%d\n",i);
}

int main()
{
	fun(10);
	return 0;
}
