#include <stdio.h>
// snippet 1: def de estructuras
// struct punto {
//     float x;
//     float y;
//     float z;
// };

// int main(){
//     struct punto p1;
//     p1.x = 1.0;
//     p1.y = 2.0;
//     p1.z = 3.0;
//     printf("punto: (%f, %f,%f)\n",p1.x,p1.y,p1.z);

// }

// Snippet 4: INICIALIZACION DEL STRUCT
//#define NAME_LEN 50 

// struct player{ 
//     int elo;
//     char name[NAME_LEN +1];
//     int ranking;
// };

// struct player player1 = {2800, "Magnus Carlsen",1},
// struct player player2 = {2700,"Fabiano Caruana",2};

// Snippet 6 
// typedef struct {
//     int elo;
//     char name[NAME_LEN + 1];
//     int ranking;
// } player_t;

// player_t player1 = {2800,"Magnus Carlsen", 1};
// player_t player2 = {2700,"Fabiano Caruana",2};
// player_t player3 = {.name = "Hikaru Namakura", .ranking = 3, .elo=2600};
//Snippet 9
// typedef struct{
//     char* pais;
//     int code;
// } dials_code_t;

// dials_code_t country_codes[]={
//     {"Argentina",54},
//     {"Brasil", 55},
//     {"Chile", 56},
//     {"Uruguay",598}
// };
// int main(){
// printf("Codigo para Argentina:+%d\n",country_codes[0].code);
// }

//--------------------- Ejercicio 1 y 2 ---------------------
// typedef struct {
//     char* nombre;
//     int vida;
//     double ataque;
//     double defensa; 
// } monstruo_t;

// monstruo_t monstruos[]={
//     {"tung tung tung tung sahur", 50,1000,500},
//     {"bombardino crocodrilo",100, 100000, 300},
//     {"bombrito bandito", 30,100, 50}
// };
// monstruo_t evolucion(monstruo_t monstruo);
// int main(){
//     printf("ataque antes de mejorar: %f\n",monstruos[0].ataque);
//     monstruo_t mejorado = evolucion(monstruos[0]);
//     printf("ataque de mejorado: %f\n",mejorado.ataque);
// }

// monstruo_t evolucion(monstruo_t monstruo){
//     monstruo.ataque+=10;
//     monstruo.defensa +=10;
//     return monstruo;
// }

//Snippet 11
// int main(){
//     int x=42;
//     int *p= &x;
//     printf("Direccion de x: %p , Valor: %d\n", (void *) &x, x);
//     printf("Direccion de p: %p , valor: %p\n", (void*) &p, (void*) p);
//     printf("valor de lo que apunta p: %d\n",*p);
// }

//--------------------- Ejercicio 3 y 4 ---------------------
//x tiene un valor mientras que p es un puntero hacia otra variable
//x es la variable, &x es la referencia de la variable (posicion de memoria)
// p representa a la variable teniendo su propia direcc y de valor tiene la direcc a la q apunta
// *p tiene la direccion y el valor de la variable a la q apunta

//Snippet 16
// int main(){
//     int *p= NULL;
//     if(p== NULL){
//         printf("El puntero no apunta a nada :(.\n");
//     } else { 
//         printf("El puntero apiunta a: %d \n", *p);
//     }
// }

//--------------------- Ejercicio 9 ---------------------

// void mayusculas(char *str){
//     while(*str != '\0'){
//         if(*str >= 'a' && *str <= 'z'){
//             *str -= 32;
//         }
//         str ++;
//     }
// }

// int main(){
//     char word[] = "HoLa";
//     mayusculas(word); 
//     printf("%s\n",word);
//     return 0;
// }

//snippet 34
// u_int16_t *secuencia(u_int16_t n){
//     u_int16_t *arr = malloc(n*sizeof(u_int16_t));
//     if(arr==NULL){
//         return NULL;
//     }
//     for(u_int16_t i=0;i<n;i++){
//         arr[i]=i;
//         return arr;
//     }
// }

// int main(){
//     u_int16_t *arr = secuencia(10);
//     if (arr == NULL){
//         return 1;
//     }
//     for(u_int16_t i=0; i<n;i++){
//         printf("%d\n",arr[i]);
//     }
//         free(arr);
//         return 0;

// }


// typedef struct{
//     char* nombre;
//     int edad;
// } persona_t;

// persona_t* crearPersona(char* nombre, int edad){
//     persona_t persona = {nombre, edad};
//     persona_t *puntero = &persona;
//     return puntero;
// }

int main(){
    int num  =42;
    int* p = &num;
    int** x = &p;
    printf("%d",*p);
}