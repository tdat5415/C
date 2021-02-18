#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_MAX_VALUE 0xffffffff
#define MAX_PRIME_VALUE 0xffff

typedef unsigned __int64 UINT64;

UINT64 Random666(UINT64 n);            // 1 < number < n 인 random number return
UINT64 gcd(UINT64 m, UINT64 n);        // return value = gcd(m,n)
UINT64 inverse(UINT64 n, UINT64 b);            // return value : inverse of b mod n
											   // if return value = 0 inverse of b does NOT EXIT Error 처리가 필요함
UINT64 expo2(UINT64 a, UINT64 b, UINT64 n);  // return value result = a ^ b mod n 

UINT64 Step1(UINT64 n, UINT64 *k);     // Input n(n은 홀수) Output &k, &m such that n-1 = (2^k) * m (m은 홀수) 
char Step2(UINT64 n, UINT64 m, UINT64 k);    // Step 2 를 통과하면 return 1 아니면 0
char Miller_Rabin_Test(UINT64 n);      // Input n 이 prime이면 1, 아니면 을 return 한다. 
UINT64 Gen_Prime(UINT64 n);                  // return value : a prime # p < n

void Construct_RSA(UINT64 *n, UINT64 *e, UINT64 *d);     // (n,e) 공개키, (n,d) 비밀키, n, e, d  
UINT64 RSA_Enc32(UINT64 M, UINT64 e, UINT64 n);     // return value C = M ^ e mod n 32 비트 단위 RSA 암호화
UINT64 RSA_Dec32(UINT64 C, UINT64 d, UINT64 n);     // return value M = C ^ d mod n 32 비트 단위 RSA 복호화




UINT64 Random666(UINT64 n)
{
	int i;
	UINT64 number;

	for (i = 0; i < 100; i++)
		number = rand() & 0xffff;

	number <<= 16;
	number += rand();
	number = number % n;

	return(number);
}

UINT64 gcd(UINT64 m, UINT64 n)
{
	UINT64 r1, r2, temp = 0;

	if (m >= n) {
		r1 = m;
		r2 = n;
	}
	else {
		r1 = n;
		r2 = m;
	}

	while (r2) {
		temp = r1 % r2;
		r1 = r2;
		r2 = temp;
	}

	return(r1);
}


UINT64 inverse(UINT64 n, UINT64 b)
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

	if (u3 != 1) {
		printf("\n\n 공개키 e와 phi가 서로소가 아니다 \n\n");
		exit(0);
	}
	/*
	printf("\n u2 : %I64d u3 : %I64d \n", u2, u3);
	exit(0);
	*/

	if (u2 < 0) return((u2 + n));
	else        return(u2);

}


UINT64 expo2(UINT64 a, UINT64 b, UINT64 n)
{
	// return value result = a ^ b mod n  

	UINT64 result = 1;

	while (b) {
		if (b & 1) {
			result = (result * a) % n;
			b--;
		}
		b >>= 1;
		a = (a * a) % n;
	}
	return (result);
}



UINT64 Step1(UINT64 n, UINT64 *k)
{
	UINT64 m = n - 1;

	// 만약 n이 짝수이면 error 메세지 출력하고 exit(0)한다.  
	if (!(n & 1)) {
		printf("\n Error N is Even !!\n\n");
		exit(0);
	}

	*k = 0;
	while (!(m & 1)) {
		(*k)++;
		m >>= 1;
	}

	return(m);//n-1 = m*2^k
}

char Step2(UINT64 n, UINT64 m, UINT64 k)    // Step 2 를 통과하면 return 1 아니면 0
{
	UINT64 a, b;
	int count = 0;

	a = Random666(n);                // Step 2-1

	if (gcd(n, a) != 1)  return(0);  // Step 2-2. a와 n의 gcd 가 1이 아니면 prime이 아니다

	b = expo2(a, m, n);

	if (b == 1) return(1);           //Step 2-3 b = 1 이면 n은 Step 2를 통과하고, 소수 후보가 될 수 있다  

	do {
		if ((b == 1) || (b == (n - 1)))  return(1);
		b = (b*b) % n;
	} while (count++ < k);

	return(0);
}


char Miller_Rabin_Test(UINT64 n)
{
	char flag = 0;
	int i = 0;
	UINT64 m, k;

	if (n > N_MAX_VALUE) {
		printf("\n Please select n <= N_MAX_VALUE  \n");
		exit(0);
	}

	m = Step1(n, &k);       // Algorithm Step 1

							// Algorithm Step 2
	do {
		flag = Step2(n, m, k);
	} while ((i++ < 100) && (flag));

	return(flag);                          // Step 3 : n은 strong pseudo prime 이다 
}


UINT64 Gen_Prime(UINT64 n)                  // return value : a prime # p < n
{
	char flag = 0;
	int cnt = 0;
	UINT64 p;

	do {
		p = Random666(0xffffffff) % n;
		if (!(p & 1)) p++;
		flag = Miller_Rabin_Test(p);
	} while ((flag == 0) && (cnt++ <100000));

	if (!(flag)) {
		printf("\n\n Fail to generate a prime p \n");
		exit(0);
	}
	return(p);
}


void Construct_RSA(UINT64 *n, UINT64 *e, UINT64 *d)     // (n,e) 공개키, (n,d) 비밀키
{
	int cnt = 0;
	UINT64 p, q, phi_value, gcd_value;                                        // p, q : prime #

	p = Gen_Prime(MAX_PRIME_VALUE);//32bit
	q = Gen_Prime(MAX_PRIME_VALUE);

	phi_value = (p - 1) * (q - 1);
	*n = p * q;
	// phi_value와 서로소인 공개키 e 만들기 
	do {
		*e = Random666(*n);
		gcd_value = gcd(*e, phi_value);
	} while ((gcd_value != 1) && (cnt++ < 10000));

	if (gcd_value != 1) {
		printf("\n\n Fail to generate an encryption key e  \n");
		exit(0);
	}

	*d = inverse(phi_value, *e);
	if (*d == 0) {
		printf("\n\n Fail to calculate the inverse of e mod n \n");
		exit(0);
	}

	printf("\n e * d = %I64x mod n", ((*e * *d) % phi_value));

}

UINT64 RSA_Enc32(UINT64 M, UINT64 e, UINT64 n)
{
	return(expo2(M, e, n));
}


UINT64 RSA_Dec32(UINT64 C, UINT64 d, UINT64 n)
{
	return(expo2(C, d, n));
}



int main()
{
	int cont = 1;
	UINT64 n, e, d;
	UINT64 M, C, M1;

	srand(time(NULL));                // random function 초기화  99991

	Construct_RSA(&n, &e, &d);
	printf("\n  n =  %I64u   encryption key e = %I64u   decryption key d = %I64u \n\n ", n, e, d);

	do {

		printf("\n Write Plaintext : ");
		scanf("%I64u", &M);

		C = RSA_Enc32(M, e, n);
		printf("\n  평문 : %I64u  암호문 : %I64u \n ", M, C);

		M1 = RSA_Dec32(C, d, n);
		printf("\n 암호문 : %I64u   복호문 : %I64u \n", C, M1);

		printf("\n Do you want to continue ? (yes = 1 no = 0) : ");
		scanf("%d", &cont);

	} while (cont);

}



