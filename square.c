#include<stdio.h>

int main()
{
	int count,n;

	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	count=1;
	
	start:
	printf("%4d %4d\n",count,(count*count));
	count++;

	if(count<=n)
		goto start;

	return 0;
}
