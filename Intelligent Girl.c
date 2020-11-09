#include <stdio.h>
int main(){
int n, c, m=0, i=0;
char ch, s[100];
scanf("%s", &s);
c=strlen(s);
int x[c];
for(int i=c-1; i>=0; i--)
{
if(s[i]%2==0)
{
m++;
}
x[i]=m;
}
for(int i=0; i<c; i++)
{
printf("%d ", x[i]);
}
}