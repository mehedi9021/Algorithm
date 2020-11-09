#include<stdio.h> 
int main() { int n, k, a[1000], i, j, sum=0, key;
scanf("%d %d", &n, &k); 
for(i=1; i<=n; i++) 
{ 
scanf("%d", &a[i]); 
} for(i=2; i<=n; i++) 
{ 
Key = a[i]; 
j=i-1; 
while(j>=1 && key<a[j]) 
{ 
a[j+1] = a[j]; j--; 
} 
j++;
a[j] = key; 
} 
for(i=1; i<=n; i++) 
{ 
sum+=a[i]; 
if(sum>k) 
{ 
break; 
} 
} 
printf("%d", i-1); return 0; 
}