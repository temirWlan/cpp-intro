class Car
{
public:
	void act()
	{
		cout << "Drive" << endl;
	}
};

class Airplane
{
public:
	void act()
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
	FlyingCar car;
	
	((Car)car).act();
}