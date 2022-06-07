class A
{
public:
	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	~C()
	{
		cout << "Destructor C" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	
	C c;

	// Order
	// 1) Destructor C
	// 2) Destructor B
	// 3) Destructor A
}