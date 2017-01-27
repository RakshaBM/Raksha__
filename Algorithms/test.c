#include<stdio.h>
#include<math.h>
void swap(int *a, int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{
int a[10000][2], i,j, r,key;
int x[10000],y[10000],d[10000];
int ds;
for(i=0;i<10000;i++)
for(j=0;j<2;j++)
{a[i][j]=rand()%1000;}
printf("\n");
printf("\nEnter the key\n");
scanf("%d",&key);
printf("\nEnter the number of points needed\n");
scanf("%d",&r);
//for(i=1;i<=10;i++)
//printf("\n %d--%d--%d\n",x[i],y[i],d[i]);

for(i=0;i<10000;i++){
ds=sqrt((pow((a[key][0]-a[i][0]),2)+pow((a[key][1]-a[i][1]),2)));
d[i]=ds;
x[i]=a[i][0];
y[i]=a[i][1];
}
//for(i=0;i<10000;i++)
//printf("\n %d--%d--%d\n",x[i],y[i],d[i]);

for(i=0;i<10000;i++)
{
 for(j=0;j<10000;j++)
{
   if(d[j]>d[j+1])
   {
    swap(&d[j],&d[j+1]);
	swap(&x[j],&x[j+1]);
	swap(&y[j],&y[j+1]);
   }
}
}
for(i=1;i<=r;i++)
printf("\n %d--%d--%d\n",x[i],y[i],d[i]);
return 0;
}
