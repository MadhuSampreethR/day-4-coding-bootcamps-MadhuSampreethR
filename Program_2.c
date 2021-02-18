//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
  int a[10],b[10],i,N;
  printf("Enter the number of inputs\n");
  scanf("%d",&N);
  printf("Enter the array A elements\n");
  for(i=0;i<N;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
    b[i]=a[i];
  }
  printf("Elements stored in the first array A are :\n");
  for(i=0;i<N;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\nElements copied into the second array B are :\n");
  for(i=0;i<N;i++)
  {
    printf("%d\t",b[i]);
  }
   return 0; 
}
