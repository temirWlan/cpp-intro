class A
{
public:
	A()
	{
		cout << "Constructor A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "Constructor B" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "Constructor C" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	
	C c;

	// Order
	// 1) Constructor A
	// 2) Constructor B
	// 3) Constructor C
}