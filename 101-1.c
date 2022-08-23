/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creación: 22/08/22
*
*1.-Desarrollar un programa que permita el ingreso de dos matrices cuadradas nxn (A y B) y que se efectuen operaciones sobre ellas, 
*la suma A+B, resta A-B, multiplicación A*B, así como la obtención del determinante.
(SIN PUNTEROS)
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>

int main()
{
    char d;
    int n=0,m=0,menu=0,out=1,wait=1;
    
    //*********************INGRESAR MATRICES**********************************
    //MATRIZ A    
    printf("Tamaño de la matriz A: ");
    scanf("%d",&n);
    system("cls");

    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
            system("cls");
        }
    }
    system("cls");

    //MATRIZ B 
    printf("Tamaño de la matriz B: ");
    scanf("%d",&m);
    system("cls");

    int B[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
            system("cls");
        }
    }
    system("cls");

    //*********************ELEGIR OPERACION**********************************
    while (out)
    {
        printf("\nOPERACIONES: \n");
        printf("VER MATRICES (1) \n");
        printf("SUMAR A+B (2) \n");
        printf("RESTAR A+B (3) \n");
        printf("MULTIPLICAR A*B (4) \n");
        printf("DETERMINANTE (5) \n");
        printf("SALIR (6) \n");
        scanf("%d",&menu);
        system("cls");

        switch (menu)
        {
        case 1:
            //*********************IMPRIMIR MATRICES**********************************
            //MATRIZ A
            printf("MATRIZ A:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%3d",A[i][j]);
                }
                printf("\n");
            } 
            //MATRIZ B
            printf("\nMATRIZ B:\n");
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<m;j++)
                {
                    printf("%3d",B[i][j]);
                }
                printf("\n");
            } 
            getch();
            system("cls");
            break;
        case 2:
            //*********************SUMAR MATRICES**********************************
            if(n==m)
                {
                    printf("SUMA=\n");
                    int S[n][n];
                    for(int i=0;i<n;i++)
                    {
                        for(int j=0;j<n;j++)
                        {
                            S[i][j]=A[i][j]+B[i][j];
                            printf("%3d",S[i][j]);
                        }
                            printf("\n");
                    }
                    getch();
                    system("cls");
                }
                else
                {
                    printf("LAS MATRICES NO SON DEL MISMO TAMAÑO\n");
                    getch();
                    system("cls");
                }
            break;
        case 3:
            //*********************SUMAR MATRICES**********************************
            if(n==m)
                {
                    printf("RESTA=\n");
                    int R[n][n];
                    for(int i=0;i<n;i++)
                    {
                        for(int j=0;j<n;j++)
                        {
                            R[i][j]=A[i][j]-B[i][j];
                            printf("%3d",R[i][j]);
                        }
                            printf("\n");
                    }
                    getch();
                    system("cls");
                }
                else
                {
                    printf("LAS MATRICES NO SON DEL MISMO TAMAÑO\n");
                    getch();
                    system("cls");
                }
            break;
        case 4:
            //*********************PRODUCTO DE MATRICES**********************************
            if(n==m)
                {
                    printf("PRODUCTO=\n");
                    int P[n][n], temp=0;
                    for(int i=0;i<n;i++)
                    {
                        for(int j=0;j<n;j++)
                        {
                            for(int k=0;k<n;k++)
                            {
                                temp+=(A[i][k])*(B[k][j]);
                            }
                            P[i][j]=temp;
                            printf("%3d",P[i][j]);
                            temp=0;
                        }
                            printf("\n");
                    }
                    getch();
                    system("cls");
                }
                else
                {
                    printf("EL NUMERO DE FILAS NO ES IGUAL AL NUMERO DE COLUMNAS\n");
                    getch();
                    system("cls");
                }
            break;
        case 5:
            //*********************DETERMINANTES**********************************
              //COFACTORES

            break;
        case 6:
            //*********************TERMINAR PROGRAMA**********************************
            out=0;
            break;
        default:
           break;
        }
    }
    return 0;
}