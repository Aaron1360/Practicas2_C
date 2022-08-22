/*
*Desarrollador: Aaron Moreno Villeda
*
*Fecha de creación: 14/08/22
*
*1.-Desarrollar un programa que permita el ingreso de dos matrices cuadradas nxn (A y B) y que se efectuen operaciones sobre ellas, 
*la suma A+B, resta A-B, multiplicación A*B, así como la obtención del determinante.
(CON FUNCIONES)
*/


#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <math.h>

int size;

void imprimir(int (*p)[size][size],int);
void sumar(int (*p)[size][size],int (*q)[size][size],int (*s)[size][size]);
void restar(int (*p)[size][size],int (*q)[size][size],int (*r)[size][size]);
void producto(int (*p)[size][size],int (*q)[size][size],int (*m)[size][size]);
int determinante(int ma[size][size], int );
int cofactor(int ma[size][size], int , int , int );

int main()
{
    char d;
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
      printf("MULTIPLICAR A*B(4) \n");
      printf("DETERMINANTE(5) \n");
      printf("SALIR(6) \n");
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
            //*********************MULTIPLICAR MATRICES**********************************
          case 4:
                if(n==m)
                {
                    printf("PRODUCTO=\n");
                    size=n;
                    int prod[size][size];
                    producto(&A,&B,&prod);
                    
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
            //*********************DETERMINANTE**********************************
          case 5:
              //TODO: ARREGLAR LAS FUNCIONES PARA NO BORRAR LA MATRIZ A
                system("clear");
                printf("\nElige la matriz (A)/(B):");
                scanf("%s",&d);
                
                if(toupper(d)=='A')
                {
                    size=n;
                    printf("\nEl determinante es: %d\n", determinante(A, size));
                    while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
                
                else if(d=='B')
                {
                    size=m;
                    printf("\nEl determinante es: %d\n", determinante(B, size));
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
                    printf("\nsolo puedes elegir 'A' o 'B'\n");
                    while(wait)
                    {
                        scanf("%d",&wait);
                        if(wait)wait=0;
                    }
                    wait=1;
                    system("clear");
                }
            break;
            //*********************TERMINAR PROGRAMA**********************************
          case 6:
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
//*********************FUNCION PRODUCTO**********************************
void producto(int (*p)[size][size],int (*q)[size][size],int (*m)[size][size])
{
    int suma=0;
     for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            for(int k=0;k<size;k++)
            {
                suma+=((*p)[i][k])*((*q)[k][j]);
            }
            (*m)[i][j]=suma;
            printf("%3d ",(*m)[i][j]);
            suma=0;
        }
        printf("\n");
    }
}
//*********************FUNCION DETERMINANTE**********************************
int determinante(int ma[size][size], int ln)
{
   int det = 0, j;
   
   if (ln == 1) {
      det = ma[0][0];
   } else {
      for (j = 0; j < ln; j++) {
         det = det + ma[0][j] * cofactor(ma, ln, 0, j);
      }
   }
   
   return det;
}
//*********************FUNCION COFACTOR**********************************
int cofactor(int ma[size][size], int ln, int f, int c)
{
   int sub[size][size];
   int n = ln - 1;
   int i, j;
   
   int x = 0;
   int y = 0;
   for (i = 0; i < ln; i++) {
      for (j = 0; j < ln; j++) {
         if (i != f && j != c) {
            sub[x][y] = ma[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }
   
   return pow(-1.0, f + c) * determinante(sub, n);
}




