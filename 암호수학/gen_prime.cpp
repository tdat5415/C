#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef unsigned __int64 LONG;

LONG modpow(LONG,LONG,LONG);
LONG gen_prime();
int Prime(LONG);
int check(int);

//int pp,A;

int main()
{
	LONG p;
	srand(time(NULL));
	if(check(10000)) printf("번만에 합성수가 나왔습니다.");
	else printf("모두 소수입니다.");
	getchar(); 
	/*
	while(1)
	{
		p=gen_prime();
		printf("%I64u\n",p);
		if(Prime(p)) printf("합성수입니다.@@@@@@@@@@@@@@@@@@@@@@@\n");
		else printf("소수입니다.\n"); 
		getchar();
	}*/
}

LONG modpow(LONG a,LONG b,LONG n)
{
	LONG res=1;
	while(b)
	{
		if(b&1) res=(res*a)%n;
		b>>=1;
		a=(a*a)%n;
	}
	return res;
}

LONG gen_prime()
{
	LONG p,a;
	int cont=1;
	while(cont)
	{
		do
		{
			p=rand();
		}while(!(p&1) || p<=1);
		for(int i=0;i<100;i++)
		{
			do
			{
				a=rand()%p;
			}while(a<=1);
			if(modpow(a,p-1,p)!=1)//소수판별//(a,p-1,p)!=1로 하면 소수 (a,p,p)!=a로 하면 의사소수  
			{
				cont=1;
				i=100;
			}
			else cont=0;
		}
	}
//	pp=p;
//	A=a;
	return p;
}

int Prime(LONG inp)
{
	LONG temp=inp;
	char*arr=(char*)calloc(inp+1,sizeof(char));
	LONG i,ii;
	for(i=3;i*i<=inp;i+=2)
	{
		if(arr[i]==0)
		{
			for(ii=i*i;ii<=inp;ii+=2*i)
			{
				arr[ii]=1;
			}
		}
	}
	if(inp%2==0) inp--;
	for(i=inp;arr[i]==1;i-=2);
	free(arr);
	if(temp==i) return 0;
	return 1;
}

int check(int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		if(Prime(gen_prime()))
		{
			printf("%d",i);
			return 1;
		}
	}
	return 0;
}











