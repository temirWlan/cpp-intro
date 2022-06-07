class Man
{
public:
	Man() = default;

	Man(string name)
	{
		this->name = name;
		this->age = 0;
		this->weight = 0;
	}

	Man(string name, int age) : Man(name)
	{
		this->age = age;
	}

	Man(string name, int age, int weight) : Man(name, age)
	{
		this->weight = weight;
	}

	string getName()
	{
		return this->name;
	}

private:
	string name;
	int age;
	int weight;
};

int main()
{
	setlocale(LC_ALL, "ru");
	
	Man m("Peter Parker");
	cout << m.getName() << endl;
}