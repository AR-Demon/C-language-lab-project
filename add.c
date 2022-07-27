#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void dataenter(){}

void addmatrix(){

}

void display(int matrix[MAX][MAX], int row,int column){
    int i,j;
    printf("The element of the matrix is:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row, column;
    int i,j;
    int array[MAX][MAX];
    printf("Enter the row and colum of the matrix\n");
    scanf("%d %d",&row,&column);
    printf("Enter the element of the matrix:\n");
    for(i = 0;i<row;i++){
        for(j = 0;j<column;j++){
            printf("A%d%d: ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    //add 5 on each element//
    addmatrix(array,row,column);
    //printing the array//
    display(array,row,column);
    return 1;
}