#include <stdio.h>
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
