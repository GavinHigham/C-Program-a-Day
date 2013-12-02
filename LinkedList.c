#include <stdio.h>
#include <stdlib.h>

//Define a node object.
typedef struct node
{
	void *next;
	char *data;
} NODE, *NODEP; //<-See this?
// This is where you can define additional names for your object.
// Here I made one for referring to the node itself,
// and one for referring to a node pointer.

//Quick function for making a new node.
NODEP newnode()
{
	NODEP tempnode = malloc(sizeof(NODE));
	tempnode->next = NULL;
	tempnode->data = 0;
	return tempnode;
}

int main()
{
	//Initialize nodes.
	NODEP node1 = newnode();
	NODEP node2 = newnode();
	NODEP node3 = newnode();

	//Set up links.
	node1->next = node2;
	node2->next = node3;

	//Set up data
	node1->data = "These ";
	node2->data = "are ";
	node3->data = "words.";

	//Node pointer to the head of my new linked list.
	NODEP tempnode = node1;
	
	//Iterate over the list.
	while(tempnode != NULL) {
		printf("%s", tempnode->data);
		tempnode = tempnode->next;
	}
	printf("\n");

	return 0;
}