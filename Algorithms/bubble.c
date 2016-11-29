// Bubble sort
#include<stdio.h>
int main()
{
int i, k, a[100], n, s,t;
printf("Enter the number of integers\n");
scanf("%d",&n);
printf("Enter the integers\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
printf("%d\n",a[i]);
}


for(i=1;i<=n;i++)
{
 for(k=1;k<=n-i;k++)
 { 
   if(a[k]>a[k+1])
   {
    t=a[k+1];
    a[k+1]=a[k];
    a[k]=t;
   }
 }
}
for(i=1;i<=n;i++)
{
printf("%d \n",a[i]);
}
return 0;
}
/*  in the first iteration it would have to look at n elements, then after that it would look n - 1 elements and so on till 1 comparison occurs. Big Oh = n + n - 1 + n - 2 ... + 1 = (n*(n + 1))/2 = O(n^2)*/
