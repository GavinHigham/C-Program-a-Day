#include <stdio.h>

//Does the fizzbuzz interview question with only two semicolons.
//The idea for putting the printf statement in a while loop to eliminate a semicolon came from ssylvan on Reddit.

int main()
{
	char everything[] = {'f', 'i', 'z', 'z', '\0', 'b', 'u', 'z', 'z', '\0', 0, 0};
	while (everything[10]++ < 100 && printf("%s%s%0.0i\n", everything + 4*(everything[10]%3 != 0), &everything[5] + 4*(everything[10]%5 != 0), *(&everything[10] + !((everything[10]%3)&&(everything[10]%5))))) {}
}