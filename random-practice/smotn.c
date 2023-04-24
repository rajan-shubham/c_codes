#include <stdio.h>

int main(void) {
	int t ;
	scanf("%d",&t);
	for(int i = 0 ; i < t ;i++){
	    int arr[3];
	    for(int i =0 ;i < 3 ; i++){
	        scanf("%d",&arr[i]);
	    }
	   for(int i =0 ; i < 3 ;i++){
	       for(int j = i ; j < 3 ;j++){
	           if(arr[i] > arr[j]){
	               int temp = arr[j];
	               arr[j] = arr[i];
	               arr[i] = temp;
	           }
	       }
	   }
	   printf("%d\n",arr[1]);
	}
	return 0;
}