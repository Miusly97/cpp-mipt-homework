void sort_funcs(FuncPtr* a, size_t n, int x, int y)
{
	for (size_t i = 0; i < n - 1; i += 1)
	{
		for (size_t j = 0; j < n - 1 - i; j += 1)
		{
			if (a[j](x, y) > a[j+1](x, y))
			{
				FuncPtr temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}