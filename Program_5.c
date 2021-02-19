//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[50], n, i,max,min;
    scanf("%d", &n);
    printf("Enter the number of inputs\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    

    //Write your code here
    max=arr[0];
   
   for(i=1;i<n;i++)
    {
      if(max<arr[i])
     { 
       max=arr[i];
     }
    }
    printf("Max=%d\n",max);

     min=arr[0];
    for(i=1;i<n;i++)
    {
    
      if(min>arr[i])
      {
        min=arr[i];}
    }
    
    printf("Min=%d\n",min);
    return 0;
}
