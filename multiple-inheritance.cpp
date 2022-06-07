class Car
{
public:
	void drive()
	{
		cout << "Drive" << endl;
	}
};

class Airplane
{
public:
	void fly()
	{
		cout << "Fly" << endl;
	}
};

class FlyingCar : public Car, public Airplane
{
	
};



int main()
{
	setlocale(LC_ALL, "ru");
	FlyingCar BMW;
	BMW.fly();
}