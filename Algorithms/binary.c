// Binary algorithm

#include <stdio.h>
 
int main()
{
   int c, first, last, middle, n, s, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &s);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
       if (array[middle] == s) {
         printf("%d found at location %d.\n", s, middle+1);
	break;}
	else if (array[middle] < s)
         first = middle + 1;    
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", s);
 
   return 0;   
}
/* Time complexity for binary search O(log n). It runs until n/2 is 1. That is how many times n should be divided by 2 to get 1. 1=n/2^x on soving x=logn*/
