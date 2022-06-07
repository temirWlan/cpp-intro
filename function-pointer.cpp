int increment(int n)
{
	return ++n;
}

int sqr(int n)
{
	return n * n;
}


int main()
{
	setlocale(LC_ALL, "ru");

	int (*mathFunction)(int n);

	mathFunction = sqr;
	cout << mathFunction(255) << endl;
}