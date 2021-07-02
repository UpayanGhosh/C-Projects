#include <stdio.h>
int main()
{ int arr[69]={10,5,2,13,40,1,10,17,180,9,20};
  int small=arr[0];
    for(int i=0; i<11; i++)
    {
        if(arr[i]<small)
        small=arr[i];
    }
printf("The smallest digit is %d", small);
        
return 0;
}