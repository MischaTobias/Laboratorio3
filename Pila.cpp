#include "Pila.h"

Pila::Pila() {
	NElementos = 0;
}

Pila::~Pila() {

}

void Pila::Apilar(Carta valor) {
	Nodo* nodoNuevo = new Nodo();
	nodoNuevo->valor = valor; //asignar la carta al nodo
	if (head == nullptr)
	{
		head = nodoNuevo;
	}
	else
	{
		Nodo* aux = new Nodo();
		aux = head; //Guardamos el que era la cima anterior, que será el siguiente del nuevo nodo(head)
		head = nodoNuevo;// la cima es el nuevo nodo
		head->siguiente = aux;//Hacemos que el auciliar sea el siguiente del head
	}
	NElementos++;
}

Carta Pila::Desapilar() {
	if (head == nullptr)
	{
		return *new Carta();
	}
	else
	{
		Carta valor = head->valor;
		head = head->siguiente;
		NElementos--;
		return valor;
	}
}

Carta Pila::ObtenerCima() {
	if (head == nullptr)
	{
		return *new Carta();
	}
	else
	{
		return head->valor;
	}
}