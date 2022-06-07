class Point
{
public:
	int x;
	int y;
	int *arr;


	Point(int x, int y, int size)
	{
		this->x = x;
		this->y = y;
		this->size = size;
		this->arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = i;
		}

		cout << "Constructor" << this << endl;
	}
	Point()
	{
		this->x = 0;
		this->y = 0;
		this->size = 0;
		this->arr = new int[this->size];
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

	Point& operator =(const Point& object)
	{
		this->size = object.size;

		if (this->arr != nullptr)
		{
			delete[] this->arr;
		}

		this->arr = new int[object.size];

		for (int i = 0; i < object.size; i++)
		{
			this->arr[i] = object.arr[i];
		}

		cout << "Operator \"=\" in" << this << endl;
		return *this;
	}

	bool operator ==(const Point& object)
	{
		bool isSame = true;

		if (this->x != object.x || this->y != object.y)
		{
			isSame = false;
		}

		if (this->size != object.size)
		{
			isSame = false;
		}
		else
		{
			for (int i = 0; i < object.size; i++)
			{
				if (this->arr[i] != object.arr[i])
				{
					isSame = false;
					break;
				}
			}
		}

		cout << isSame << endl;
		return isSame;
	}

	bool operator !=(const Point& object)
	{
		return !this->operator==(object);
	}

	Point operator +(Point& object)
	{
		Point p;

		p.x = this->x + object.x;
		p.y = this->y + object.y;
		//p.size = this->size + object.size;
		
		return p;
	}

		// prefix increment
	Point& operator ++()
	{
		++this->x;
		++this->y;

		return *this;
	}

	// postfix increment
	Point& operator ++(int value)
	{
		Point temp(*this);

		this->x++;
		this->y++;

		return temp;
	}

	~Point()
	{
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

	Point a(151, 92, 15);
	Point b(0, 175, 255);

	
	Point c = a + b;
	cout << "Show c\t" << c.x << "\t" << c.y << endl;
	//cout <<  << endl;
}