#include "Cuadrado.h"
#include <iostream>
#include <cstring>


double Cuadrado::AreaC(double longitud) {
	return longitud * longitud;
}
double Cuadrado::Id(double id) {
	id = 1;
	return id;
}
double Cuadrado::PerimetroCT(double longitud) {
	return longitud * 4;
}
double Cuadrado::AreaTR(double base, double altura) {
	return 0.0;
}

double Cuadrado::PerimetroR(double base, double altura) {
	return 0.0;
}

double Cuadrado::PerimetroT(double base) {
	return 0.0;
}