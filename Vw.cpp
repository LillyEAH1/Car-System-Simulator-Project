#include "Coche.cpp"
#include<iostream>

using namespace std; 

class Vw : public Coche{
	public:
		void retroceder();
};

void Vw :: retroceder(){
	//Hacer que retroceda
	cout << "Se registra movimiento de reversa: " << endl; 
	cout << "Mete el clutch para retroceder" << endl; 
	cout << "Mete reversa" << endl; 
	if(tiempo <=7){
		cout << "Has metido bien el clutch, puedes acelerar" << endl;
	}else{
		cout << "Vuelve a meter el clutch" << endl; 
	}
	cout << "Mete acelerador" << endl; 
} 
