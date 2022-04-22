#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Car
{
	string mark;
	int am_cil;
	double power;
	static int count_car;
public:
	void set_mark(string a) { mark = a; }
	void set_am_cil(int a) { am_cil = a; }
	void set_power(double a) { power = a; }

	static int get_count() { return count_car; }
	static void increase() { count_car++; }

	string get_mark() { return mark; }
	int get_am_cil() { return am_cil; }
	double get_power() { return power; }

	Car();
	Car(string a, int am, double pow);
	Car(Car& a);
	~Car();

	friend ostream& operator <<(ostream& out, Car& a);
	friend istream& operator >>(istream& in, Car& a);
	operator string();
	Car& operator =(Car& a);

	Car& operator ++();
	Car& operator --();
	Car operator ++(int);
	Car operator --(int);

};

