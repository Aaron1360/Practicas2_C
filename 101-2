#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

//>>>>>>>>>>PROTOTYPES>>>>>>>>>>>>>
void in_values(int size,int array[size][size]);

void print_matrix(int size,int array[size][size]);

void add(int size,int array1[size][size],int array2[size][size]);

void sub(int size,int array1[size][size],int array2[size][size]);

void mult(int size,int array1[size][size],int array2[size][size]);

int det(int size,int array[size][size]);

int cof(int size,int array[size][size],int row,int col);

//>>>>>>>>>>>MAIN FUNCTION>>>>>>>>>>>
int main()
{
    int order=0,menu=0,out=1,wait=1;
    
    printf("**********MATRIX CALCULATOR*********\n\n");
    printf("Enter matrix size: ");
    scanf("%d", &order);
    system("clear");
    int matrix1[order][order],matrix2[order][order];
    printf("**********MATRIX CALCULATOR*********\n\n");
    
    //>>>>>>>>>>>>>ENTER MATRIX VALUES>>>>>>>>>>>>>
    printf("MATRIX A: \n");
    in_values(order,matrix1);
    system("clear");
    printf("**********MATRIX CALCULATOR*********\n\n");
    printf("MATRIX B: \n");
    in_values(order,matrix2);
    system("clear");
    
    //>>>>>>>>>>>>>>>>>CHOOSE OPERATION>>>>>>>>>>>>>>>>>
    while(out)
    {
    printf("**********MATRIX CALCULATOR*********\n\n");
    printf("OPERATIONS: \n");
    printf("PRINT ARRAYS(1) \n");
    printf("ADD A+B(2) \n");
    printf("SUBTRACT A-B(3) \n");
    printf("MULTIPLY A*B(4) \n");
    printf("DETERMINANT(5) \n");
    printf("EXIT(6) \n");
    scanf("%d",&menu);
    system("clear");
    
        switch(menu)
        {
            //>>>>>>>>>>>>>PRINT>>>>>>>>>>>>>
            case 1:
                printf("**********MATRIX CALCULATOR*********\n\n");
                printf("MATRIX A: \n");
                print_matrix(order,matrix1);
                printf("\nMATRIX B: \n");
                print_matrix(order,matrix2);
                while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                break;
            //>>>>>>>>>>>>>ADD>>>>>>>>>>>>>
            case 2:
                printf("**********MATRIX CALCULATOR*********\n\n");
                printf("SUM: \n");
                add(order,matrix1,matrix2);
                while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                break;
            //>>>>>>>>>>>>>SUBTRACT>>>>>>>>>>>>>
            case 3:
                printf("**********MATRIX CALCULATOR*********\n\n");
                printf("SUBTRACTION: \n");
                sub(order,matrix1,matrix2);
                while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                break;
            //>>>>>>>>>>>>>MULTIPLY>>>>>>>>>>>>>
            case 4:
                printf("**********MATRIX CALCULATOR*********\n\n");
                printf("MULTIPLICATION: \n");
                mult(order,matrix1,matrix2);
                while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                break;
            //>>>>>>>>>>>>>DETERMINANTS>>>>>>>>>>>>>
            case 5:
                printf("**********MATRIX CALCULATOR*********\n\n");
                int select;
                printf("MATRIX(1 or 2): ");
                scanf("%d",&select);
                
                if(select==1)
                {
                    printf("DET(MATRIX 1)= %d\n",det(order,matrix1));
                    while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
                else if(select==2)
                {
                    printf("DET(MATRIX 1)= %d\n",det(order,matrix2));
                    while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
                else
                {
                    system("clear");
                    printf("**********MATRIX CALCULATOR*********\n\n");
                    printf("ONLY MATRIX 1 OR 2 AVAILABLE\n");
                    while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
                break;
            //>>>>>>>>>>>>>FINISH PROGRAM>>>>>>>>>>>>>
            case 6:
                out=0;
                break;
            default:
                system("clear");
                printf("**********MATRIX CALCULATOR*********\n\n");
                printf("\nONLY OPTIONS 1-6 AVAILABLE");
                while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
               break; 
        }
    } 
   
    return 0;
}
//>>>>>>>>>>>>>ENTER MATRIX FUNCTION>>>>>>>>>>>>>
void in_values(int size,int array[size][size])
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           printf("[%d][%d]= ",i,j);
           scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
}
//>>>>>>>>>>>>>PRINT MATRIX FUNCTION>>>>>>>>>>>>>
void print_matrix(int size,int array[size][size])
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           printf("[%d] ",array[i][j]);
        }
    printf("\n");
    }
}
//>>>>>>>>>>>>>ADD FUNCTION>>>>>>>>>>>>>
void add(int size,int array1[size][size],int array2[size][size])
{
    int res[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            res[i][j]=array1[i][j]+array2[i][j];
            printf("[%d]",res[i][j]);
        }
        printf("\n");
    } 
}
//>>>>>>>>>>>>>SUBTRACT FUNCTION>>>>>>>>>>>>>
void sub(int size,int array1[size][size],int array2[size][size])
{
    int res[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            res[i][j]=array1[i][j]-array2[i][j];
            printf("[%d]",res[i][j]);
        }
        printf("\n");
    }
}
//>>>>>>>>>>>>>MULTIPLY FUNCTION>>>>>>>>>>>>>
void mult(int size,int array1[size][size],int array2[size][size])
{
    int temp=0;
    int m[size][size];
     for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            for(int k=0;k<size;k++)
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
//>>>>>>>>>>>>>DETERMINANT FUNCTION>>>>>>>>>>>>>
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
//>>>>>>>>>>>>>COFACTOR FUNCTION>>>>>>>>>>>>>
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
