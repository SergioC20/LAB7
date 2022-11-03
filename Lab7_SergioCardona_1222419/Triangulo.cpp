#include "Triangulo.h"
#include <iostream>
#include <cstring>

double Triangulo::AreaTR(double base, double altura) {
	double bh = base * altura;
	double area = bh / 2;
	return area;
}

double Triangulo::PerimetroT(double base) {
	return base * 3;
}

double Triangulo::Id(double id) {
	id = 2;
	return id;
}

double Triangulo::AreaC(double longitud) {
	return 0.0;
}

double Triangulo::PerimetroR(double base, double altura) {
	return 0.0;
}

double Triangulo::PerimetroCT(double longitud) {
	return 0.0;
}