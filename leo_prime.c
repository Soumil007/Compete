//Find the max no of primes in the inclusive range 
#include<stdio.h>
int count_prime(unsigned long long);
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		unsigned long long n;
		scanf("%d",&n);
		printf("%d\n",count_prime(n));
	}
	return 0;
}
int count_prime(unsigned long long n)
{
	int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43};
	int i,count=0;
	unsigned long long prod=1;
	int size;
	size = sizeof(prime)/sizeof(prime[0]);//Method.
	if(n<2)
		return 0;
	else
	{
		for(i=0;i<size;i++)
		{
			prod*=prime[i];
			if(prod<=n && prod>0)
				count ++;
			else
				break;
		}
	}
	return count;
}
