#include <iostream>

#pragma once

#include "Vec2D.h"



using namespace std;



int main()

{



	double x1, y1, x2, y2;



	cout << "vector1_x=";

	cin >> x1;
	cout << endl;

	cout << "vector1_y=";

	cin >> y1;
	cout << endl;



	cout << "vector2_x=";

	cin >> x2;
	cout << endl;

	cout << "vector2_y=";

	cin >> y2;
	cout << endl;





	Vec2D  obj1(x1, y1);

	Vec2D obj2(x2, y2);




	cout << "click 1 to overload = " << endl;



	cout << "click 2 to overload  + (vector)" << endl;
	cout << "click 3 to overload  - (vector)" << endl;



	cout << "click 4 to overload +=(vector) " << endl;
	cout << "click 5 to overload -=(vector) " << endl;



	cout << "click 6 to overload  +  " << endl;
	cout << "click 7 to overload  -  " << endl;
	cout << "click 8 to overload  *  " << endl;
	cout << "click 9 to overload  /  " << endl;



	cout << "click 10 to overload  +=  " << endl;
	cout << "click 11 to overload  -=  " << endl;
	cout << "click 12 to overload  *=  " << endl;
	cout << "click 13 to overload  /=  " << endl;




	cout << "click 14 to F set" << endl;
	cout << "click 15 to F rotate" << endl;
	cout << "click 16 to F normalize" << endl;
	cout << "click 17 to dist" << endl;


	cout << "click 18 to F length" << endl;
	cout << "click 19 to F truncate" << endl;
	cout << "click 20 to F ortho" << endl;
	cout << "click 21 to F dot" << endl;
	cout << "click 22 to F cross" << endl;


	


	int z;

	cin >> z;

	cout << endl;

	Vec2D obj;

	switch (z)
	{
			   	
	case 1:

		obj = obj2;



		break;

	case 2:

		obj = obj1 + obj2;

		break;

	case 3:

		obj = obj1 - obj2;


		break;

	case 4:

		obj += obj1;

		break;

	case 5:

		obj -= obj2;

		break;

	case 6:

		obj = obj1 + 5;

	case 7:

		obj = obj1 - 5;

		break;

	case 8:

		obj = obj1 * 5;

		break;

	case 9:

		obj = obj1 / 5;

		break;
	case 10:

		obj += 5;

		break;
	case 11:

		obj -= 5;

		break;


	case 12:

		obj *= 5;

		break;

	case 13:

		obj /= 5;

		break;

	case 14:

		obj.set(5, 5);

		break;
	case 15:

		obj.rotate(3.14 / 2);

		break;

	case 16:

		obj.normalize();

		break;
	case 17:

		obj.dist(obj1);

		break;
	case 18:

		obj.length();

		break;
	case 19:

		obj.truncate(3);

		break;
	case 20:

		obj.ortho();

		break;
	case 21:

		obj.dot(obj1, obj2);

		break;
	case 22:

		obj.cross(obj1, obj2);

		break;



	}



	cout << endl;




	system("pause");


	return 0;



}

