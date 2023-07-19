#pragma once
#include"Cabins.h"


class Roof :public Patker {
public:
	void draw() { std::cout << "mi  bannn" << std::endl; }
	virtual void rotate(int)final { assert(false); }
	void add(Patker* pp) final { assert(false); }
	void remove(Patker* pp) final { assert(false); }
	void recolor(Color col) final { assert(false); }
	virtual ~Roof(){}
};

class Line :public Roof {
public:
	Line(int le) :lenght(le) {}
	void draw() override { std::cout << "draw roof line with lenght- " << lenght << std::endl; }
private:
	int lenght;
};

class Zigzag :public Roof {
public:
	Zigzag(int le) :lenght(le) {}
	void draw() override { std::cout << "draw roof Zigzag with lenght- " << lenght << std::endl; }
private:
	int lenght;
};

class OpenTriangle :public Roof {
public:
	OpenTriangle(int le) :lenght(le) {}
	void draw() override { std::cout << "draw roof OpenTriangle with 2 edges - " << lenght << std::endl; }
private:
	int lenght;
};