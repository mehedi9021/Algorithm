#include <stdio.h>
int main()
{
long long int i, n, t1 = 0, t2 = 1, a[1000], T;
scanf("%lld", &n);
a[0]=0;
a[1]=1;
for (i = 2; i <= n; ++i)
{
a[i]=a[i-1] + a[i-2];
a[i]=a[i]%1000;
}
printf("%lld", a[n]);
return 0;
}