#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido
{
private:
	std::string id;
	int volumen;
	int prioridad;
	int origenX;
	int origenY;
	int destinoX;
	int destinoY;

public:

	// Constructor
	Pedido(int volumen, int prioridad, int origenX, int origenY, int destinoX, int destinoY)
		: volumen(volumen), prioridad(prioridad), origenX(origenX), origenY(origenY), destinoX(destinoX), destinoY(destinoY) {
	}

	// Getters
	std::string getId();
	int getVolumen() const;
	int getPrioridad();
	int getOrigenX();
	int getOrigenY();
	int getDestinoX();
	int getDestinoY();

	// Setters
	void setId(std::string id);
	void setVolumen(int volumen);
	void setPrioridad(int prioridad);
	void setOrigenX(int origenX);
	void setOrigenY(int origenY);
	void setDestinoX(int destinoX);
	void setDestinoY(int destinoY);

	// Métodos
	void cargarDatos();
	std::string generarID();

};
#endif
