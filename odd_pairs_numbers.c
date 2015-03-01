#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int primos(int x);

unsigned int  primos(int x){
  int div=0;
  int edo=1;
  int j;
  for(j=1;j<=x;j++){
    if( ( x%j ) == 0 )
      div++;    
    if( div > 2 ){
      j = x;
      edo = 0;     //no es primo
    }
  }
  
  return edo;
}

int main(){
  int i, numero=0;
  for( i=1;i<=10;i++){
    // numero = ( rand() % 20 ) + 1;    
    numero =i;
    if( primos(numero) == 1 ) //Es primo
	printf("\n > Primo       %d \t Cubo: %.0f \t Cuarta: %.0f",numero,pow(numero, 3),pow(numero, 4));	
  }
  
  printf("\n");

  for( i=1;i<=10;i++){  
    numero =i;
    if( primos(numero) == 0 ) //No es primo
	printf("\n > No primo  %d \t Cuad: %.0f ",numero,pow(numero,2));
  }

  return 0;
}
