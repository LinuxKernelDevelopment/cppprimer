#include <iostream>
#include "beginend.h"

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	begin<int *, sizeof(arr)/sizeof(int)>(arr);
	return 0;
}

