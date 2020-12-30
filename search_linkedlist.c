#include <stdio.h>

struct node 
{
	int value;
	struct node *next;
};

struct node *searchValue (struct node *lstPtr, int found)
{
	while (lstPtr != NULL)
	{
		if (lstPtr->value == found)
		{
			return (lstPtr);
		}
		else
		{
			lstPtr = lstPtr->next;
		}
	}
	return (struct node *) 0;
}

int main (void)
{
	struct node *searchValue (struct node *lstPtr, int found);
	struct node node1, node2, node3;
	struct node *lstPtr, *lstStart = &node1;
	int search;

	node1.value = 100;
	node1.next = &node2; 

	node2.value = 200;
	node2.next = &node3;

	node3.value = 300;
	node3.next = 0;

	printf("Enter a value to search for: ");
	scanf("%d", &search);

	lstPtr = searchValue(lstStart, search);

	if (lstPtr != (struct node *) 0)
	{
		printf("Found the value %d\n", lstPtr->value);
	}
	else 
	{
		printf("The value %d was not found\n", search);
	}
	return 0;
}