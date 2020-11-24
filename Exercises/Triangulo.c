#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float a, b, c, p, t,w;//Definiendo variables
char medida [20];

int main(){
  
  system("clear");

  printf("Propociona la medida de cada uno de los lados de un triangulo (la medida de cada lado debe de ser mayor a 0)\n");

  printf("-Lado a:\t");
  scanf("%f",&a); 

  printf("-Lado b:\t");
  scanf("%f",&b); 

  printf("-Lado c:\t");
  scanf("%f",&c); 

  printf("\nDefine el tipo de unidad de medida que tiene tu triangulo (ejemplo: metros, centimetros, decimetros, etc):\t");
  scanf("%s",medida);

  p= a + b + c;//Calculo del perimetro
  
  t= (a + b + c)/2;//Calculo de semiperimetro para la fórmula de Herón

  w= sqrt(t*(t-a)*(t-b)*(t-c)); //Fórmula de Herón
 
  printf("\nEl \'perimetro\' del tringulo cuyos lados miden: %0.2f, %0.2f y %0.2f es igual a %0.2f %s\n",a, b, c, p,medida);
   
  printf("\nEl \'area\' del tringulo cuyos lados miden: %0.2f, %0.2f y %0.2f es igual a %0.2f %s\n",a, b, c, w,medida);
  
  
return 0;
}
  