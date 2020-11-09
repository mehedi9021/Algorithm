#include<stdio.h>
int main()
{
int x, n, i;
scanf("%d", &x);
while(x--)
{
scanf("%d", &n);
int a[n], flag=0;
int sum=0, s=0, sum1=0, max=-100000;
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
s+=a[i];
if(s<0)
s=0;
if(s>sum)
{
flag=1;
sum=s;
}
if(a[i]>0)
sum1+=a[i];
if(a[i]>max)
max=a[i];
}
if(flag!=1)
printf("%d %d\n", max, max);
else
printf("%d %d\n", sum, sum1);
}
}