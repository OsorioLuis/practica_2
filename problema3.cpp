#include <iostream>


bool chainComparator(char *first, char *second, const int MAX);
int longCounter(char *value);

int main2() {
    const int MAX = 10; //longitud maxima de los caracteres
    char firstCharacters[MAX], secondCharacters[MAX];
    std::cout<<"Ingresa la primera cadena: ";std::cin.getline(firstCharacters, MAX);
    std::cout<<"Ingresa la segunda cadena: ";std::cin.getline(secondCharacters, MAX);
    //usamos un metodo de cin que arma una cadena de caracteres de longitud maxima

    if(chainComparator(firstCharacters, secondCharacters, MAX)){
        std::cout<<"Los caracteres son iguales";
    }else{
        std::cout<<"Los caracteres son diferentes";
    }

    return 0;
}
int longCounter(char *value){ //usamos puntero tambien se puede usar arrays
    //esta funcion nos da la longitud de cualquier string
    int counter = 0;
    while(value[counter] != '\0'){ //ese valor nos cuenta hasta que acabe el string
        counter++;
    }
    return counter;
}
bool chainComparator(char *first, char *second, const int MAX){
    //primero obtenemos las longitudes
    int firstLong = longCounter(first);
    int secondLong = longCounter(second);

    if(firstLong != secondLong){
        return false; //en un caso de primer analisis las longitudes no son las mismas
    }else{
        //teniendo en cuenta que los valores a evaluar son arrays podemos
        //hacer un bucle for para evaluar caracter a caracter
        for(int i = 0; i < MAX; i++){
            //solo hace falta verificar que si los caracteres en la misma posicion
            //son diretentes entonces las cadenas son diferentes
            if(first[i] != second[i]){
                return false;
            }else{
                return true;
            }
        }
    }
    //placeholder
    return true;
}
