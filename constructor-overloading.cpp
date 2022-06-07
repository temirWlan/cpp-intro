class Point
{
public:
	int x;
	int y;

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	Point(bool isOdd)
	{
		if (isOdd)
		{
			x = 10;
			y = x * 2;
		}
		else
		{
			x = 11;
			y = x % 2;
		}
	}
	Point(string word)
	{
		x = sizeof(word);
		y = x / 2;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point a(5, 15);
	Point b(false);
	Point c("constructor");

	cout << a.x << "\t" << a.y << endl;
	cout << b.x << "\t" << b.y << endl;
	cout << c.x << "\t" << c.y << endl;
	
}