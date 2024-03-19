#include <iostream>

int groupSum(int number, char *data);

int main9(){
    int num;
    const int MAX = 100;
    char chainNum[MAX];
    std::cout<<"Ingresa el numero: ";std::cin>>num;
    std::cout<<"Ingresa la cadena de caracteres: ";std::cin>>chainNum;

    //llamado de la funcion
    std::cout<<"la suma de los gurpos es: "<<groupSum(num, chainNum);

    return 0;
}

int groupSum(int number, char *data){
    int sum = 0, length = 0;

    //primero calculamos la longitud de la cadena
    while(data[length] != '\0'){
        length++;
    }

    //calculamos el numero de grupos a tomar en la cadena
    int groupNumbers = length / number; //esta sera la cantidad de grupos

    //si la longitud no es una division entera entonces agregamos un cero
    if(length % number != 0){
        groupNumbers++;
        for(int i = length; i >= 0; i--){
            data[i+1] = data[i]; //con esto "movemos" los numeros de sitio para dejar el cero al inicio
        }
        data[0] = '0';
        length++; //como tiene un elemento más aumentamos la longitud
    }
    //hacemos la suma
    for(int i = 0; i < length; i += number){
        int next = 0;
        for(int j = 0; j < number; j++){
            next = next * 10 + (data[i + j] - '0'); //lo restamos el caracter 0 para que se "identifique" como entero
            //la funcion de esta linea es que toma los digitos principales de la cadena y los multiplica 10 para
            //luego sumarlos, esto con el objetivo de armar las veces que sea necesario el numero segun el valor ingresado
            // por ejemplo 0 luego pasa a 8 luego a 80 luego suma 7 y las veces que sea neceario
        }
        sum += next;
    }

    return sum;

}
