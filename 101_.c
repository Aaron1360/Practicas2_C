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
void sumar(int (*p)[size][size],int (*q)[size][size],int (*s)[size][size]);
void restar(int (*p)[size][size],int (*q)[size][size],int (*r)[size][size]);

int main()
{
    int n=0,m=0,menu=0,out=1,wait=1;
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
  while(out)
  {
      printf("\nOPERACIONES: \n");
      printf("VER MATRICES(1) \n");
      printf("SUMAR A+B(2) \n");
      printf("RESTAR A+B(3) \n");
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
                
                while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
            break;
          //*********************SUMAR MATRICES**********************************
          case 2:
                if(n==m)
                {
                    printf("SUMA=\n");
                    size=n;
                    int suma[size][size];
                    sumar(&A,&B,&suma);
                    
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
                    while(wait)
                    {
                        printf("\n!Las matrices no son del mismo tamaño!\n");
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
            break;
            //*********************RESTAR MATRICES**********************************
          case 3:
                if(n==m)
                {
                    printf("RESTA=\n");
                    size=n;
                    int resta[size][size];
                    restar(&A,&B,&resta);
                    
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
                    while(wait)
                    {
                        printf("\n!Las matrices no son del mismo tamaño!\n");
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
            break;
          //*********************TERMINAR PROGRAMA**********************************
          case 5:
                out=0;
            break;
      }
  } 
  printf("\n\tsuccess!");
  return 0;
}
//*********************FUNCION IMPRIMIR**********************************
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
//*********************FUNCION SUMAR**********************************
void sumar(int (*p)[size][size],int (*q)[size][size],int (*s)[size][size])
{
   for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            (*s)[i][j]=(*p)[i][j]+(*q)[i][j];
            printf("%3d",(*s)[i][j]);
        }
        printf("\n");
    } 
}
//*********************FUNCION RESTAR**********************************
void restar(int (*p)[size][size],int (*q)[size][size],int (*r)[size][size])
{
   for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            (*r)[i][j]=(*p)[i][j]-(*q)[i][j];
            printf("%3d",(*r)[i][j]);
        }
        printf("\n");
    } 
}



