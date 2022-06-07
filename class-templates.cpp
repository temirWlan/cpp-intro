template <typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1 firstValue, T2 secondValue)
	{
		this->firstValue = firstValue;
		this->secondValue = secondValue;
	}

	void showDataTypeSize()
	{
		cout << sizeof(firstValue) << endl;
		cout << sizeof(secondValue) << endl;
	}

private:
	T1 firstValue;
	T2 secondValue;
};

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;
	string s = "string";

	MyClass<int, string> myclass(a, s);
	myclass.showDataTypeSize();
}