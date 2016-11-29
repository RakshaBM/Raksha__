#include<stdio.h>
int main()
{
int n,j,i,f,a[100],x;
f=0;
printf("Enter the n\n");
scanf("%d",&n);
printf("Enter the set of numbers\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

printf("\nEnter x\n");
scanf("%d",&x);
i=1;
j=n;
while(i<j)
{
 if((a[i]+a[j])==x)
 {printf("\n %d %d\n",a[i],a[j]); 
  f=1;
  break;}
 else if((a[i]+a[j])<x)
    i++;
else
j--;
}
if(f==0)
printf("\nnot found\n");
return 0;
}

