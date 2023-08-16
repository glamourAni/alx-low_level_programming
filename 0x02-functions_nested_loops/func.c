#include <stdio.h>

int increment(int a)
{
	int add_1;
	add_1 = a + 1;
	return (add_1);
}

int main(void)
{
	int a;
	a = 10;
	increment(10);
	increment(a);
	printf("a = %d\n", a);
	return (0);
}
