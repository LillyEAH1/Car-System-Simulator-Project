#include"Motorr.cpp"
#include"Llantass.cpp"
#include"Carrocerias.cpp"
#include"Antenas.cpp"
#include"Vw.cpp"

using namespace std;
int main(){
Motorr m = Motorr();
m.iniciar();

Llantass ll = Llantass();
ll.avanzar();

Carrocerias ca = Carrocerias();
ca.avanzar();

Antenas an = Antenas();
an.avanzar();

Vw v= Vw();
v.retroceder();
}
