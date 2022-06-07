class Human
{
public:
	int age;
	int weight;
	string name;
};

class Point
{
public:
	int x;
	int y;
	int z;
};

int main()
{
	setlocale(LC_ALL, "ru");

	Human firstHuman;
	firstHuman.age = 255;
	firstHuman.name = "Jack";

	Point a;
	a.x = 10;
	a.y = 210;
	a.z = 153;
}