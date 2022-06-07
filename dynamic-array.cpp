int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	int size = 0;
	cout << "Enter array size: " << endl;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	delete [] arr;
	arr = nullptr;
}