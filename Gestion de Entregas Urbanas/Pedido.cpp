#include "Pedido.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <random>

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

// Cargar datos del pedido desde la entrada estándar, teclado
void Pedido::cargarDatos() {
    int volumen, prioridad, ox, oy, dx, dy;

	std::cout << "id generado: " << this->id << std::endl;

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

// Generar ID único en formato hexadecimal de 8 caracteres (pseudaleatorio)
std::string Pedido::generarID() {
	static std::random_device rd; // semilla para el generador
	static std::mt19937 gen(rd()); // generador Mersenne Twister
	static std::uniform_int_distribution<unsigned int> dist(0, 0xFFFFFFFF); // rango de 32 bits

    unsigned int num = dist(gen);

	std::stringstream ss; // stream para formatear el número
	ss << std::hex << std::uppercase << std::setfill('0') << std::setw(8) << num; // formato hexadecimal, mayusculas, relleno con ceros a la izquierda, ancho 8

    return ss.str();
}