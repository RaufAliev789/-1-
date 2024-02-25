/* Реализовать функцию нахождения в
двумерной системе координат одной из
трех заданных точек, наиболее удаленной
от геометрического центра этих точек.
Функция возвращает только расстояние от
этой точки до центра.  Вход: (0;0), (0, 2), (2, 0)--> Выход: 1.491  */

#include <iostream>

using namespace std;

float SRED_ARIFx(float x1, float x2, float x3) {
	return ((x1 + x2 + x3) / 3);
}

float SRED_ARIFy(float y1, float y2, float y3) {
	return ((y1 + y2 + y3) / 3);
}

float Rast_GEO_CENTER_1(float  x1, float y1, float x2, float y2, float x3, float y3) {
	return  (sqrt(pow(x1 - SRED_ARIFx(x1, x2, x3), 2) + pow(y1 - SRED_ARIFy(y1, y2, y3), 2)));
}

float Rast_GEO_CENTER_2(float  x2, float y2, float x1, float y1, float x3, float y3) {
	return  (sqrt(pow(x2 - SRED_ARIFx(x1, x2, x3), 2) + pow(y2 - SRED_ARIFy(y1, y2, y3), 2)));
}

float Rast_GEO_CENTER_3(float  x3, float y3, float x1, float y1, float x2, float y2) {
	return  (sqrt(pow(x3 - SRED_ARIFx(x1, x2, x3), 2) + pow(y3 - SRED_ARIFy(y1, y2, y3), 2)));
}

int main() {
	setlocale(LC_ALL, "Ru");

	float x1, y1, x2, y2, x3, y3;

	cout << "   Координаты x1 и y1  " << endl;
	cout << "Введите координату x1: ";
	cin >> x1;
	cout << "Введите координату y1: ";
	cin >> y1;

	cout << "   Координаты x2 и y2  " << endl;
	cout << "Введите координату x2: ";
	cin >> x2;
	cout << "Введите координату y2: ";
	cin >> y2;

	cout << "   Координаты x3 и y3  " << endl;
	cout << "Введите координату x3: ";
	cin >> x3;
	cout << "Введите координату y3: ";
	cin >> y3;

	float Rast_1 = Rast_GEO_CENTER_1(x1, y1, x2, y2, x3, y3);
	float Rast_2 = Rast_GEO_CENTER_2(x2, y2, x1, y1, x3, y3);
	float Rast_3 = Rast_GEO_CENTER_3(x3, y3, x1, y1, x2, y2);

	if (Rast_1 > Rast_2 and Rast_1 > Rast_3) {
		cout << "Расстояние от наиболее удаленной точки до геометрического центра 3-х точек: " << Rast_1 << endl;
	}
	else if (Rast_2 > Rast_1 and Rast_2 > Rast_3) {
		cout << "Расстояние от наиболее удаленной точки до геометрического центра 3-х точек: " << Rast_2 << endl;
	}
	else {
		cout << "Расстояние от наиболее удаленной точки до геометрического центра 3-х точек: " << Rast_3 << endl;
	}



	/*
	if ((Rast_GEO_CENTER_1 > (Rast_GEO_CENTER_2) and (Rast_GEO_CENTER_1 > (Rast_GEO_CENTER_3)))) {
		cout << "Расстояние от наиболее удаленной точки до геометрического центра 3-х точек: " << Rast_GEO_CENTER_1 << endl;
	}
	else if ((Rast_GEO_CENTER_2 > (Rast_GEO_CENTER_1) and (Rast_GEO_CENTER_2 > (Rast_GEO_CENTER_3)))) {
		cout << "Расстояние от наиболее удаленной точки до геометрического центра 3-х точек: " <<  Rast_GEO_CENTER_2 << endl;
	}
	else cout << "Расстояние от наиболее удаленной точки до геометрического центра 3-х точек: " <<  Rast_GEO_CENTER_3 << endl;
	*/

	return 0;
}