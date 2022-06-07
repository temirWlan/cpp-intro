template <typename T>
void replacer(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}