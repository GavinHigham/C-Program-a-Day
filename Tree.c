#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int numkeys;
	void *keys[4];
	void *children[4];
} NODE, *NODEP;

NODEP makeNode(char val)
{
	NODEP tp;
	tp = (NODEP)malloc(sizeof(NODE));
	tp->keys[0] = &val;
	tp->numkeys = 1;
	for (i = 0; i < 6; i++) tp->children[i] = NULL;
	return tp;
}

//Finds the node which contains or would contain the given value.
NODEP find(NODEP np, char val)
{
	int i;
	for (i = np->numkeys; i >= 0; i++) {
		if (*((char *)np->keys[i]) == val) return np;
		if (*((char *)np->keys[i]) > val) {
			return find(np->children[i], val);
		}
	}
	return NULL;
}

//Splits if necessary.
NODEP split(NODEP np)
{
	if (np->numkeys == 3) {
		NODEP left = makeNode(*((char *)np->keys[0]);
		NODEP right = makeNode(*((char *)np->keys[2]);
		left->children[0] = np->children[0];
		left->children[1] = np->children[1];
		right->children[0] = np->children[2];
		right->children[1] = np->children[3];
		np->keys[0] = np->keys[1];
		np->numkeys = 1;
	}
}

void aShift(void *arr[], int size, int index)
{
	int i;
	for (i = size; i >= index; i--) arr[i] = arr[i-1];
}

NODEP insert(NODEP np, char val)
{
	int i;
	if (np == NULL) {
		return makeNode(val);
	}
	NODEP temp = find(np, val);
	arrayshifttemp
}

NODEP rem(NODEP np, char val)
{
	return NULL;
}

int main()
{
	return 0;
}