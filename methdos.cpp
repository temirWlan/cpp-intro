// inside class
class Human
{
public:
	int age;
	int weight;
	string name;

	void showInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Weight: " << weight << endl;
	}

	void printMessage(string message);
};

// outside class
void Human::printMessage(string message)
{
	cout << message << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Human firstHuman;
	firstHuman.age = 255;
	firstHuman.name = "Jack";
	firstHuman.weight = 150;
	firstHuman.showInfo();
	
}