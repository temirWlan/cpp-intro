class Weapon
{
public:
	virtual void act() = 0;
};

class Gun : public Weapon
{
public:
	void act() override
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	void act() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Greande : public Weapon
{
public:
	void act() override
	{
		cout << "BOOOM!!!" << endl;
	}
};

class Knife : public Weapon
{
public:
	void act() override
	{
		cout << "PZING!" << endl;
	}
};

class Player
{
public:
	string name;

	Player()
	{
		this->name = "Player";
	}

	Player(string name)
	{
		this->name = name;
	}

	void act(Weapon* weapon)
	{
		weapon->act();
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	
	SubmachineGun s_gun;
	Knife knife;
	Player player;
	
	player.act(&knife);
}