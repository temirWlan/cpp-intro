namespace firstNS
{
	void foo()
	{
		cout << "Function in firstNS" << endl;
	}
}

namespace secondNS
{
	void foo()
	{
		cout << "Function in secondNS" << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");

	firstNS::foo();
	secondNS::foo();
}