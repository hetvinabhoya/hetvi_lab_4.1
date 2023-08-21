#include<iostream>
using namespace std;

class P{
	public:
		float Celsius;
		float Fehrenheit;
		float Kelvin;
		
		cels()
		{
			cout << "Enter Celsius : ";
			cin >> Celsius;
		}
};

class Q : public P{
	public:
		toFehr()
		{
			Fehrenheit = Celsius * 1.8 + 32;
			cout << "Celsius converted into Fehrenheit : " << Fehrenheit << endl;
		}
};

class R : public Q{
	public:
		toKelv()
		{	
		    Kelvin = (0.55 * (Fehrenheit - 32) + 273);
			cout << "Fehrenheit converted into Kelvin : " << Kelvin << endl;
		}
};


int main()
{
	R Total;
	
	Total.cels();
	Total.toFehr();
	Total.toKelv();	
	
	return 0;
}
