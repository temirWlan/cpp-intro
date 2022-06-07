class Human
{
public:
	string name;
};

class Student : public Human
{
public:
	string group;

	void learn()
	{
		cout << "I wanna improve my English level to Advanced" << endl;
	}
};

class Teacher : public Human
{
public:
	string subject;

	void teach()
	{
		cout << "Today we will read about Past Perfect" << endl;
	}
};