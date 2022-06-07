int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	

	const int SIZE = 10;
	int arr[SIZE];
	bool isAlreadyExist;

	for (int i = 0; i < SIZE;)
	{
		int randomNumber = rand() % 20;
		isAlreadyExist = false;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == randomNumber)
			{
				isAlreadyExist = true;
				break;
			}
		}

		if (!isAlreadyExist)
		{
			arr[i] = randomNumber;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	int minOfArray = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minOfArray)
		{
			minOfArray = arr[i];
		}
	}

	cout << "\n" << minOfArray << endl;
}