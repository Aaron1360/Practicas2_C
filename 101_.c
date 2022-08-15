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

void ingresarMatriz();
void imprimirMatriz();

int main()
{
  int n,m;

  printf("Ingresa el tamaño de la primer matriz (n)>>> ");
  scanf("%d",&n);
  /*
  printf("Ingresa el tamaño de la segunda matriz (m)>>> ");
  scanf("%d",&m);
  */
  int matriz1[n][n];//,matriz2[m];
 
  //INGRESAR VALORES
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      system("cls");
      printf("n[%d][%d]= ",i,j);
      scanf("%d",&matriz1[i][j]);
    }
  }
  system("cls");
  //IMPRIMIR VALORES
  printf("MATRIZ 1 \n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(j==0) printf("| ");
      printf("%d ",matriz1[i][j]);
      if(j==n-1) printf("|\n");
    }
    
  }

  return 0;
}

void ingresarMatriz()
{
  //TODO: separar y mover el codigo de main aqui
}

void imprimirMatriz()
{
  //TODO: separar y mover el codigo de main aqui 
}