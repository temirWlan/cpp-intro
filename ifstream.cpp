int main()
{
	setlocale(LC_ALL, "ru");

	ifstream file;
	string path = "somefile.txt";

	file.open(path);

	if (!file.is_open())
	{
		cout << "Incorrect file path" << endl;
	}
	else
	{
		cout << "File ready to reading" << endl;
		string str;

		while (!file.eof())
		{
			getline(file, str);
			cout << str << endl;
		}
	}

	file.close();
}