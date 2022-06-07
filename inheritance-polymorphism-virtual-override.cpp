class Gun
{
public:
	virtual void shoot()
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	void shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	
	SubmachineGun gun;
	gun.shoot();
}