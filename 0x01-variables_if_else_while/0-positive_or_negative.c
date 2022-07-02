#include <stdlib.h>
#include <time.h>
/* more headers goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Hey");
	return (0);
}
