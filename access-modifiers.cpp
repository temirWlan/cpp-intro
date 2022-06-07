class Point
{
public:
	int x;
	int y;
	int z;
private:
	int volume;
	int calculateVolume()
	{
		volume = x * y * z;
	}
protected:
	string initialPoint = 0;
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point somePoint;
	somePoint.x = 10;
	somePoint.y = 15;
	somePoint.z = 255;
	
}