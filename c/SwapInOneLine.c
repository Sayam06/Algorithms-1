#include <stdio.h>
int main()
{
	int x = 22, y = 12;
	(x ^= y), (y ^= x), (x ^= y);
	return 0;
}
