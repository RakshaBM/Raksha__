// Linear search algorithm
#include<stdio.h>
int main()
{
	int n,i,a[100],s,f;
f=0;
	printf("\n Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
	 if(a[i]==s)
	
		printf("Number found at %d\n",i);
	f=1;
	}
	}
		if(f==0)
		printf("number not found");
return 0;
}
/* The time complexity  for linear search algorithm O(n) because the loop in line 18 which does the linear search starts from 1 and iterates till n. the running time proportional to n. */

		
