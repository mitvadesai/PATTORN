#include<stdio.h>
main()
{
	char i,j;
	for(i='A'; i<='E'; i++)
	{
		for(j=i; j>='A'; j--)
		{
			printf("%C ",j);
		}
		printf("\n");
	}
}