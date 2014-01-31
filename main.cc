#include "genlib.h"
#include <iostream>


struct node
{
	int data;
	struct node* next;
};


struct node* createNode(int value)
{
	struct node* returnNode = (node *)malloc(sizeof(struct node));
	returnNode->data = value;
	returnNode->next = NULL;
	return returnNode;
}


struct node* Push(struct node* node, int value)
{
	if(node == NULL)
		return createNode(value);
	else
	{
		struct node* newNode = createNode(value);
		newNode->next = node->next;
		node->next = newNode;
	}
	return node;
}

struct node* BuildOneTwoThree()
{
	struct node* head = NULL;
	
	for(int i = 0; i < 3; i++)
	{
		head =	Push(head, i);
	}
	return head;	
}


int main() {
	BuildOneTwoThree();
	return 0;
}