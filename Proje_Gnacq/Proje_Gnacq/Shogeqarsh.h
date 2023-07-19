#pragma once
#include"Vagon.h"


class Shogegarsh {
public:
	//remember to do this class singleton
	Shogegarsh(Color aa, Color bb);
	void setColorBigAk(Color aa) { m_arr[1]->recolor(aa); }
	void setColorSmallAk(Color aa) { m_arr[0]->recolor(aa); }
	~Shogegarsh() {}
	void draw() { for (size_t i = 0; i < m_arr.size(); ++i) m_arr[i]->draw(); }
private:
	//Color m_col;

	std::vector<Patker*> m_arr;
};

Shogegarsh::Shogegarsh(Color aa, Color bb)
{
	
	Patker* obob = new Rectangle(20, 5, false, Color::White); Patker* sob = new Squere(5, false, Color::White);// Rectangle *ob3=new Rectangle(30, 15, false, Color::White);
	
	m_arr.push_back((new Circle(5, aa)));
	m_arr.push_back((new Circle(10, bb)));
	m_arr.push_back((new Rectangle(30, 15, false, Color::White)));
	//m_arr.push_back(std::make_unique<Patker>(new Rectangle(20, 5, false, Color::White)));
	//m_arr.push_back(std::make_unique<Patker>(new Squere(5, false, Color::White)));
	m_arr.push_back((new Rectangle(30, 15, false, Color::White)));
	m_arr.push_back((new Rectangle(10, 3, false, Color::White)));
	m_arr[2]->add(obob); m_arr[2]->add(sob);
}
