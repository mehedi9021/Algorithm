#include<stdio.h>
void main()
{
long int a[3], c=0, m=0, temp;
int i,j;
for(i=0; i<3; i++)
{
scanf("%ld", &a[i]);
}
for(i=0; i<3; i++)
{
for(j=i+1; j<3; j++)
{
if(a[i]>a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
while(a[2] != a[1])
{
c++;
a[2] = a[2]-2;
}
m =a[2]+c;
printf("%ld", m);
}