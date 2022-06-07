void bubleSort(int arr[], const int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
}

void fillArray(int arr[], const int size);
void printArrayElements(int arr[], const int size);


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	const int SIZE = 10;
	int arr[SIZE];

	fillArray(arr, SIZE);
	printArrayElements(arr, SIZE);
}

void fillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 15;
	}
}

void printArrayElements(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}