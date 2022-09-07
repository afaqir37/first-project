#include <stdio.h>
int famousone(int n)
{
	printf("%d", n);
	printf(" ");
	if (n == 1)
		return 0;
	else if (n % 2 == 0)
		famousone(n / 2);
	else if (n % 2 != 0)
		famousone(n * 3 + 1);
}

int main()
{
	famousone(3);
}
