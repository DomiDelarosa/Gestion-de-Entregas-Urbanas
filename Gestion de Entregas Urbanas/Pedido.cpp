#include "Pedido.h"
#include <iostream>

// Getters

char Pedido::getId() {
	return id;
}
int Pedido::getVolumen() const {
	return volumen;
}
int Pedido::getPrioridad() {
	return prioridad;
}
int Pedido::getOrigenX() {
	return origenX;
}
int Pedido::getOrigenY() {
	return origenY;
}
int Pedido::getDestinoX() {
	return destinoX;
}
int Pedido::getDestinoY() {
	return destinoY;
}

// Setters

void Pedido::setId(char id) {
	this->id = id;
}
void Pedido::setVolumen(int volumen) {
		this->volumen = volumen;
}
void Pedido::setPrioridad(int prioridad) {
	this->prioridad = prioridad;
}
void Pedido::setOrigenX(int origenX) {
	this->origenX = origenX;
}
void Pedido::setOrigenY(int origenY) {
	this->origenY = origenY;
}
void Pedido::setDestinoX(int destinoX) {
	this->destinoX = destinoX;
}
void Pedido::setDestinoY(int destinoY) {
	this->destinoY = destinoY;
}

// Métodos