#pragma once
#include <iostream>
#include <cstring>

//using namespace std;
public class Poligono
{

public:
	double virtual Id(double id) = 0;

	double virtual AreaC(double longitud) = 0;
	double virtual PerimetroCT(double longitud) = 0;

	double virtual AreaTR(double base, double altura) = 0;
	double virtual PerimetroT(double base) = 0;

	double virtual PerimetroR(double base, double altura) = 0;
	

};

