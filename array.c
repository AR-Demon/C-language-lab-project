#include <stdio.h>

void display(int arr[],int n){
	int i;
	int pos=0,neg=0,zer=0;
	for(i=0;i<n;i++){
		if(arr[i]<0)neg++;
		else if (arr[i]>0) pos++;
		else zer++;
	}

	printf("The array has %d positive number/s, %d negative number/s and %d zero/s.\n",pos,neg,zer);
	
	
}

int main(){
	int N;
	printf("Enter the size of array: ");
	scanf("%d",&N);
	int arr[N];
	int i;
	printf("Enter the array: ");
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	display(arr,N);
    }
	


	return 0;
}