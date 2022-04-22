#pragma once
#include "Car.h"

class Bus:
	Car
{
private:
	int am_pas;
	static int count_bus;
public:
	void set_am_pas(int a) { am_pas = a; }
	int get_am_pas() { return am_pas; }
	/*void set_mark(string a) { car.set_mark(a); }
	string get_mark() { return car.get_mark(); }*/

	Bus();
	Bus(Car c, int a);
	Bus(Bus& a);
	~Bus();

	static int get_count() { return count_bus; }
	static void increase() { count_bus++; }

	friend ostream& operator <<(ostream& out, Bus& a);
	friend istream& operator >>(istream& in, Bus& a);
	Bus& operator =(Bus& a);

	Bus& operator ++();
	Bus& operator --();
	Bus operator ++(int);
	Bus operator --(int);

	operator string();
};

