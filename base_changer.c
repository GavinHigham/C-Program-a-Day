//Takes a list of numbers of some specified base.
//Prints them in another specified base.

#include <stdio.h>

//Returns the hex value of a character.
int ctoint(char c)
{
	int tmp = 0;
	if ((97 <= c) && (c <= 122)) tmp = c - 'a' + 10;		//handling lowercase letters
	else if ((65 <= c) && (c <= 90)) tmp = c - 'A' + 10;	//handling uppercase letters
	else if ((48 <= c) && (c <= 57)) tmp = c - '0'; 		//handling decimal digits
	return tmp;
}

//Takes a string representing a number of some base and converts it to an int.
long long int str2int(char* str, int base)
{
	char c;
	long long int sum = 0;
	int i = 0;
	int neg = 0;
	if (str[0] == '-') {
		neg = 1;
		i++;
	} //Check for sign and apply it afterwards.
	if ((str[i] == '0') && (str[i+1] == 'x')) i += 2; //Make sure to drop the "0x".
	while ((c = str[i]) != '\0') {
		if (ctoint(c) >= base) break;
		sum *= base;
		sum += ctoint(c);
		i++;
	}
	if (neg) sum = ~sum + 1; //Makes it negative without a multiply.
	return sum;
}

//Prints out the results.
void baseprint(long long int val, int newbase) {
	char* receipt;
	char result[65] = {0}; //long long ints shouldn't take more than 64 places to express, even in base 2.
	result[64] = '\0'; //Terminate the array at the end so it's read as a string properly. 
	int pos = 63;
	int tmp;
	while (val != 0) {
		tmp = val % newbase;
		if (tmp <= 9) result[pos] = tmp + '0';
		else result[pos] = tmp + 'a' - 10;
		val = val / newbase;
		pos--;
	}
	receipt = &result[pos + 1]; //Set the start of the string.
	if (newbase == 16) printf("0x"); //Print the hexadecimal prefix if applicable.
	printf("%s\n", receipt);
}

int main(int argc, char *argv[])
{
   int i = 1;
   int base1 = str2int(argv[1], 10);
   int base2 = str2int(argv[2], 10);
   if(argc < 2) printf("Usage: base_changer [base of entry] [desired base of printed result] [list of decimal values...]\n");
   for (i = 3; i < argc; i++) {
        baseprint(str2int(argv[i], base1), base2);
   }
   return 0;
}