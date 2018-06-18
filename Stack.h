#ifndef STACK_H_
#define STACK_H_

typedef enum {false, true} bool;

typedef void * Type;
typedef struct strStack * Stack;

Stack createStack();
void destroyStack(Stack s);
bool push(Stack s, Type t);
void pop(Stack s);
void pop(Stack s);
bool isEmpty(Stack);

#endif /* STACK_H_ */
