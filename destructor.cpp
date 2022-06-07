class Point
{
public:
	int x;
	int y;

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;

		cout << "Constructor" << endl;
	}
	
	~Point()
	{
		cout << "Destructor" << endl;
	}
};

void showDestructor()
{
	cout << "Begin" << endl;
	Point a(5, 15);
	cout << "End" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	showDestructor();
}