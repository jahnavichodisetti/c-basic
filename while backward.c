#include<stdio.h>
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	while(b>a)
	{
		printf("%d ",b);
		b--;
	}
}
