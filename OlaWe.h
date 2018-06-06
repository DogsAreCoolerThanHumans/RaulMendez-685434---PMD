#ifndef OLAWE_H_
#define OLAWE_H_

typedef struct sequence * Sequence;
typedef unsigned int ui32;

Sequence seq_create(int init);
void seq_destroy(Sequence s);
Sequence seq_create_step(int init, step);
int seq_next(Sequence);

#endif /* OLAWE_H_ */
