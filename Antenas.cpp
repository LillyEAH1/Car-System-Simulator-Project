#include "Coche.cpp"
#include<iostream>

using namespace std; 

class Antenas : public Coche{
	public:
		void avanzar();
};

void Antenas :: avanzar(){
cout<< "Elige la estaci�n para la m�sica" << endl;
	cin>> estacion; 
	for(int antena = 1; antena <= 10; antena++){ 
    cout << "Estaci�n: " << antena << endl;    
    }

} 

