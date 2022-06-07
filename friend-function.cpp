class Point
{
private:
	int x;
	int y;
	friend void incrementX(Point& object);
}

void incrementX(Point& object)
{
	object.x++;
}