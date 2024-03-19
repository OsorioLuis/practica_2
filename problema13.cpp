#include <iostream>
#include <cstdlib>

//establecemos funciones
int randomGenerator();
void matrizCreator(int rows, int columns);



int main13(){
    int rows, columns;
    std::cout<<"Ingresa la fila: ";std::cin>>rows;
    std::cout<<"Ingresa las columnas: ";std::cin>>columns;

    //llamado de la funcion
    matrizCreator(rows, columns);

    return 0;
}

int randomGenerator(){
    //stackoverflow
    return rand() % 14; //genera cualquier cantidad de numeros aleatorios pero  la division entera
    //por 14 asegurando que sea un numero menor a 13
}
void matrizCreator(int rows, int columns){ //la funcion como tal no retorna nada pero si hace el calculo de las estrellas
    int matrizValues[rows][columns], eval = 0, countStars = 0;

    //bucle anidado simple para llenar la matriz de valoresy de paso se imprime la matriz
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            matrizValues[i][j] = randomGenerator();
            std::cout<<matrizValues[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    //ahora hacemos el analisis de los datos
    for(int m = 1; m < rows - 2; m++){ //el bucle empieza en 1 porque usaremos las posiciones de mas al centro ademas que tomamos rows - 2
        //para tener en cuenta la matriz menos una dimension
        for(int p = 1; p < columns - 2; p++){ //lo mismo para p pero en este caso seran las columnas
            eval = (matrizValues[m][p] + matrizValues[m][p-1] + matrizValues[m][p+1] + matrizValues[m-1][p] + matrizValues[m+1][p]) / 5;
            //std::cout<<eval<<" es el numero "<<std::endl;
            if(eval > 6){ //toda la operacion aritmetica esta en eval
                countStars++;
            }
        }
    }
    std::cout<<"El numero de estrellas en la imagen es: "<<countStars;


}
