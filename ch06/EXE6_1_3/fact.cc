#include "Chapter6.h"

int fact(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
		ret *= i;
	return ret;
}
