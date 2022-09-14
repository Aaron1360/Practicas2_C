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
#include <math.h>

//PROTOTYPES
void input_array(int rows,int cols,int array[rows][cols]);//ENTER VALUES
void print_array(int rows,int cols,int array[rows][cols]);//SHOW ARRAYS
void mult(int rows,int cols,int array1[rows][cols],int array2[cols][1]);//MULTIPLY ARRAYS
int det(int size,int array[size][size]);//CALCULATE THE DETERMINANT
int cof(int size,int array[size][size],int row,int col);//COFACTORS ARRAY 
void transpose(int size,int array[size][size],int trArray[size][size]);//TRANSPOSE MATRIX

int main()
{   
    //>>>>>>>ENTER ARRYA SIZE
    int rows,cols;
    printf("enter rows and cols: \n");
    scanf("%d %d",&rows,&cols);
    int A[rows][cols],B[cols][1],tr_A[rows][cols];
    system("clear");
    
    //>>>>>>>PRINT ARRAYS
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
    
    //>>>>>>>PRINT RESULTS
    /*
    printf("\nPRODUCTO:\n");
    mult(rows,cols,A,B);
    */
    //>>>>>>>DETERMINANT(A)
   if(rows==cols)
   {
        printf("\nDET(A): %d\n",det(rows,A));
        //>>>>>>>TRANSPOSE(A)
        if(det(rows,A) != 0 )
        {
            transpose(rows,A,tr_A);
            
        }
        else
        {
            printf("\n[A]^-1 EXIST ONLY IF DET(A) != 0\n\n");
        }
   }
   else
   {
       printf("\n\t[A] IS NOT SQUARE!\n");
   }
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

void mult(int rows,int cols,int array1[rows][cols],int array2[cols][1])
{
    int m[rows][1];
    for(int i=0;i<rows;i++){m[i][0]=0;}
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<1;j++)
        {
            for(int k=0;k<cols;k++)
            {
                m[i][0]+=(array1[i][k])*(array2[k][0]);
            }
        }
        printf("[%d]\n",m[i][0]);
    }
}

int det(int size,int array[size][size])
{
     int result=0;
    
    if(size==1){result=array[0][0];}
    
    else
    {
        for(int j=0;j<size;j++)
        {
            result+=array[0][j]*cof(size,array,0,j);
        }
    }
    return result;
}

int cof(int size,int array[size][size],int row,int col)
{
    int orden=size-1;
    int sub[orden][orden];
    int x=0,y=0;
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if((i!=row) && (j!=col))
            {
                sub[x][y]=array[i][j];
                y++;
                
                if(y>=orden)
                {
                    x++;
                    y=0;
                }
            }
        }
    } 
    return pow(-1.0,row+col)*det(orden,sub);
}

void transpose(int size,int array[size][size],int trArray[size][size])
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            trArray[i][j]=array[j][i];
            printf("%d ",trArray[i][j]);
        }
        printf("\n");
    }
}


