#pragma once


#include"Roof.h"


class Vagon
{
public:
	Vagon(int, Color, Patker*, Roof*);
	//Vagon() :m_aniv(2, new Circle(5, Color::Black)), m_cabin(pp), m_roof(rr) {}
	Vagon():m_roof(nullptr),m_cabin(nullptr){}
	void addInCabin(Patker* pp) {/* std::string s = typeid(pp).name(); std::cout << s << std::endl;*/  m_cabin->add(pp); }
	void removeInCabin(Patker* pp) { m_cabin->remove(pp); }
	void setCabin(Patker* pp) {
		
		m_cabin =(pp);
	}
	void addAniv(int count, Color ob) {
		while (count > 0) {
			std::cout << "addAniv:" << std::endl;
			m_aniv.push_back((new Circle(5, ob)));
			--count;
		}
	}
	double getCabinLenght() { return m_cabin->getlenght(); }
	void setAnivColor(Color ob) {
		for (int i = 0; i < m_aniv.size(); ++i)
			m_aniv[i]->recolor(ob);
	}
	void removeAniv(Circle* pp) {
		std::vector<Circle*>::iterator ii = find(m_aniv.begin(), m_aniv.end(), pp);
		if (ii != m_aniv.end())
			m_aniv.erase(ii);
	}
	void setRoof(Roof* pp) { m_roof = (pp); }
	void draw() {
		if (m_cabin == nullptr) return;
		std::cout << "Vagon's roof is- "; m_roof->draw(); std::cout << "\ncabin is- "; m_cabin->draw(); std::cout << "\naniv's count are- " << m_aniv.size();
		std::cout << "Color's are- " << m_aniv[0]->getColor();
	}
private:
	Roof* m_roof;
	Patker* m_cabin;
	std::vector<Circle*> m_aniv;
};

Vagon::Vagon(int count, Color ob1, Patker* pp, Roof* rr) : m_aniv(count, new Circle(5, ob1)),m_cabin(pp),m_roof(rr) {

}