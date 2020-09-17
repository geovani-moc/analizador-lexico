#include <stdio.h>
 
int binarySearch(int a[], int left, int right, int x)
{
   printf("Using binary search from left=%d to right=%d \n",left,right);
   if (right >= left)
   {
        int i;
        printf("Sublist considered: ");
        for (i=left;i<=right;i++) {
            printf("%d ",a[i]);
        }
        printf("\n");
        int mid = left + (right - left)/2;
 
        if (a[mid] == x)  
            return mid;
 
        if (a[mid] > x) {
            printf("Choosing left half to continue search...\n");
            return binarySearch(a, left, mid-1, x);
        } else {
            printf("Choosing right half to continue search...\n");
            return binarySearch(a, mid+1, right, x);    
        }
 
        
   } else {
       printf("No sublist to consider anymore...\n");
   }
 
   return -1;
}
 
int main(void)
{
   int a[] = {23, 31, 40, 52, 62, 71, 87, 91, 100, 101, 120, 131};
   int size = 12;
   int x = 91;
   int result = binarySearch(a, 0, size-1, x);
   if (result == -1)
        printf("* Element is not found in list\n");
   else 
        printf("* Element is found at index %d\n",result);
   return 0;
}