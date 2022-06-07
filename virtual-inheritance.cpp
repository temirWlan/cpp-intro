class Character
{
public:
	Character()
	{
		cout << "Constructor Character" << endl;
	}
};

class Orc : public virtual Character
{
public:
	Orc()
	{
		cout << "Constructor Orc" << endl;
	}
};

class Warrior : public virtual Character
{
public:
	Warrior()
	{
		cout << "Constructor Warrior" << endl;
	}
};

class OrcWarrior : public Orc, public Warrior
{
public:
	OrcWarrior()
	{
		cout << "Constructor OrcWarrior" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");

	OrcWarrior Lex;
}