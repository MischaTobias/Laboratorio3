#pragma once
#include "Nodo.h"
#include "Carta.h"

class Pila
{
private:
	Nodo* head = nullptr; //siempre inicializar punteros en nulo
public:
	Nodo* head2 = head;
	int NElementos = 0;
	void Apilar(Carta valor); //Recibe carta para ingresar a la pila
	Carta Desapilar(); //Sacar carta de la pila
	Carta ObtenerCima(); //Obtener carta en la cima sin sacarla
public:
	Pila();
	~Pila();
};

