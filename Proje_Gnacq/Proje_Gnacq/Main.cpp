#include"Gnacq.h"
#include<fstream>
#include<list>
#include <sstream>

using namespace std;

int main()
{
		
		fstream ob;
		string S, T;
		ob.open("file.txt", ios::in);

		streampos begin, end;
		begin = ob.tellg();
		ob.seekg(0, ios::end);
		end = ob.tellg();
		int size = end - begin;
		ob.close();

		char* SS = new char[size];
		ob.open("file.txt", ios::in);
		ob.read(SS, size);

		int k = 0;
		while (SS[k] != '\n')
		{
			T.push_back(SS[k]);
			k++;
		}
		int count;
		istringstream(T) >> count;
		T.erase();
		Gnacq ob1(count);
		bool is;
		while (SS[k] != ' ')
		{
			T.push_back(SS[k]);
			++k;
		}
		istringstream(T) >> is;
		T.erase();
		bool iss;
		while (SS[k] != '\n')
		{
			T.push_back(SS[k]);
			++k;
		}
		istringstream(T) >> iss;
		
		if(is)
			ob1.setShogeqarshColorBig_Ak(Color::Black);
		else ob1.setShogeqarshColorBig_Ak(Color::White);
		if (iss)
			ob1.setShogeqarshColorSmall_Ak(Color::Black);
		else ob1.setShogeqarshColorSmall_Ak(Color::White);
		++k;
		int ccccount = 0;
		while (SS[k] != '\0' && k < size)
		{

			int logic = 0;
			Vagon* vag;
			cout << "While 1   ";
			while (SS[k] != '\n' && SS[k] != '\0' &&  k < size)
			{
				string s;
				
				cout << "While 2   ";
				while (SS[k] != ',' && SS[k] != '\0' && SS[k] != '\n' &&  k < size)
				{
					cout << "While 3   ";
					s.push_back(SS[k]);
					int tiv;
					istringstream(s) >> tiv;
					cout << "tiv = " << tiv<<endl;
					cout << "logic= " << logic << endl;
					switch (logic) {
					case 0: {
						
						Patker* bop=nullptr;
						switch (tiv) {
						case 0:
						{
							Rectangle rob;
							bop = &rob;
							break;
						}
						case 1:
						{
							Sixangle sob;
							bop = &sob;
							break;
						}
						case 2:
						{
							Squere sqob;
							bop = &sqob;
							break;
						}
						case 3:
						{
							Table tob;
							bop = &tob;
							break;
						}
						default:
							cerr << "Have not this vagon";
						}
						vag->setCabin(bop);
						break;
					}
					case 1: {
						cout << "aniv tivv=" << tiv << endl;
						vag->addAniv(tiv,Color::White);
						
						break;
					}
					case 2: {
						if (tiv)
							vag->setAnivColor(Color::Black);
						else vag->setAnivColor(Color::White);
						break;
					}
					case 3:
					{
						Roof* rr=nullptr;
						std::cout << "Roof   " << endl;
						switch(tiv){
						case 0:
						{
							
							Line lob1(vag->getCabinLenght());
							rr = &lob1;
							break;
						}
						case 1:
						{

							Zigzag zob1(vag->getCabinLenght());
							rr = &zob1;
							break;
						}
						case 2:
						{

							OpenTriangle oob1(vag->getCabinLenght());
							rr = &oob1;
							break;
						}
					}
						cout << "rr= " << rr << endl;
						if (rr == nullptr)
							break;
						vag->setRoof(rr);
					}
					default:
						cerr << "logic error " << endl;
						break;
				}
					k++;
				}
				++logic;
				++k;
				ob1.setVagon(vag, ccccount);
		}
		
		ob.close();
		++k;
	
		ccccount++;
	}
	ob1.draw();

	//f1.open("file.txt", ios::in);
	/*
	Gnacq ob1(5);
	ob1.setShogeqarshColorBig_Ak(Color::White);
	
	Rectangle rob(50, 30, true, Color::White);
	Zigzag zob(50);
	Vagon ob2(3 , Color::Black,&rob,&zob);
	Circle ob5(5, Color::Black);
	ob1.setVagon(&ob2,0);
	ob2.addInCabin(&ob5);
	ob1.draw();
	*/
	//ob1.draw();
	return 0;

}
