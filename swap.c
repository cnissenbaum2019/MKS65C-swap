#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int randos[10];
	int i = 0;

	srand( time(NULL) );

	printf("\nFirst array: randos \n\n");

	while (i - 10) {
		randos[i] = rand();
		printf("randos[%d]: %d\n", i, randos[i]);
		i++;
	}

	randos[9] = 0;

	printf("randos[9] (changed): %d\n\n", randos[9]);

	printf("\nSecond array: back \n\n");

	int back[10];
	int * changer = back;
	int * through = randos;

	i = 0;

	while (i - 10) {
		i++;
		through++;
	}
	through--;

	i = 0;

	while (i - 10) {
		*changer = *through;
		through--;
		changer++;
		i++;
	}

	i = 0;

	while (i - 10) {
		printf("back[%d]: %d\n", i, back[i]);
		i++;
	}

	printf("\n");

	return 0;
}