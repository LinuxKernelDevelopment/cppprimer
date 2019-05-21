#include <iostream>
#include <cstring>

int main(void)
{
	char ca1[] = "fuck";
	char ca2[] = "you";

	char *largestr = (char *)malloc(strlen(ca1) + strlen(ca2) + 1);
	memset(largestr, 0, strlen(ca1) + strlen(ca2) + 1);
	strcpy(largestr, ca1);
	strcat(largestr, " ");
	strcat(largestr, ca2);
	std::cout << largestr << std::endl;
	return 0;
}
