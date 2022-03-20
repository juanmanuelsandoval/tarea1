/*
	|Creador maestro del gran codigo: Juan Sandoval
	|Profesor gran juzgador de los mortales: Raul Arredondo
	|Ramo: Analisis y diseño de algoritmos
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int matriz[3][3];
void crearmatriz(int lim){
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            matriz[i][j] = rand()% lim +1;;
        }
    }
}
void mostrarmatriz(){
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }
}
int buscarmenor(){
    int menor = matriz[0][0];
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    return menor;
}
int sumarprincipal(){
    int suma=0;
    for(int n = 0; n<3;n++) suma+= matriz[n][n];
    return suma;
}
int multiplicarsecundaria(){
    int multiplicacion = 1;
    for(int n = 0; n<3;n++) multiplicacion= multiplicacion* matriz[n][2-n];
    return multiplicacion;
}
int main(){
    srand(time(NULL));
    printf("Los numeros se generaran aleatoriamente, elija el limite maximo para los numeros (mayor a 0 porfavor se lo pido):\n");
    int lim = 0;
    do scanf("%d",&lim);
    while(lim <= 0);
    crearmatriz(lim);
    mostrarmatriz();
    printf("\nmenor: %d",buscarmenor());
    printf("\nsuma diagonal principal: %d",sumarprincipal());
    printf("\nmultiplicacion diagonal secundaria: %d",multiplicarsecundaria());
    return 0;
}
