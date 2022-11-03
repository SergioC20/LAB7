#pragma once
#include <iostream>
#include <cstring>
#include "Poligono.h"

class Triangulo : public Poligono
{
public:
	double Poligono::Id(double id);
	double Poligono::PerimetroCT(double longitud);
	double Poligono::AreaC(double longitud);
	double Poligono::PerimetroT(double base);
	double Poligono::AreaTR(double base, double altura);
	double Poligono::PerimetroR(double base, double altura);
};

