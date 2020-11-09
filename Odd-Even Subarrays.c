#include<stdio.h>
int main()
{
int n, a[1000], i, sum, x;
long long int p=0;
scanf("%d", &n);
sum = n;
a[sum] = 1;
for(i=0; i<n; i++)
{
scanf("%d", &x);
x=x%2;
if(x==0)
sum = sum-1;
else
sum = sum+1;
p=p + a[sum];
a[sum]++;
}
printf("%lld", p);
}