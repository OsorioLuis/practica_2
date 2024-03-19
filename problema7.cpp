#include <iostream>

//no funciona con numeros
void deleteReps(char *chain);

int main7(){
    const int MAX = 20;
    char data[MAX];

    std::cout<<"Ingresa una cadena de caracteres: ";std::cin.getline(data, MAX);

    deleteReps(data);
    std::cout<<"La cadena sin repeticiones es: "<<data;

    return 0;

}
void deleteReps(char *chain){ //esta funcion elimina caracteres repetidos a la vez que se evalua la cadena
    int length = 0;

    //primero vemos la longitud de la cadena
    while(chain[length] != '\0'){
        length++;
    }

    //establecemos un indice que evalua los valores en cada posicion
    int index = 1;
    for(int i = 1; i < length; i++){ //iteramos desde 1 porque el primer caracter no hace falta evaluarlo
        int j; //inicializamos una variable de comparacion
        for(j = 0; j < index; j++){
            //cuando se halla similitud se sale del bucle aunque se evalue la misma letra en la misma posicion
            if(chain[i] == chain[j]){
                break;
            }
        }
        //en este punto se encarga de cambiar por la siguiente letra a evaluar
        if(j == index){
            chain[index] = chain[i];
            index++;
        }
        //j será un valor que se avalue hasta index
    }
    chain[index] = '\0';

}
