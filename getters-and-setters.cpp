class Point
{
public:
	int x;
	int y;
	int z;

	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point somePoint;
	somePoint.SetX(15);
	cout << somePoint.GetX() << endl;
	
}