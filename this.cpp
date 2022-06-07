class Point
{
public:
	int x;
	int y;

	Point()
	{
		this->printAddress();
	}

	void printAddress()
	{
		cout << this << endl;
	}

	int getX()
	{
		return this->x;
	}

	void setX(int x)
	{
		this->x = x;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");

	Point a;
	a.setX(70);
}