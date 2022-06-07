int string_length(char *str)
{
	int length = 0;

	for (int i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		length++;
	}

	return length;
}