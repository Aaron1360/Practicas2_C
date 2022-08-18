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

int main()
{
  int n=1,m=1;
  
  //*********************INGRESAR MATRICES**********************************
    //MATRIZ 1    
  printf("Tamaño de la primer matriz: ");
  scanf("%d",&n);
    system("clear");
  
  int matriz1[n][n];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("M1[%d][%d]= ",i,j);
          scanf("%d",&matriz1[i][j]);
      }
  }
    system("clear");

    //MATRIZ 2    
  printf("Tamaño de la segunda matriz: ");
  scanf("%d",&m);
    system("clear");
  
  int matriz2[m][m];
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<m;j++)
      {
          printf("M2[%d][%d]= ",i,j);
          scanf("%d",&matriz2[i][j]);
      }
  }
     system("clear");
     
  //*********************IMPRIMIR MATRICES**********************************
    //MATRIZ 1
  printf("MATRIZ 1:\n");
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%3d",matriz1[i][j]);
            
        }
        printf("\n");
    } 
    
    printf("\n");

    //MATRIZ 2 
  printf("MATRIZ 2:\n");

  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%3d",matriz2[i][j]);
            
        }
        printf("\n");
    } 
  return 0;
}
/*
  //POINTER
  int (*p)[2][2];
  p=&matriz1;
  int ejemplo=(*p)[0][0];
  
  printf("\n%d\n",ejemplo);
*/
