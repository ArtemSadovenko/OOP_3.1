#include "Car.h"

int Car::count_car = 0;

Car::Car()
{
	mark = " ";
	am_cil = 0;
	power = 0;
	increase();
}

Car::Car(string a, int am, double pow)
{
	mark = a;
	am_cil = am;
	power = pow;
	increase();
}

Car::Car(Car& a)
{
	mark = a.mark;
	am_cil = a.am_cil;
	power = a.power;
	increase();
}

Car::~Car()
{
	count_car--;
}

Car::operator string()
{
	stringstream ss;
	ss << "Mark: " << mark << endl
		<< "cilinder amount: " << am_cil << endl
		<< "power: " << power << endl;
	return ss.str();
}

Car& Car::operator=(Car& a)
{
	mark = a.mark;
	am_cil = a.am_cil;
	power = a.power;
	return *this;
	// TODO: вставьте здесь оператор return
}

Car& Car::operator++()
{
	am_cil++;
	return *this;
	// TODO: вставьте здесь оператор return
}

Car& Car::operator--()
{
	am_cil--;
	return *this;
	// TODO: вставьте здесь оператор return
}

Car Car::operator++(int)
{
	Car a(*this);
	power++;
	return a;
}

Car Car::operator--(int)
{
	Car a(*this);
	power--;
	return a;
}

ostream& operator<<(ostream& out, Car& a)
{
	out << "Mark: " << a.mark << endl
		<< "cilinder amount: " << a.am_cil << endl
		<< "power: " << a.power << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Car& a)
{
	cout << "mark: "; in >> a.mark;
	cout << "cilinder amount: "; in >> a.am_cil;
	cout << "power: "; in >> a.power;
	return in;
	// TODO: вставьте здесь оператор return
}
