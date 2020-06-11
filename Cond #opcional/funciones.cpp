// Funciones (valor absoluto o modulo, valor minimo entre 2 valores, funcion f3)
#include <iostream>
#include <cassert>
using namespace std;

//prototipos de las funcione
double modulo(double);
double minimo(double, double);
double f3(double);

//funcion principal
int main() {
    // pruebas con la funcion f3
    assert (-3.5 == f3(-3.5));
    assert (2.5 == f3(-2.5));
    assert (-3 == f3(3));
    assert (4.5 == f3(4.5));
    // pruebas con la funcion modulo
    assert (4 == modulo(-4));
    assert (2.5 == modulo(2.5));
    assert (0 == modulo(0));
    assert (4.5 == modulo(-4.5));
    assert (2 == modulo(2));
    // pruebas con la funcion minimo
    assert (3 == minimo(3,4));
    assert (2 == minimo(2,3));
    assert (4 == minimo(4,4));
    assert (-1 == minimo(-1,3));
    assert (-4 == minimo(-4,3));
}

//definicion de las funciones

double modulo(double x){return
 x>0 ? x :
 x=0 ? 0 :
 -x ;}

double minimo(double z, double y) {return //Para el caso en que ambas variables sean iguales, devuelve el valor de una (en este caso z)

 z>y ? y :
 z<y ? z :
 z ;}

double f3(double f) {return
 f<-3 ? f :
 f>=-3 and f<=3 ? -f :
 f;}


