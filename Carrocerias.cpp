#include "Coche.cpp"
#include<iostream>

using namespace std; 

class Carrocerias : public Coche{
	public:
		void avanzar();
};

void Carrocerias :: avanzar(){

this -> carroceria = "carroceria";
cout << "Se procesa funcionamiento de: " << carroceria << endl; 
}
