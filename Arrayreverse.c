#include <stdio.h>
#include <stdlib.h>

int reverse_array(int array[],int number){
    int temp;
    for(int i=0;i<number/2;i++){

        temp = array[i];
        array[i] = array[number-i-1];
        array[number-i-1] = temp;

    }
    return 0;
}
void printarray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
  printf("%d ", arr[i]);

printf("\n");
}
int main(){
    int n = 9;
    //printf("Enter no of elenent of the array");
    //scanf("%d",&n);
    int array[]  = {1,2,3,4,5,6,7,8,9};
    //int *ptr;
    //int dynamicarray;
    //ptr = (int *)malloc(n*sizeof(int));
    reverse_array(array,n);
    printarray(array,n);
    //printf("the array is:%d", array);
    return 0;
}