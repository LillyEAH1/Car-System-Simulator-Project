#ifndef COCHE_H
#define COCHE_H

#include<iostream>
#include<string.h>
using namespace std; 

class Coche
{
	public:
	string llantas, carroceria, estacion; 
	int clutch;
    int tiempo;
    bool velocidades;
    bool boleano; 
	void iniciar();
	void avanzar(); 
	void retroceder();
};

#endif

