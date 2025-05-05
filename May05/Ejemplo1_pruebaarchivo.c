/* Creado el 5 de Mayo de 2025 por ximena vazquez */


#include <stdio.h>

int main(){

  FILE *archivo; // archivo de lectura
  FILE *fp; // archivo de escritura
  float var1, var2;
  char cadena1[255], cadena2[255];


  var1=0.15;
  var2=100.8;
  
  archivo= fopen("test2.txt", "r");
  fgets(cadena1[255], archivo);
  fgets(cadena2[255], archivo);
  printf("%s", cadena 1);
  printf("%s", cadena 2);
  fscanf(archivo,"%f %f", &var1, &var2);
  printf("%f %f", var1, var2)
  fclose(archivo);

  fp = fopen("test2_salida.txt", "w");
  fputs(cadena1, fp);
  printf("%f \t %f", var1, var2);
  printf(fp, "%s", cadena2);
  fclose(fp);
  return 0;

}