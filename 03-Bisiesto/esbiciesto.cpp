#include <cassert>
using namespace std;

//prototipos de las funcione
bool IsBiciesto(unsigned A);

//funcion principal
int main() {
    assert (not IsBiciesto(1582));
    assert (not IsBiciesto(1749));
    assert (not IsBiciesto(1699));
    assert ( IsBiciesto(1600));
    assert (not IsBiciesto(1700));
    assert (not IsBiciesto(1800));
    assert ( IsBiciesto(2020));
    assert ( IsBiciesto(2000));
    assert (not IsBiciesto(1581));
}

//desarrollo de la funcion 
bool IsBiciesto(unsigned A)
{return
 A > 1582 and (A%4 == 0) and ((A%100 != 0) or (A%400 == 0));

} 

