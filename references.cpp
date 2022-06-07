void refFoo(int &n)
{
    n++;
}

int main()
{
    int a = 10;
    
    refFoo(a);

    cout << a << endl; // a = 11;
}