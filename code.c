#include <stdio.h>  
#include <limits.h> 
int main()  
{  
    int arr[5];
    //printf("Enter the number of votes cast to respective candidates from 1-5 respectively:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    int winner=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>winner){
            winner=arr[i];
            count=i;
            
            
        }
        
    }
    printf("The winner is %d and get  %d votes",(count+1),winner);

    return 0;
}  
