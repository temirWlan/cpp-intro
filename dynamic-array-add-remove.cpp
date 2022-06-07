void push(int *&arr, int &size, const int n)
{
	int *newArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[size] = n;
	size++;

	delete[] arr;
	arr = newArr;


}

void pop(int *&arr, int &size)
{
	int *newArr = new int[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		newArr[i] = arr[i];
	}

	size--;

	delete[] arr;
	arr = newArr;
}

void unshift(int *&arr, int &size, const int n)
{
	int* newArr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		newArr[i + 1] = arr[i];
	}

	newArr[0] = n;

	size++;

	delete[] arr;
	arr = newArr;
}

void shift(int *&arr, int &size)
{
	int *newArr = new int[size - 1];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i + 1];
	}

	size--;

	delete[] arr;
	arr = newArr;
}

void add_by_index(int *&arr, int &size, const int index, const int n)
{
	int *newArr = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
	}

	for (int i = index; i < size; i++)
	{
		newArr[i + 1] = arr[i];
	}

	newArr[index] = n;

	size++;

	delete[] arr;
	arr = newArr;
}

void remove_by_index(int*& arr, int& size, const int index)
{
	int* newArr = new int[size - 1];

	for (int i = 0; i < index; i++)
	{
		newArr[i] = arr[i];
	}

	for (int i = index + 1; i < size; i++)
	{
		newArr[i - 1] = arr[i];
	}

	size--;

	delete[] arr;
	arr = newArr;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	int size = 10;
	int *arr = new int[size];

	fillArray(arr, size);
	showArrayElements(arr, size);


	push(arr, size, 255);
	showArrayElements(arr, size);

	unshift(arr, size, 117);
	showArrayElements(arr, size);

	remove_by_index(arr, size, 4);
	showArrayElements(arr, size);
}