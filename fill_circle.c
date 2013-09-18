#include <stdio.h>
#include <stdlib.h>

// Prints a circle in the command line with user-specified radius!
// This one does a different fill!

int main(int argc, char* argv[])
{
	if (argc < 3) {
		printf("Usage: circle radius border\n");
		return 0;
	}
	short i;
	short j;
	short rad = atoi(argv[1]);
	short border = atoi(argv[2]);

	for (i = 0; i < 2*rad; i++) {
		for (j = 0; j < 2*rad; j++) {
			int tmp = (i-rad)*(i-rad) + (j-rad)*(j-rad);
			if (((rad*rad - border*border) <= tmp) && (tmp < rad*rad)) {
				printf(":(");
			}
			else if (tmp < (rad*rad - border*border)) {
				printf("//");
			}
			else printf("//");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}