


#include <iostream>

#pragma once
#include <cmath>


using namespace std;




class Vec2D

{

    public:
	
		double  x, y;
	
	
		Vec2D() :x(0), y(0) {}

	
		Vec2D(double  x, double  y) : x(x), y(y) {}

	
		Vec2D(const Vec2D& v) : x(v.x), y(v.y) {}

	
		~Vec2D () {}
	
		Vec2D& operator=(const Vec2D& v)


		{

			x = v.x;
	
			y = v.y;
	    	return *this;
	    }



	
		Vec2D operator+(const Vec2D& v)const
	
	
     	{
			Vec2D ob;
			ob.x = x + v.x;
			ob.y = y + v.y;
			return ob;
			//return Vec2D(x + v.x, y + v.y);
    	}



		Vec2D operator-(const Vec2D& v) const
	
	    {
	
			return Vec2D(x - v.x, y - v.y);
	    }



	    
		Vec2D& operator+=(Vec2D& v)
		{
	
			x += v.x;
	
			y += v.y;
	
			return *this;
	
		}

		Vec2D& operator-=(Vec2D& v)
		{
	
			x -= v.x;
	
			y -= v.y;
	
			return *this;

		}

	
		Vec2D operator+(double s)
		{
		
			return Vec2D(x + s, y + s);
	
		}
	
		Vec2D operator-(double s) 
		{
	
			return Vec2D(x - s, y - s);
	
		}
	
		Vec2D operator*(double s)
		{
		
			return Vec2D(x * s, y * s);
	
		}
	
		Vec2D operator/(double s)
		{
	
			return Vec2D(x / s, y / s);

		}


	
		Vec2D& operator+=(double s)
		{
	
			x += s;
	
			y += s;
	
			return *this;

		}
	
		Vec2D& operator-=(double s)
		{
	
			x -= s;
	
			y -= s;
	
			return *this;

		}

		Vec2D& operator*=(double s)
		{
	
			x *= s;
		
			y *= s;
		
			return *this;

		}

		Vec2D& operator/=(double s) 
		{
	
			x /= s;
	
			y /= s;
	
			return *this;

		}
		
	
		void set(double x, double y)
		{
		
			this->x = x;
	
			this->y = y;

		}

	
		void rotate(double deg)
		{
	
			double theta = deg / 180.0 * 3.14;
	
			double c = cos(theta);
	
			double s = sin(theta);
	
			double tx = x * c - y * s;
	
			double ty = x * s + y * c;

			x = tx;

			y = ty;
	
		}

	
		Vec2D& normalize() 
		{
	
			if (length() == 0) return *this;
	
			*this *= (1.0 / length());
	
			return *this;
	
		}

	
		double dist(Vec2D  v) const
		{
		
			Vec2D d(v.x - x, v.y - y);
	
			return d.length();

		}

		float length() const 
		{
		
			return std::sqrt(x * x + y * y);
	
		}
	
		void truncate(double length)
		{
		
			double angle = atan2f(y, x);
		
			x = length * cos(angle);
		
			y = length * sin(angle);

		}

	
		Vec2D ortho() const 
		{
		
			return Vec2D(y, -x);

		}


		static float dot(Vec2D v1, Vec2D v2) 
		{
		
			return v1.x * v2.x + v1.y * v2.y;
	
		}
	
		static float cross(Vec2D v1, Vec2D v2)
		{
		
			return (v1.x * v2.y) - (v1.y * v2.x);
	
		}


};


