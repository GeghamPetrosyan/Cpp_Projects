#pragma once
#include"Patker.h"

class Circle :public Patker {
public:
	Color getColor() { return m_col; }
	Circle(int size1, Color col) :m_size(size1), m_col(col) {}
	Circle():m_size(5),m_col(Color::White){}
	void add(Patker* pp)override {  }
	void remove(Patker* pp)override {  }
	void recolor(Color col) override { m_col = col; }
	void resize(int size) { m_size = size; }
	void draw() override { std::cout << "draw circle in size-" << m_size << " and in color" << m_col << std::endl; Patker::draw(); }
	void rotate(int degree) override {}

private:
	Color m_col;
	int m_size;
};

class Rectangle :public Patker {
public:
	Color getColor() { return m_col; }
	void add(Patker* pp) override { m_arr.push_back((pp)); }
	void remove(Patker* pp)override {
		std::vector<Patker*>::iterator ii = find(m_arr.begin(), m_arr.end(), pp);
		if (ii != m_arr.end())
			m_arr.erase(ii);
	}
	double getlenght() { return m_lenght; }
	Rectangle(int lenght, int height, bool m_isopen, Color col) :m_lenght(lenght), m_height(height), m_isopen(m_isopen), m_col(col) , m_degree(0){}
	Rectangle():m_lenght(30),m_height(20),m_isopen(true),m_col(Color::White), m_degree(0) {}
	void draw() override {
		std::cout << "draw Rectangle in height-" << m_height << " lenght- " << m_lenght << " and in color" << m_col << "open -" << m_isopen << std::endl;
		for (size_t i = 0; i < m_arr.size(); ++i)
			m_arr[i]->draw();
	}
	void recolor(Color col) override { m_col = col; }
	void resize(int lenght, int height) { m_lenght = lenght; m_height = height; }
	void rotate(int degree) override {
		int deg; if (degree > 180) deg = degree % 180;
		m_degree = 180 * deg; std::cout << "rotate it" << m_degree << " percent" << std::endl;
	}
private:
	std::vector<Patker*> m_arr;
	Color m_col;
	int m_lenght;
	int m_height;
	bool m_isopen;
	int m_degree;
};

class Squere :public Patker {
public:
	Color getColor() { return m_col; }
	void add(Patker* pp) override { m_arr.push_back((pp)); }
	void remove(Patker* pp)override {
		std::vector<Patker*>::iterator ii = find(m_arr.begin(), m_arr.end(), pp);
		if (ii != m_arr.end())
			m_arr.erase(ii);
	}
	double getlenght() { return m_height; }
	Squere(int height, int edges, Color col) :m_height(height), m_isopen(edges), m_col(col), m_degree(0) {}
	Squere() :m_height(20), m_isopen(true), m_col(Color::White),m_degree(0) {}
	void draw() override { std::cout << "draw Squere in height-" << m_height << " and in color" << m_col << "isopen -" << m_isopen << std::endl;
	for (size_t i = 0; i < m_arr.size(); ++i)
		m_arr[i]->draw();
	}
	void recolor(Color col) override { m_col = col; }
	void resize(int lenght, int height) { m_height = height; }
	void rotate(int degree) override {
		int deg; if (degree > 90) deg = degree % 90;
		m_degree = 90 * deg; std::cout << "rotate it" << m_degree << " percent" << std::endl;
	}
private:
	std::vector<Patker*> m_arr;
	Color m_col;
	int m_height;
	int m_isopen;
	int m_degree;
};

class Table :public Patker {
public:
	Color getColor() { return m_col; }
	void add(Patker* pp) override { m_arr.push_back((pp)); }
	void remove(Patker* pp)override {
		std::vector<Patker*>::iterator ii = find(m_arr.begin(), m_arr.end(), pp);
		if (ii != m_arr.end())
			m_arr.erase(ii);
	}
	//void getsmallb
	double getlenght() { return m_bigb; }
	Table(int small, int big, int height, bool open, Color col, int degree) :m_smallb(small), m_bigb(big), m_height(height), m_isopen(open), m_col(col), m_degree(degree) {}
	Table() :m_smallb(20), m_bigb(30), m_height(30), m_isopen(true), m_col(Color::White), m_degree(0) {}
	void draw() override { std::cout << "draw Table in height-" << m_height << " and in color" << m_col << "isopen -" << m_isopen << std::endl;
	for (size_t i = 0; i < m_arr.size(); ++i)
		m_arr[i]->draw();
	}
	void recolor(Color col) override { m_col = col; }
	void resize(int big, int small, int height) { m_smallb = small; m_bigb = big; m_height = height; }
	void rotate(int degree) override {
		int deg; if (degree > 90) deg = degree % 90;
		m_degree = 90 * deg; std::cout << "rotate it" << m_degree << " percent" << std::endl;
	}
private:
	std::vector<Patker*> m_arr;
	Color m_col;
	int m_height;
	int m_isopen;
	int m_smallb;
	int m_bigb;
	int m_degree;
};

class Sixangle :public Patker {
public:
	Color getColor() { return m_col; }
	void add(Patker* pp) override { m_arr.push_back((pp)); }
	void remove(Patker* pp)override {
		std::vector<Patker*>::iterator ii = find(m_arr.begin(), m_arr.end(), pp);
		if (ii != m_arr.end())
			m_arr.erase(ii);
	}
	double getlenght() { return m_biglenght; }
	Sixangle(int small, int big, int height, bool open, Color col, int degree) :m_smalllenght(small), m_biglenght(big), m_height(height), m_isopen(open), m_col(col), m_degree(degree) {}
	Sixangle() :m_smalllenght(10), m_biglenght(30), m_height(20), m_isopen(true), m_col(Color::White), m_degree(0) {}
	void draw() override { std::cout << "draw Sixangle in height-" << m_height << " and in color" << m_col << "isopen -" << m_isopen << std::endl;
	for (size_t i = 0; i < m_arr.size(); ++i)
		m_arr[i]->draw();
	}
	void recolor(Color col) override { m_col = col; }
	void resize(int big, int small, int height) { m_smalllenght = small; m_biglenght = big; m_height = height; }
	void rotate(int degree) override {
		int deg; if (degree > 90) deg = degree % 90;
		m_degree = 90 * deg; std::cout << "rotate it" << m_degree << " percent" << std::endl;
	}
private:
	std::vector<Patker*> m_arr;
	Color m_col;
	int m_height;
	int m_isopen;
	int m_biglenght;
	int m_smalllenght;
	int m_degree;
};
