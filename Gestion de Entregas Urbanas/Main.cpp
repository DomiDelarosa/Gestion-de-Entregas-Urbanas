#include <iostream>
#include <wchar.h>
#include <fstream>
#include "Vehiculo.h"
#include "Pedido.h"
using namespace std;

int main() {
	vector<Pedido> pedidos;
	vector<Vehiculo> vehiculos;

	int contador = 1;

	vehiculos.emplace_back(
		"V" + to_string(contador), // placa
		100,                       // capacidad
		60,                        // velocidad
		0, 0                       // ubicación
	);

	setlocale(LC_ALL, "");

	cout << "Sistema de Gestión de Entregas Urbanas\n";
	cout << "---------------------------------------\n";
	
	char ans = 'Y';

	do {
		Pedido p(0, 0, 0, 0, 0, 0);	
		p.cargarDatos();

		if (vehiculos.back().agregarCarga(p)) {
			cout << "Pedido agregado correctamente\n";
		}
		else {
			contador++;
			vehiculos.emplace_back(
				"V" + to_string(contador),
				100,
				60,
				0, 0
			);
			vehiculos.back().agregarCarga(p);
			cout << "Pedido agregado en un nuevo vehículo\n";
		}

		cout << "¿Desea agregar otro pedido? (Y/N): ";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');

	for (Vehiculo& v : vehiculos) {
		cout << "---------------------------------------\n";
		cout << "\nVehículo " << v.getPlaca() << " con las siguientes cargas:\n";
		v.mostrarCargas();
		cout << endl;
		cout << "---------------------------------------\n";
	}

	return 0;
}