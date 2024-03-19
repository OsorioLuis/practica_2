#include <iostream>
//& es direccion de la variable
void toString(int num, char *value); //creamos la plantilla de la funcion
//no tiene en cuenta el 0

int main5(){
    int number;
    std::cout<<"Ingresa el numero para convertir";std::cin>>number;
    //definimos la longitud maxima del caracter
    const char MAX = 10;
    char data[MAX];

    toString(number, data);
    std::cout<<"El numero a cadena es: "<<data<<std::endl;

    return 0;
}

//esta funcion recibe variables tipo puntero porque se modificaar
//el dato en memoria usando la posicion de memoria
void toString(int num, char *value){
    int digits = 0, tempDigits, init = 0;
    tempDigits = num;

    //primero contamos la longitud del numero
    while(tempDigits != 0){
        digits++;
        tempDigits /= 10;
    }
    int final = digits;

    //que tenga en cuenta el 0
    if(num < 0){
        value[0] = '-'; //ahora en la posicion 0 ira - y ahora se tendrá en cuenta la siguiente posicion
        init++;
        num = -num; //convertimos el numero a positivo
    }

    //Ahora hacemos la conversion
    while(digits > 0){
        // el modulo nos retorna el numero que sobra, es decir el que queremos guardar
        //se guardaran de derecha a izquierda
        int next = num % 10;
        value[init + digits -1] = '0' + next; //sin este caracter 0 no funciona
        //ahora lo dividimos 10 para tener en cuenta el siguiente
        num /= 10;
        digits--;

    }
    //agregamos el caracter nulo al final para marcar el final del string
    value[init + final] = '\0';


}
