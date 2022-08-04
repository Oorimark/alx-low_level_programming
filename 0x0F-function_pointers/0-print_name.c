/**
 * print_name - pass name to a function
 * @name: name
 * @f: pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
