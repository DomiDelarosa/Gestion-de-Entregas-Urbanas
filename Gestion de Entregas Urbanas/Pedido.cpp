#include "Pedido.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <random>

using namespace std;

// Getters
string Pedido::getId() const {	return id; }
int Pedido::getVolumen() const { return volumen; }
int Pedido::getPrioridad() const { return prioridad; }
int Pedido::getOrigenX() { return origenX; }
int Pedido::getOrigenY() { return origenY; }
int Pedido::getDestinoX() {	return destinoX; }
int Pedido::getDestinoY() { return destinoY; }

// Setters
void Pedido::setId(string id) {this->id = id; }
void Pedido::setVolumen(int volumen) {
	if (volumen > 0)
		this->volumen = volumen;
}
void Pedido::setPrioridad(int prioridad) {
	if (prioridad >= 1 && prioridad <= 5)
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

	cout << "id de producto generado: " << this->id << endl;

    do {
    cout << "Volumen (kg): ";
    cin >> volumen;

        if (volumen <= 0) {
            std::cout << "ERROR: El volumen debe ser un número positivo.\n";
            std::cin.clear();
        }
	} while (volumen <= 0);

    do {
        std::cout << "Prioridad (1-5): ";
        std::cin >> prioridad;

        if (prioridad < 1 || prioridad > 5) {
            std::cout << "ERROR: La prioridad debe estar entre 1 y 5.\n";
            std::cin.clear();
        }

    } while (prioridad < 1 || prioridad > 5);

    cout << "Origen X: ";
    cin >> ox;

    cout << "Origen Y: ";
    cin >> oy;

    cout << "Destino X: ";
    cin >> dx;

    cout << "Destino Y: ";
    cin >> dy;

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