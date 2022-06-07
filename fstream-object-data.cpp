int main()
{
	setlocale(LC_ALL, "ru");

	Point point(10, 20, 30);

	string path = "somefile.txt";
	ofstream file;
	file.open(path, ofstream::app);

	if (!file.is_open())
	{
		cout << "incorrect file path" << endl;
	}
	else
	{
		cout << "file ready to reading" << endl;
		file.write((char*)&point, sizeof(point));
	}

	file.close();

	ifstream file;
	

	file.open(path);

	if (!file.is_open())
	{
		cout << "Incorrect file path" << endl;
	}
	else
	{
		cout << "File ready to reading" << endl;
		Point pnt;

		while (file.read((char*)&pnt, sizeof(Point)))
		{
			pnt.print();
		}
	}

	file.close();
}