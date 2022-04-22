#include "Bus.h"

int Bus::count_bus = 0;

ostream& operator<<(ostream& out, Bus& a)
{
	out << (string)a;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Bus& a)
{
	string ma;
	int amm;
	int ammp;
	double po;
	cout << "mark: "; in >> ma;  a.set_mark(ma);
	cout << "cilinder amount: "; in >> amm; a.set_am_cil(amm);
	cout << "power: "; in >> po;  a.set_power(po);
	cout << "Amount of pass: "; in >> ammp; a.set_am_pas(ammp);
	return in;
	// TODO: вставьте здесь оператор return
}

Bus::Bus()
{
	set_mark("o");
	set_am_cil(0);
	set_power(0.0);
	am_pas = 0;
	increase();
}

Bus::Bus(Car c, int a)
{
	set_mark(c.get_mark());
	set_am_cil(c.get_am_cil());
	set_power(c.get_power());

	am_pas = a;
	increase();
}

Bus::Bus(Bus& a)
{
	set_mark(a.get_mark());
	set_am_cil(a.get_am_cil());
	set_power(a.get_power());

	am_pas = a.am_pas;
	increase();
}

Bus::~Bus()
{
	count_bus--;
}

Bus& Bus::operator=(Bus& a)
{
	set_mark(a.get_mark());
	set_am_cil(a.get_am_cil());
	set_power(a.get_power());

	//car = a.car;
	am_pas = a.am_pas;
	return *this;
	// TODO: вставьте здесь оператор return
}

Bus& Bus::operator++()
{
	am_pas++;
	return *this;
	// TODO: вставьте здесь оператор return
}

Bus& Bus::operator--()
{
	am_pas--;
	return *this;
	// TODO: вставьте здесь оператор return
}

Bus Bus::operator++(int)
{
	Bus a(*this);
	am_pas++;
	return a;
}

Bus Bus::operator--(int)
{
	Bus a(*this);
	am_pas--;
	return a;
}

Bus::operator string()
{
	stringstream ss;
	ss << "Mark: " << get_mark() << endl
		<< "Cilinder amount: " << get_am_cil() << endl
		<< "Power: " << get_power() << endl << "Amount of pass:" << am_pas << endl;
	return ss.str();
}
