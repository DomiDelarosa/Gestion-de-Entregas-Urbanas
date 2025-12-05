#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include "Pedido.h"

class Vehiculo
{
private:
	std::string placa;
	int capacidad; // volumen maximo
	int capacidadActual; // volumen actual
	int velocidad; // km/h
	int ubicacionX;
	int ubicacionY;

public:
	// Constructor
	Vehiculo(const std::string& p, int c, int v, int x, int y);

	// Getters
	std::string getPlaca();
	int getCapacidad();
	int getCapacidadActual();
	int getVelocidad();
	int getUbicacionX();
	int getUbicacionY();

	// Setters
	void setPlaca(const std::string& p);
	void setCapacidad(int c);
	void setCapacidadActual(int ca);
	void setVelocidad(int v);
	void setUbicacionX(int x);
	void setUbicacionY(int y);

	// Metodos
	// Carga
	int agregarCarga(const Pedido& p);
	// Descarga
	bool quitarCarga(int volumen);
};
#endif