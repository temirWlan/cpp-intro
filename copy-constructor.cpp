class Point
{
public:
	int x;
	int y;
	int *arr;

	Point(int size)
	{
		this->size = size;
		this->arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = i;
		}

		cout << "Constructor" << this << endl;
	}

	Point(const Point &object)
	{
		this->size = object.size;
		this->arr = new int[object.size];

		for (int i = 0; i < object.size; i++)
		{
			this->arr[i] = object.arr[i];
		}

		cout << "Copy Constructor" << this << endl;
	}

	~Point()
	{
		cout << this->arr << endl;

		delete [] this->arr;
		this->arr = nullptr;

		cout << "Destructor" << this << endl;
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

private:
	int size;
};


int main()
{
	setlocale(LC_ALL, "ru");

	Point a(15);
	Point b(a);
}