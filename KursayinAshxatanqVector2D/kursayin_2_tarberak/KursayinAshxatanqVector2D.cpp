

#include "KursayinAshxatanqVector2D.h"
#include <iostream>
using namespace std;
int main()
{



	float x1, y1, x2, y2;



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





	Vector2D  obj1(x1, y1);

	Vector2D obj2(x2, y2);




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




	cout << "click 14 to Function set (Vektor)" << endl;
	cout << "click 15 to Function clone" << endl;
	cout << "click 16 to Function setAngle" << endl;
	cout << "click 17 to Function setAngleDeg" << endl;


	cout << "click 18 to Function getAngle" << endl;
	cout << "click 19 to Function getAngleDeg" << endl;
	cout << "click 20 to Function rotate" << endl;
	cout << "click 21 to Function add" << endl;
	cout << "click 22 to Function subtract" << endl;
	cout << "click 23 to Function multiply" << endl;
	cout << "click 24 to Function divide " << endl;
	cout << "click 25 to Function normalize" << endl;
	cout << "click 26 to Function setLength" << endl;
	cout << "click 27 to Function getLength" << endl;
	cout << "click 28 to Function dot" << endl;
	cout << "click 29 to Function cross" << endl;
	cout << "click 30 to Function distanceTo" << endl;
	cout << "click 31 to Function lookAt" << endl;
	cout << "click 32 to Function print" << endl;














	int z;

	cin >> z;

	cout << endl;

	Vector2D obj;

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

		obj = obj1 + float( 5);

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
	
	obj.set(obj1);
	
		break;
	case 15:

		obj.clone();

		break;

	case 16:

		obj.setAngle(float(6));

		break;
	case 17:

		obj.setAngleDeg (float(9));

		break;
	case 18:

		obj.getAngle();

		break;
	case 19:

		obj.getAngleDeg();

		break;
	case 20:

		obj.rotateBy(float(8.5));

		break;
	case 21:

		obj.add(obj1);

		break;
	case 22:

		obj.subtract( obj2);

		break;
	case 23:

		obj.multiply(float(6));

		break;
	case 24:

		obj.divide(float(5.2));

		break;
	case 25:

		obj.normalize();

		break;
	case 26:

		obj.setLength(float(8));

		break;
	case 27:

		obj.getLength();

		break;
	case 28:

		obj.dot(obj2);

		break;
	case 29:

		obj.cross(obj2);

		break;
	case 30:

		obj.distanceTo(obj2);

		break;
	case 31:

		obj.lookAt(obj2);

		break;
	case 32:

		obj1.print(1);

		break;



	}



	cout << endl;




	system("pause");


	return 0;



}


	
