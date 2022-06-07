int main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 5;
	int arr[SIZE]{1, 2, 3, 4, 5};

	int *p0 = &arr[0];
	int *pArr = arr;

	for (int i = 0; i < SIZE; i++)
	{
		pArr[i] *= i;
	}

	cout << &arr[0] << endl;
	cout << pArr << endl;
	cout << arr << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr + i << endl;
	}
}