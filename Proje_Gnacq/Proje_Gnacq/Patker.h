#pragma once
#include<iostream>
#include<vector>
#include<cassert>
#include<typeinfo>
#include<string>

enum class Color {
	White, Black
};

std::ostream& operator << (std::ostream& ob1, const Color& colob)
{
	if(colob == Color::White) return ob1 << "White";
	else if(colob == Color::Black) return ob1 << "Black";
	return ob1 << "No Color";
}
class Patker {

public:
	virtual double getlenght() { return 0; };
	virtual void draw() = 0 {}
	virtual void rotate(int) {}
	virtual void recolor(Color col) {}
	virtual void add(Patker* pp) { assert(false); }
	virtual void remove(Patker* pp) { assert(false); }
	virtual ~Patker(){}
};