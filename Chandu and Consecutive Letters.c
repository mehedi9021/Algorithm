#include <stdio.h>
int main(){
int n, i, j=0;
scanf("%d", &n);
char string1[100], string2[100];
for(i=0; i<n; i++)
{
scanf("%s", string1);
int x=0;
while(string1[x] != '\0')
{
if(string1[x]! = string1[x+1])
{
printf("%c", string1[x]);
x++;
}
else
{
x++;
}
}
printf("\n");
}
}