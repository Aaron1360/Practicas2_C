/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creación: 14/08/22
*
*1.-Desarrollar un programa que permita el ingreso de dos matrices cuadradas nxn (A y B) y que se efectuen operaciones sobre ellas, 
*la suma A+B, resta A-B, multiplicación A*B, así como la obtención del determinante.
*/


#include<stdio.h>
#include<stdlib.h>

int size;
void imprimir(int (*p)[size][size],int);

int main()
{
    int n=0,m=0,menu=0,flag=1;
  //*********************INGRESAR MATRICES**********************************
    //MATRIZ A    
  printf("Tamaño de la matriz A: ");
  scanf("%d",&n);
    system("clear");

  int A[n][n];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("A[%d][%d]= ",i,j);
          scanf("%d",&A[i][j]);
              system("clear");
      }
  }
    system("clear");
    
    //MATRIZ B 
  printf("Tamaño de la matriz B: ");
  scanf("%d",&m);
    system("clear");
  
  int B[m][m];
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<m;j++)
      {
          printf("B[%d][%d]= ",i,j);
          scanf("%d",&B[i][j]);
            system("clear");
      }
  }
    system("clear");
    
  //*********************ELEGIR OPERACION**********************************
  while(flag)
  {
      printf("OPERACIONES: \n");
      printf("VER MATRICES(1) \n");
      printf("SUMAR A+B(2) \n");
      printf("SALIR(5) \n");
      scanf("%d",&menu);
        system("clear");
    
      switch(menu)
      {
          //*********************IMPRIMIR MATRICES**********************************
          case 1:
                //IMPRIMIR MATRIZ A    
                printf("MATRIZ A:\n");
                size=n;
                imprimir(&A,size);
                
                printf("\n");
                //IMPRIMIR MATRIZ B
                printf("MATRIZ B:\n");
                size=m;
                imprimir(&B,size);
                
            break;
          //*********************TERMINAR PROGRAMA**********************************
          case 5:
                
                
            break;
          //*********************TERMINAR PROGRAMA**********************************
          case 5:
                flag=0;
            break;
      }
  } 
  printf("\n\tsuccess!");
  return 0;
}

void imprimir(int (*p)[size][size],int num)
{
  for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            printf("%3d",(*p)[i][j]);
            
        }
        printf("\n");
    } 
}

