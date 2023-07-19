#pragma once

#include"Shogeqarsh.h"

class Gnacq
{
public:
	Gnacq(int x) : m_shogegarsh(new Shogegarsh(Color::Black, Color::Black)), m_vagon(x - 1,nullptr) {}
	Gnacq() :m_shogegarsh(new Shogegarsh(Color::Black, Color::Black)) {}
	void addVagon(Vagon* pp) { m_vagon.push_back(pp); }
	void setVagon(Vagon* pp, int n) {if(n<m_vagon.size()) m_vagon[n] = (pp); }
	void setShogeqarshColorBig_Ak(Color ob1) { m_shogegarsh->setColorBigAk(ob1); }
	void setShogeqarshColorSmall_Ak(Color ob1) { m_shogegarsh->setColorSmallAk(ob1); }
	void removeVagon(Vagon* pp) {
		auto ii = find(m_vagon.begin(), m_vagon.end(), pp);
		if (ii != m_vagon.end())
			m_vagon.erase(ii);
	}
	void draw() {
		std::cout << "Shogeqarsh is- "; m_shogegarsh->draw(); std::cout << std::endl;
		std::cout << "Vagons are- "; for (size_t i = 0; i < m_vagon.size(); ++i) { if(m_vagon[i]!=nullptr) m_vagon[i]->draw(); std::cout << std::endl;
		}
	
	}
private:
	std::vector<Vagon*> m_vagon;
	Shogegarsh* m_shogegarsh;
};


/*
class Aniv :public Circle
{
public:
	Aniv(int size, Color col) :Circle(size, col) {}
	void add(Patker* pp) override { assert(false); }
	void remove(Patker* pp) override { assert(false); }
	void draw() override { Circle::draw(); }
};
*/


