#include <iostream>

struct Wektor2D
{
    public:

        void setX(double setterX) { x = setterX; }
        double  getX()      { return x; }

        void setY(double setterY) { y = setterY; }
        double  getY()      { return y; }

        Wektor2D operator+(const Wektor2D& other) const
        {
            Wektor2D result;
            result.x = x + other.x;
            result.y = y + other.y;
            return result;
        }

        double operator*(const Wektor2D& other) const
        {
            double result;
            result = x * other.x + y * other.y;
            return result;
        }

        Wektor2D() //konstruktor 2argumentowy czyli "co sie stanie jak nic nie wpiszesz przy wywolywaniu"
        { 
            x = 0.0; 
            y = 0.0;
        }
        Wektor2D(double x_zastepcze, double y_zastepcze) : x(x_zastepcze), y(y_zastepcze) {}
    
    private:
        double x;
        double y;
};
