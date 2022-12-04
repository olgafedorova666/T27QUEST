#include "T27.H"
void main(void)
{  
  QUEUE Q = {NULL, NULL};
  STACK S = {NULL};
  int quit = 0, c = 0;
  int n = 0;   
  while(!quit)  
  {
    printf("\n\n0-exit\n"
           "1-Put\n"
           "2-Get\n"
           "3-Push\n"
           "4-Pop\n\n");
    printf("QUEUE:");
    Display(Q.Head);
    printf("\nSTACK:");
    Display(S.Top);
    printf("\n");
    c =_getch();  
    switch(c)
    {
      case '0':
        quit = 1;                              
        break;
      case '1':
        printf("New key: ");                
        scanf("%i", &n);
        Put(&Q, n);
        break;
      case '2':
        Get(&Q);
       // printf("Удалено: %i", &n);
        break;
      case '3':
        printf("New key: ");                
        scanf("%i", &n);
        Push(&S, n);
        break;
      case '4':
        Pop(&S);
        break;
    } 
  }
}