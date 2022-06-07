class Apple
{
public:
	static int count;

	Apple(int weight, string color)
	{
		Apple::count++;
		this->id = count;
	}

	int getId()
	{
		return this->id;
	}

	friend Human;
private:
	int id;
};

int Apple::count = 0;