#include<iostream>
#include<iomanip>
using namespace std;
#include"mytemperature.h"
int main() {
	cout << "Celsius to Fahrenheit��Celsius=" << endl;
	double cel = 0;
	cin >> cel;
	cout << "Fahrenheit=" << setprecision(4) << celsius_to_fah(cel) << endl;
	cout << "Fahrenheit to Celsius��Fahrenheit=" << endl;
	double fah = 0;
	cin >> fah;
	cout << "Celsius=��" <<setprecision(4)<< Fahrenheit_to_cels(fah) << endl;
	system("pause");
	return 0;
}