#include<stdio.h>
#include<stdlib.h>

#define MAX(x,y) ((x>y)?x:y)

int main()
{
	unsigned int x=10,y=5;
	unsigned __int64 a=0xffffffff,b=0xfffffffe;
	printf("\n MAX(%u,%u) = %u \n",x,y,MAX(x,y));
	printf("\n MAX(%I64x,%I64x) = %I64x \n",a,b,MAX(a,b));
	getchar();
	return 0;
}
