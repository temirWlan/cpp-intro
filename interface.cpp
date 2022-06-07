class IBicycle
{
public:
	virtual void tweestTheWheel() = 0;
	virtual void ride() = 0;
};

class SportBicycle : public IBicycle
{
public:
	void tweestTheWheel() override
	{
		cout << "tweestTheWheel on SportBicycle" << endl;
	}

	void ride() override
	{
		cout << "ride on SportBicycle" << endl;
	}
};

class BMX : public IBicycle
{
public:
	void tweestTheWheel() override
	{
		cout << "tweestTheWheel on BMX" << endl;
	}

	void ride() override
	{
		cout << "ride on BMX" << endl;
	}
};

class Sportsman
{
public:
	void rideOn(IBicycle& bicycle)
	{
		bicycle.tweestTheWheel();
		bicycle.ride();
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	
	BMX bmx;
	Sportsman CJ;
	CJ.rideOn(bmx);
}