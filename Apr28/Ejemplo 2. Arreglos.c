/*
 Nombre: Ximena Vázquez Sánchez 
 Fecha: 28 de abril 2025
 Ejemplo 2: Arreglos.
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 int main(){
 
 int i,j,n_filas=3,m_columnas=3;
 float array_2d_1[n_filas][m_columnas];
 float suma_array[n_filas][m_columnas];

 for(i=0;i<n_filas;i++){
   for(j=0;j<n_filas;j++){
      scanf("%f", &array_2d_1[i][j]);
      }
   }

for(i=0;i<n_filas;i++){
   for(j=0;j<n_filas;j++){
      scanf("%f", &array_2d_2[i][j]);
      }
   }
for(i=0;i<n_filas;i++){
   for(j=0;j<n_filas;j++){
  suma_array[i][j]=array_2d_1[i][j]+array_2d_2[i][j];
      printf("%f", &suma_array[i][j]);
      }
      printf("/n");
   }

   return 0;

   }
