#include "Vehiculo.h"
using namespace std;

// Constructor
Vehiculo::Vehiculo(const string& p, int c, int v, int x, int y)
	: placa(p), capacidad(c), capacidadActual(0), velocidad(v), ubicacionX(x), ubicacionY(y) {
}

// Getters
string Vehiculo::getPlaca() { return placa; }
int Vehiculo::getCapacidad() { return capacidad; }
int Vehiculo::getCapacidadActual() { return capacidadActual; }
int Vehiculo::getVelocidad() { return velocidad; }
int Vehiculo::getUbicacionX() { return ubicacionX; }
int Vehiculo::getUbicacionY() { return ubicacionY; }

// Setters
void Vehiculo::setPlaca(const string& p) { placa = p; }
void Vehiculo::setCapacidad(int c) { capacidad = c; }
void Vehiculo::setCapacidadActual(int ca) {
	if (ca >= 0 && ca <= capacidad) // Validar que no exceda la capacidad
		capacidadActual = ca;
}
void Vehiculo::setVelocidad(int v) {
	if (v > 0) // Validar que la velocidad sea positiva
		velocidad = v;
}
void Vehiculo::setUbicacionX(int x) { ubicacionX = x; }
void Vehiculo::setUbicacionY(int y) { ubicacionY = y; }

// Metodos

bool Vehiculo::agregarCarga(const Pedido& p) {
	int volumen = p.getVolumen();
	if (volumen <= 0)
		return false;

	if (capacidadActual + volumen > capacidad)
		return false;

	cargas.push_back(p);

	capacidadActual += volumen;

	return true;
}

bool Vehiculo::quitarCarga(const string& id) {
	for (size_t i = 0; i < cargas.size(); i++)
	{
		if (cargas[i].getId() == id)
		{
			cargas.erase(cargas.begin() + i);
			return true;
		}
	}
	return false;
}

void Vehiculo::mostrarCargas() {
	cout << "Pedidos transportados por " << placa << ":\n";
	for (const Pedido& p : cargas) {
		cout << " - ID: " << p.getId() << endl
			<< " Volumen: " << p.getVolumen() << endl
			<< " Prioridad: " << p.getPrioridad()
			<< endl;
	}
}