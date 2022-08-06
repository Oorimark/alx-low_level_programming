/**
 * int_index - passes element in an array to a function
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: 0 | 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
