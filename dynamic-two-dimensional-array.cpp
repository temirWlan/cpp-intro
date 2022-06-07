int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	int rows = 5;
	int cols = 7;

	// инициализация двумерного массива
	int **arr = new int* [rows];


	// заполнения массива указателями на другие массивы в динамической памяти
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	// заполнение массивов в массиве рандомными элементами
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

	// вывод каждого элемента в каждом массиве
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << '\t';
		}

		cout << endl;
	}

	// очистка динамической памяти от элементов массивов в массиве, которые находятся в основном массиве
	for (int i = 0; i < rows; i++)
	{
		delete [] arr[i];
		arr[i] = nullptr;
	}


	delete [] arr;
	arr = nullptr;
	
}