class PC
{
public:
	enum PCState {
		OFF,
		ON,
		SLEEP
	};

	PCState getState()
	{
		return state;
	}

	void setState(PCState state)
	{
		this->state = state;
	}
private:
	PCState state;
};

int main()
{
	setlocale(LC_ALL, "ru");

	PC pc;
	pc.setState(PC::PCState::ON);

	switch (pc.getState())
	{
	case PC::PCState::OFF:
		cout << "PC turned off" << endl;
		break;
	case PC::PCState::ON:
		cout << "PC turned on" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "PC sleep now" << endl;
		break;
	}
}