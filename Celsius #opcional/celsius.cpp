// Conversion de Fahrenheit a Celsius
#include <iostream>
#include <cassert>
using namespace std;

//prototipos de las funcione
double celsius(double f); 
bool AreNear( double p, double s, double t=0.001);

//funcion principal 
int main() {
    assert (AreNear (0.9999,1.00001));
    assert (not AreNear (0.9,1.1));
    return 0;
    assert (40 == celsius(104));
    assert (30 == celsius(86));
    assert (AreNear (26+0.67, celsius(80), 0.01));
    assert (AreNear(celsius(10) , 1.25));
    assert (true == AreNear(3/4 , 0.75, 0.001));
    assert (not AreNear(9.0/5 , 1.9, 0.00001)); //arroja error abortado */
    assert (not AreNear(5.0/2 , 2.6, 0.001)); //arroja error abortado
}

//definicion de las funciones
bool AreNear( double p, double s, double t)  //defino los parametros de la funcion bool
{return //problema de logica 
 p-s > t or -(p-s) < -t ? false : 
 p-s < t or -(p-s) > -t ? true : 
 s-p < t or -(s-p) > -t ?  true :
 false ;} 
 
double celsius(double f) {return (5.0/9.0)*(f-32.0);} //defino los parametros de la funcion celsius

