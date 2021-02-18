#include<stdio.h>
#include<stdlib.h>

typedef unsigned __int64 UINT64;//bitwise AND OR XOR compement

int main()
{
	UINT64 xval = 0xffffffffffffffff;
	UINT64 yval = 0x1111111111111111;
	UINT64 a=5,b=4;
	
	printf("\n %d AND %d = %d \n",a,b,a&b);
	printf("\n %d OR %d = %d \n",a,b,a|b);
	printf("\n %d XOR %d = %d \n",a,b,a^b);
	printf("\n ~%u = %u \n\n",a,~a);
	
	printf("\n %#I64x AND %#I64x = %#I64x \n",xval,yval,xval&yval);
	printf("\n %#I64x OR %#I64x = %#I64x \n",xval,yval,xval|yval);
	printf("\n %#I64x XOR %#I64x = %#I64x \n",xval,yval,xval^yval);
	printf("\n ~%#I64x = %#I64x \n\n",xval,~xval);
	printf("\n ~%#I64x = %#I64x \n\n",yval,~yval);
	getchar();
	return 0;
}
