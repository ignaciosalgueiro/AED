// Tipos de valores
#include <iostream>
#include <cassert>
using namespace std;
int main2(); //declaro los main para posteriormente inicializarlos.
int main3();
int main4(); 

int main() { //Division de valores tipo Int y Double
 int  a = 6;
 double b = 15;
 assert (b/a == 2.5);
}

// En este punto vamos a explicar el calculo que hace un niño con su dinero querieno comprar 10 caramelos de 1 peso cada uno, a medida que va 
// contando el precio de cada caramelo, va dandose cuenta que se va quedando con menos dinero hasta llegar a 0.

int main2() { 
 unsigned dinero = 10;
 do { 
   dinero--;
   assert (dinero < 10 and dinero >= 0); //En esta linea se hacen presentes tres booleanos (dinero < 10)(dinero >=10) y los dos en conjunto unidos por and 
} while (dinero > 0);
}

int main3() { // comparacion de variables tipo char
 char letra = 'A';
 char codigo =  65;
 assert ( letra == codigo);
}

int main4() { //concatenado entre Varibles tipo string
 string bebida1, bebida2, bebida3;
 string adereso1, adereso2;
 bebida1 = "cafe ";
 bebida2 = "te ";
 bebida3 = "submarino ";
 adereso1 = "con azucar";
 adereso2 = "con edulcorante";
 
 std::string resultado = "(" + bebida1 + ", " +  adereso1 + ")"; // concatenar
 assert ( resultado == "(cafe , con azucar)");
 
 resultado = "(" + bebida2 + ", " +  adereso2 + ")"; // concatenar
 assert ( resultado == "(te , con edulcorante)");
 
 resultado = "(" + bebida3 + ", " +  adereso1 + ")"; // concatenar
 assert ( resultado == "(submarino , con azucar)");
}


