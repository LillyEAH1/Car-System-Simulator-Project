#include "Coche.cpp"
#include<iostream>

using namespace std; 

class Antenas : public Coche{
	public:
		void avanzar();
};

void Antenas :: avanzar(){
cout<< "Elige la estación para la música" << endl;
	cin>> estacion; 
	for(int antena = 1; antena <= 10; antena++){ 
    cout << "Estación: " << antena << endl;    
    }

} 

