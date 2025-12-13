#include <iostream>
#include <wchar.h>
#include "Vehiculo.h"
#include "Pedido.h"
using namespace std;

int main() {

	setlocale(LC_ALL, "");

	cout << "Sistema de Gestión de Entregas Urbanas\n";
	cout << "---------------------------------------\n";

	Vehiculo v1("ABC123", 100, 60, 0, 0);
	Pedido p1(1, 1, 0, 0, 0, 0);
	
	cout << "¿Desea ingresar datos?\n";
	p1.cargarDatos();

	if (v1.agregarCarga(p1))
		cout << "Pedido agregado correctamente\n";
	else
		cout << "No hay capacidad suficiente\n";

	v1.mostrarCargas();

	return 0;
}