#include <stdio.h>

int expo(int a, int b, int n)
{
    int result = 1;

    while(b)
   {
      if( b & 1)
      {
         result = (result * a) % n ;
      }
       b >>= 1;   
       a  = (a * a) % n ;
   }
   return result;
}

int main()
{
	int a=5,b=5,n=7;
	printf("%d^%d mod %d = %d",a,b,n,expo(a,b,n));
	getchar();
	return 0;
}
