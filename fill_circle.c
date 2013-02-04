#include <stdio.h>
#include <stdlib.h>

// Prints a circle in the command line with user-specified radius!
// This one does a different fill!

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("Usage: circle radius\n");
		return 0;
	}
	short i;
	short j;
	short rad = atoi(argv[1]);

	for (i = 0; i < 2*rad; i++) {
		for (j = 0; j < 2*rad; j++) {
			int tmp = (i-rad)*(i-rad) + (j-rad)*(j-rad);
			if (((rad*rad - 100) <= tmp) && (tmp < rad*rad)) {
				printf("##");
			}
			else if (tmp < (rad*rad - 100)) {
				printf("..");
			}
			else printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}