#include<stdio.h>
#include<stdlib.h>

typedef unsigned __int64 UINT64;

void inverse(UINT64 n, UINT64 b)
{
	__int64 q;
	__int64 u1 = 1, u2 = 0, u3 = n;
	__int64 v1 = 0, v2 = 1, v3 = b;
	__int64 t1, t2, t3;

	if (n < b) {
		printf("\n\n n 가  b 보다 작다\n\n");
		exit(0);
	}

	while (v3) {
		q = u3 / v3;

		t1 = u1 - v1*q; t2 = u2 - v2*q; t3 = u3 - v3*q;
		u1 = v1; u2 = v2; u3 = v3;
		v1 = t1; v2 = t2; v3 = t3;
	}
	printf("%I64d * %I64d + %I64d * %I64d = %I64d",n,u1,b,u2,u3);
}

int main()
{
	inverse(17,13);
	getchar();
	return 0;
}
