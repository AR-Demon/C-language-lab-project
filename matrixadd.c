#include <stdio.h>
#define MAX 10
int addmatrix(int matrixa[MAX][MAX],int matrixb[MAX][MAX],int result[MAX][MAX],int row,int column){
    for(int i = 0;i<row;i++){
        for(int j = 0;i<column;j++){
            result[i][j] = matrixa[i][j] + matrixb[i][j];
        }
    }
    return 1;
}
int main (){
    int arrayA[MAX][MAX],arrayB[MAX][MAX],result[MAX][MAX];
    int i,j,k;
    for(i = 0; i<3;i++){
        for(j = 0;j<3;j++){
            printf("Enter the element of matrixA:",i);
            scanf("%d",&arrayA[i][j]);
        }
    }
    for(i = 0; i<3;i++){
        for(j = 0;j<3;j++){
            printf("Enter the element of matrixB:",i);
            scanf("%d",&arrayB[i][j]);
        }
    }
    //printf("%d",arrayA[1][1]);

    for(i = 0;i<3;i++){
        for(j = 0;i<3;j++){
            result[i][j] = arrayA[i][j] + arrayB[i][j];
        }
    }
    //addmatrix(arrayA,arrayB,result,3,3);
    printf("%d",result[1][1]);
    for(int i = 0; i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
}