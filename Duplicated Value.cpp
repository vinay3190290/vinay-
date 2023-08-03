#include <stdio.h>

  int main(void) {
 
     int arr[100], i, j, size;
   
     printf("Enter the size of an array \n");
     scanf("%d",&size);
   
     printf("Enter the elements in an array\n");
   
     for( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
     }
  
     /* Logic to print duplicate
        element of an array */
      
      for(i = 0; i < size; i++){
         for(j=i+1; j < size; j++){
   
           if(arr[i] == arr[j]){
    
              printf("Duplicate element in an array is %d ",arr[i]);
              break;
            }
         }
      }
    
      return 0;
 }
