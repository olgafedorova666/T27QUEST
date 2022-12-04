#include "T27.H"
int Put(QUEUE *Q, int newdata)
{ 
  LIST *newEl;
  newEl = malloc(sizeof(LIST));
  if(newEl == NULL)
  {
    printf("Error");
    return 0;
  }
  else
  {
    newEl->Data = newdata;
    newEl->Next = NULL;
    if(Q->Head == NULL)
      Q->Head = Q->Tail = newEl;
    else
    {
      Q->Tail->Next = newEl;
      Q->Tail = newEl;
    }
  }
  return 1;
}

int Push(STACK *S, int newData)
{
  LIST *newEl;
  newEl = malloc(sizeof(LIST));
  if(newEl == NULL)
  {
    printf("Error");
    return 0;
  }
    newEl->Data = newData;
    newEl->Next = S->Top;
    S->Top = newEl;
    return 1;

}
int Pop(STACK *S)
{
  LIST *tmp;
  if(S->Top == NULL)
  {
    printf("Error");
    return 0;
  }
  tmp = S->Top;
  S->Top = S->Top->Next;
  return 1;
}
void Display(LIST *L)
{
  while(L != NULL)
  {
    printf("%i ", L->Data);
    L = L->Next;
  }
}

int Get(QUEUE *Q/*, int *olddata*/)
{
  //LIST *tmp;
  if(Q->Head == NULL)
  {
    Q->Tail = NULL;
    return 0;
  }
 // tmp = Q->Head;
  Q->Head = Q->Head->Next;
 // if(tmp != NULL)
  //  *olddata = tmp->Data; 
 // free(tmp);
  return 1;
}