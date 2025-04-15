#include <stdio.h>
#include <stdint.h>
// ----------------------- Ejercicio 15 -----------------------
// u_int64_t factorial(int n);
// int main(void) { 
//     int n; 
//     printf("Ingrese un numero: ");
//     scanf("%d",&n);
//     u_int64_t rta= factorial(n);
//     printf("factorial: %lu ",rta);
//     return 0;
// }
// uint64_t factorial(int n){
//     int i=n-1;
//     while (i>1){
//         n*=i; 
//         i--;
//     }
//     return n;
// }

// ----------------------- Ejercicio 16 -----------------------
// #define FELIZ 0
// #define TRISTE 1

// void ser_feliz(int estado);
// void print_estado(int estado);

// int main(){
//     int estado=TRISTE;
//     ser_feliz(estado);
//     print_estado(estado);
// }
// void ser_feliz(int estado){
//     estado = FELIZ;
// }

// void print_estado(int estado){
//     printf("Estoy %s\n",estado == FELIZ ? "feliz" : "triste");
// }

//printea: Estoy triste xq las variables se pasan x valor x lo q la variable estado
//  no se modifica

//--------------------- Ejercicio 17 -----------------------
#define FELIZ 0
#define TRISTE 1

// int estado= TRISTE;

// void ser_feliz();
// void print_estado();

// int main(){
//     print_estado();
//     ser_feliz();
//     print_estado();
// }

// void ser_feliz(){
//     estado=FELIZ;
// }

// void print_estado(){
//     printf("Estoy %s \n",estado == FELIZ ? "feliz" : "triste");
// }
//printea : Estoy triste, Estoy feliz ya que estamos usando una variable global 
// que se esta modificando en ser_feliz

// ----------------------- Ejercicio 18 -----------------------
// int estado= TRISTE;
// void alcoholizar();
// void print_estado();

// int main(){
//     print_estado();
//     alcoholizar();
//     print_estado();
//     alcoholizar(); alcoholizar();alcoholizar();
//     print_estado();
// }

// void alcoholizar(){
//     static int cantidad = 0 ;
//     cantidad ++;
//     if(cantidad < 3){
//         estado = FELIZ;
//     } else{
//         estado = TRISTE;
//     }
// }

// void print_estado(){
//     printf("Estoy %s \n", estado == FELIZ ? "feliz" : "triste");
// }
//con la variable static, cantidad solo se inicializa una vez con 0 y luego 
// queda guardado 
//en la memoria hasta el final de la ejecucion (haciendo q cada vez 
// q se llame a alcoholizar se le sume 1).
// Y si sacamos static, cada vez alcoholizar va a empezar con 0

// ----------------------- Ejercicio 19 -----------------------

// int g = 10;
// void functionA() {
//     int a = 20;
//     static int b = 30;
//     printf("Dentro de functionA:\n");
//     printf(" g = %d\n", g);
//     printf(" a = %d\n", a);
//     printf(" b = %d\n", b);
//     // Modificaci´on de las variables
//     g += 5;
//     a += 10;
//     b += 5;
// }
// void functionB() {
//     int a = 40;
//     static int c = 50;
//     printf("\nDentro de functionB:\n");
//     printf(" g = %d\n", g);
//     printf(" a = %d\n", a);
//     printf(" c = %d\n", c);
//     // Modificaci´on de las variables
//     g += 5;
//     a += 10;
//     c += 5;
// }
// int main() {
//     printf("Dentro de main:\n");
//     printf(" g = %d\n", g);
//     functionA();
//     functionB();
//     functionA();
//     functionB();
//     printf("\nFinal en main:\n");
//     printf(" g = %d\n", g);
//     return 0;
// }

// g es una variable global por lo que cada vez que se modifica su valor dentro
// de una funcion su valor tambien se modifica de forma global, 
// lo mismo ocurre con b y c que son variables estaticas


int main() { 
    int n=0;
    int i=4;
    while(i){
        i>>=1;
        n+=i;
    }
    printf("n= %lu \n",n);
    return n;
}