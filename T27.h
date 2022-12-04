#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tagLIST LIST;
struct tagLIST
{
   int Data;
   LIST *Next;
};

typedef struct
{
  LIST *Head;
  LIST *Tail;
}QUEUE;

typedef struct
{
  LIST *Top;
}STACK;

int Put(QUEUE *Q, int newdata);
void Display(LIST *L);
int Get(QUEUE *Q);
int Pop(STACK *S);
int Push(STACK *S, int newData);







