/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creación: 10/09/22
*
*2.-Desarrollar un programa que permita el ingreso de una matriz cuadrada A y un vector columna B, 
*para encontrar las soluciones a un sistema de ecuaciones de la forma Ax = B, tomar en consideración que en primer lugar se debe asegurar 
*la existencia de la matriz inversa A.
*/

#include <stdio.h>
#include <stdlib.h>

void input_array(int rows,int cols,int array[rows][cols]);
void print_array(int rows,int cols,int array[rows][cols]);
void mult(int rows,int cols,int array1[rows][cols],int array2[rows][cols]);

int main()
{
    int rows,cols;
    printf("enter rows and cols: \n");
    scanf("%d %d",&rows,&cols);
    int A[rows][cols],B[cols][1];
    system("clear");
    
    printf("MATRIX A:\n");
    input_array(rows,cols,A);
    system("clear");
    printf("MATRIX A:\n");
    print_array(rows,cols,A);
    
    printf("\nMATRIX B:\n");
    input_array(cols,1,B);
    system("clear");
    printf("MATRIX A:\n");
    print_array(rows,cols,A);
    printf("\nMATRIX B:\n");
    print_array(cols,1,B);
    
    
    return 0;
}

void input_array(int rows,int cols,int array[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("[%d][%d]= ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
}

void print_array(int rows,int cols,int array[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("[%d] ",array[i][j]);
        }
        printf("\n");
    }
}

void mult(int rows,int cols,int array1[rows][cols],int array2[rows][cols])
{
    int temp=0;
    int m[rows][cols];
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<rows;k++)
            {
                temp+=(array1[i][k])*(array2[k][j]);
            }
            m[i][j]=temp;
            printf("[%d] ",m[i][j]);
            temp=0;
        }
        printf("\n");
    }
}
