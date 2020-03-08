#include<stdio.h>
unsigned long long counts(int n_towns,int routes[])
{
    int i;
    unsigned long long prod=1;
    for(i=0;i<n_towns-1;i++)
    {
        prod*=routes[i];
	prod=prod%1234567;
    }
    return prod;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
            int n_towns;
            scanf("%d",&n_towns);
            int routes[n_towns];
            for(int j=0;j<n_towns-1;j++)
            {
                scanf("%d",&routes[j]);
            }
            unsigned long long count=counts(n_towns,routes);
            printf("%llu\n",count);
    }
    return 0;
}
