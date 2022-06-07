class Car
{
public:
	Car()
	{
		cout << "Constructor Car" << endl;
	}

	~Car()
	{
		cout << "Destructor Car" << endl;
	}

	void drive()
	{
		cout << "Drive" << endl;
	}
};

class Airplane
{
public:
	Airplane()
	{
		cout << "Constructor Airplane" << endl;
	}

	~Airplane()
	{
		cout << "Destructor Airplane" << endl;
	}

	void fly()
	{
		cout << "Fly" << endl;
	}
};

class FlyingCar : public Car, public Airplane
{
public:
	FlyingCar()
	{
		cout << "Constructor FlyingCar" << endl;
	}

	~FlyingCar()
	{
		cout << "Destructor FlyingCar" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	FlyingCar car;

	// Constructor Car
	// Constructor Airplane
	// Constructor FlyingCar

	// Destructor FlyingCar
	// Destructor Airplane
	// Destructor Car
}