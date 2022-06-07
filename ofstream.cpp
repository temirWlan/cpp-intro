int main()
{
	setlocale(LC_ALL, "ru");

	ofstream file;
	string path = "somefile.txt";
	string str;

	file.open(path, ofstream::app);
	
	if (!file.is_open())
	{
		cout << "Something went wrong" << endl;
	}
	else
	{
		cout << "Enter: sentence: ";
		cin >> str;

		cout << str;

		file << str << "\n";
	}

	file.close();
}