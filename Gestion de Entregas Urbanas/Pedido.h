#ifndef PEDIDO_H
#define PEDIDO_H

class Pedido
{
private:
	char id;
	int volumen;
	int prioridad;
	int origenX;
	int origenY;
	int destinoX;
	int destinoY;

public:

	// Constructor
	Pedido(char id, int volumen, int prioridad, int origenX, int origenY, int destinoX, int destinoY)
		: id(id), volumen(volumen), prioridad(prioridad), origenX(origenX), origenY(origenY), destinoX(destinoX), destinoY(destinoY) {
	}

	// Getters
	char getId();
	int getVolumen() const;
	int getPrioridad();
	int getOrigenX();
	int getOrigenY();
	int getDestinoX();
	int getDestinoY();

	// Setters
	void setId(char id);
	void setVolumen(int volumen);
	void setPrioridad(int prioridad);
	void setOrigenX(int origenX);
	void setOrigenY(int origenY);
	void setDestinoX(int destinoX);
	void setDestinoY(int destinoY);

};
#endif
