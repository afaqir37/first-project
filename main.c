#include <unistd.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char s[] = "hello world";
	write(1, &s, 11);
	write(1, "\n", 1);
	return 0;
}
