class Human;
class Apple;

class Human
{
public:
	void showInfoAboutApple(Apple& apple);
};

class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}

	friend Human;
private:
	int weight;
	string color;
};

void Human::showInfoAboutApple(Apple& apple)
{
	cout << "Weight: " << apple.weight << endl;
	cout << "Color: " << apple.color << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Apple a(10, "Green");
	Human h;
	h.showInfoAboutApple(a);
}