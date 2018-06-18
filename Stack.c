#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

typedef struct strNode
{
	Type data;
	struct strNode *prior;
}Node;

typedef struct strNode Node; //sinónimo

struct strStack
{
	Node * top;
	int size;
};

Stack createStack()
{
	Stack new=(malloc *)malloc(sizeof(struct strStack));
	if(new==NULL)
		return NULL;
	new->top=NULL; //inicializar
	new->size=0;
	return new;
}

void destroyStack(Stack who)
{
	while(!isEmpety(who))
		pop(who);

	free(who);
}

void push(Stack who, Type data)
{
	Node * newNode=(Node *)malloc(sizeof(Node));
	if(newNode==NULL)
		return false;
	newNode->prior=who->top;
	newNode->data=data; //cuidado aquí

	who-size+=1;
	who->top=newNode;

	return true;
}

type pop(Stack who)
{
	if(who->top==NULL)
		return NULL;
	Type temp;
	temp=who->top->data;
	who->size--;
	tempNode=who->top;
	who->top=who->top->prior;
	free(tempNode);
	return temp;
}

Type top(Stack who)
{
	if(who->top==NULL)
		return NULL;
	return who->top->data;
}

bool isEmpty(Stack who)
{
	if(who->size==0)
		return true;
	else
		return false;
}
