#include "Coche.cpp"
#include<iostream>

using namespace std; 

class Motorr : public Coche{
	public:
		void iniciar();
};


void Motorr :: iniciar(){
	setlocale(LC_ALL,"");
	//Hacer que el motor arranque desde un cierto tiempo 
	tiempo = 4;
	cout<< "Encender el coche" << endl; 
	cout<< "El motor encendió en" << " " << tiempo << " "<<"segundos" << endl;
	if(tiempo <=4){
		cout << "El coche encendió correctamente" << endl;
	}else{
		cout << "Vuelve a meter la llave" << endl; 
	}
}
