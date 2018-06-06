#include <stdio.h>
#include <stdlib.h>
#include "OlaWe.h"//OlaWe.h

struct sequence
{
	int next;
	int step;
};

Sequence seq_create(int init)
{
	Sequence new;
	new=seq_create_step(init, 1);
	return new;
}

Sequence seq_create_step(int init, int step)
{
	 Sequence new=(Sequence )malloc(sizeof(struct sequence));
	 new->next=init;
	 new->step=step;
	return new;
}

void seq_destroy(Sequence who)
{
	free(who);
}

int seq_next(Sequence who)
{
	who->next+=who->step;
	return who->next;
}
