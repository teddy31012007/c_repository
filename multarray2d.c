#include<stdio.h> 
 
void multiplyMatrices(int rows1,int cols1,int rows2,int cols2,int mat1[rows1][cols1],int 
mat2[rows2][cols2]) 
{ 
    int result[rows1][cols2],i,j,k; 
    for(i= 0; i<rows1; i++)  
    { 
        for(j = 0; j < cols2; j++)  
         { 
               result[i][j] = 0; 
               for(k = 0; k < cols1; k++)  
               { 
                    result[i][j] += mat1[i][k] * mat2[k][j]; 
               } 
        } 
    } 
    printf("Product of the matrices:\n"); 
    printMatrix(rows1, cols2, result); 
} 
 
void printMatrix(int rows, int cols, int mat[rows][cols])  
 { 
  int i,j; 
    for (i = 0; i < rows; i++)  
    { 
        for (j = 0; j < cols; j++)  
        { 
            printf("%d ", mat[i][j]); 
        } 
        printf("\n"); 
    } 
} 
int main()  
{ 
    int rows1, cols1, rows2, cols2,i,j; 
 
    printf("Enter the number of rows and columns for the first matrix: \n"); 
    scanf("%d %d", &rows1, &cols1); 
 
    printf("Enter the number of rows and columns for the second matrix: \n"); 
    scanf("%d %d", &rows2, &cols2);    
     
    int mat1[rows1][cols1], mat2[rows2][cols2]; 
    if (cols1 != rows2)  
    { 
    printf("Matrix multiplication not possible. Number of columns in the first matrix must equal the number of rows in the second matrix.\n"); 
        return 1; 
    } 
 
    printf("Enter elements of the first matrix:\n"); 
    for (i = 0; i < rows1; i++)  
    { 
        for (j = 0; j < cols1; j++)  
       { 
             scanf("%d", &mat1[i][j]); 
        } 
    } 
 
    printf("Enter elements of the second matrix:\n"); 
    for (i = 0; i < rows2; i++)  
    { 
        for (j = 0; j < cols2; j++)  
        { 
            scanf("%d", &mat2[i][j]); 
        } 
    } 
    printf("Matrix - A\n"); 
    printMatrix(rows1,cols1,mat1); 
    printf("Matrix - B\n"); 
    printMatrix(rows2,cols2,mat2); 
    multiplyMatrices(rows1,cols1,rows2,cols2,mat1, mat2); 
 
    return 0; 
}
