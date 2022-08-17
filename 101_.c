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

int * ingresarMatriz(int n);

//TODO: ARREGLAR FUNCION imprimirMatriz

void imprimirMatriz(int * matriz);

int main()
{
  int n=0,m=0;
  int matriz1[n],matriz2[m];

  printf("Ingresa el tamaño de la primer matriz (n)>>> ");
  scanf("%d",&n);

  ingresarMatriz(n);
  
  printf("Ingresa el tamaño de la segunda matriz (m)>>> ");
  scanf("%d",&m);
  
  ingresarMatriz(m);

  //system("cls");
 // imprimirMatriz(*matriz1);

  return 0;
}
int * ingresarMatriz(int n)
{
  int matriz[n][n];//,matriz1[n];
 
  //INGRESAR VALORES
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      system("cls");
      printf("matriz[%d][%d]= ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  return *matriz;
}
//TODO: BUSCAR COMO IMPRIMIR UNA MATRIZ CON PUNTEROS DESDE LA FUNCION 

void imprimirMatriz(int * matriz)
{
  //IMPRIMIR VALORES
  //TODO: DECLARAR VARIABLE PARA IMPRIMIR
  for(int i=0;i<sizeof(matriz);i++)
  {
    for(int j=0;j<sizeof(matriz);j++)
    {
      if(j==0) printf("| ");
      printf("%d ",matriz[i][j]);
      if(j==-1) printf("|\n");
    }
    
  }
