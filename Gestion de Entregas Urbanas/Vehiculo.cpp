#include "Vehiculo.h"

using namespace std;

// Constructor
Vehiculo::Vehiculo(const string& p, int c, int v, int x, int y)
	: placa(p), capacidad(c), capacidadActual(0), velocidad(v), ubicacionX(x), ubicacionY(y) {
}

// Getters
string Vehiculo::getPlaca() {
	return placa;
}
int Vehiculo::getCapacidad() {
	return capacidad;
}
int Vehiculo::getCapacidadActual() {
	return capacidadActual;
}
int Vehiculo::getVelocidad() {
	return velocidad;
}
int Vehiculo::getUbicacionX() {
	return ubicacionX;
}
int Vehiculo::getUbicacionY() {
	return ubicacionY;
}

// Setters
void Vehiculo::setPlaca(const string& p) {
	placa = p;
}
void Vehiculo::setCapacidad(int c) {
	capacidad = c;
}
void Vehiculo::setCapacidadActual(int ca) {
	if (ca >= 0 && ca <= capacidad) // Validar que no exceda la capacidad
		capacidadActual = ca;
}
void Vehiculo::setVelocidad(int v) {
	if (v > 0) // Validar que la velocidad sea positiva
		velocidad = v;
}
void Vehiculo::setUbicacionX(int x) {
	ubicacionX = x;
}
void Vehiculo::setUbicacionY(int y) {
	ubicacionY = y;
}
// Metodos
