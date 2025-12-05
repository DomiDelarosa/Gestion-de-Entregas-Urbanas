#include "Pedido.h"
#include <iostream>

Pedido::Pedido(int volumen, int prioridad, int origenX, int origenY, int destinoX, int destinoY)
    : volumen(volumen), prioridad(prioridad),
    origenX(origenX), origenY(origenY),
    destinoX(destinoX), destinoY(destinoY)
{
    id = generarID();
}
// Getters
std::string Pedido::getId() {
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
void Pedido::setId(std::string id) {
	this->id = id;
}
void Pedido::setVolumen(int volumen) {
	if (volumen > 0)
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
void Pedido::cargarDatos() {
    std::string id;
    int volumen, prioridad, ox, oy, dx, dy;

	std::cout << "id generado: " << generarID() << std::endl;

    std::cout << "Volumen: " << std::endl;
    std::cin >> volumen;

    std::cout << "Prioridad (1-5): " << std::endl;
    std::cin >> prioridad;

    std::cout << "Origen X: " << std::endl;
    std::cin >> ox;

    std::cout << "Origen Y: " << std::endl;
    std::cin >> oy;

    std::cout << "Destino X: " << std::endl;
    std::cin >> dx;

    std::cout << "Destino Y: " << std::endl;
    std::cin >> dy;

    setVolumen(volumen);
    setPrioridad(prioridad);
    setOrigenX(ox);
    setOrigenY(oy);
    setDestinoX(dx);
    setDestinoY(dy);
}