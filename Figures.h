#pragma once
#include <iostream>
using namespace std;
class Figures
{
public:
	virtual ~Figures() {}
	virtual float Perimeter() = 0;
	virtual ostream& print(ostream& off) = 0;
	friend ostream& operator<<(ostream& off, Figures& opt)
	{
		return opt.print(off);
	}
	bool operator > (Figures& opt)
	{
		if (this->Perimeter() > opt.Perimeter())
			return true;
		return false;
	}
	bool operator < (Figures& opt)
	{
		if (this->Perimeter() < opt.Perimeter())
			return true;
		return false;
	}
};
