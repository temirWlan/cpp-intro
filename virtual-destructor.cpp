class A
{
public:
	A()
	{
		cout << "Constructor A" << endl;
	}

	virtual ~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "Constructor B" << endl;
	}

	~B() override
	{
		cout << "Destructor B" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	
	A* b = new B;
	delete b;
}