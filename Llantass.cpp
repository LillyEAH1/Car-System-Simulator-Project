#include "Coche.cpp"
#include<iostream>

using namespace std; 

class Llantass : public Coche{
	public:
		void avanzar();
};

void Llantass :: avanzar(){
	setlocale(LC_ALL,"");
	//Hacer que el coche avance
	this -> llantas = "llantas"; 
	clutch = 3; 
	velocidades = true; 
	boleano = true;  
	
	cout << "Mete el clutch para avanzar " << endl;
	
	if(clutch >= 3){
		cout<< "El clutch fue activado correctamente" << "," << " " << "puedes meter las velocidades" << endl; 
	}else{
		cout << "El clutch no fue activado correctamente" << "," << "vuelve a encender el coche" << endl; 
	}
	cout << "Mete la palanca en la primera velocidad " << endl; 
	if(velocidades = true){
		cout << "Velocidad: " << boleano << "." << " " << "Mete acelerador" << endl; 
	}else{
		cout << "Vuelve a encender el coche" << endl; 
	}
	
	cout << "Se procesa movimiento de: " << llantas << endl; 
}
