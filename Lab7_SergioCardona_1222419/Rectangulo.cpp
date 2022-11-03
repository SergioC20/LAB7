#include "Rectangulo.h"
#include <iostream>
#include <cstring>

double Rectangulo::AreaTR(double base, double altura) {

	return base * altura;
}

double Rectangulo::PerimetroT(double base) {
	return 0.0;
}

double Rectangulo::Id(double id) {
	id = 3;
	return id;
}

double Rectangulo::AreaC(double longitud) {
	return 0.0;
}

double Rectangulo::PerimetroR(double base, double altura) {
	double b = base * 2;
	double a = altura * 2;
	double peri = a + b;
	return peri;
}

double Rectangulo::PerimetroCT(double longitud) {
	return 0.0;
}