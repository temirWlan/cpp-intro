void fillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	int size = 10;
	int* arr = new int[size];
	int* newArr = new int[size];

	fillArray(newArr, size);
	delete[] newArr;

	newArr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
		cout << newArr[i] << endl;
	}

	delete[] arr;
	arr = nullptr;

	cout << endl << endl;

	for (int i = 0; i < size; i++)
	{
		//cout << arr[i] << "\t";
		//cout << newArr[i] << endl;
	}
	
}