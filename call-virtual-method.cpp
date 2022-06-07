class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}

	virtual string getMsg()
	{
		return this->msg;
	}
private:
	string msg;
};

class BracketMsg : public Msg
{
public:
	BracketMsg(string msg) : Msg(msg)
	{

	}

	string getMsg() override
	{
		return "[" + ::Msg::getMsg() + "]";
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	
	BracketMsg msg("Some message");
	cout << msg.getMsg() << endl;
}