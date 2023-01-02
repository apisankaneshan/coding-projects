#include <stdio.h>
#define STACK_EMPTY '0'
#define STACK_SIZE 20

void
push(char stack[],    /* input/output - the stack */
     char item,       /* input - data being pushed onto the stack */
     int  *top,       /* input/output - pointer to top of stack */
     int  max_size)   /* input - maximum size of stack */
{
     if (*top < max_size-1) {
         ++(*top);
         stack[*top] = item;
     }
}

char
pop (char stack[],    /* input/output - the stack */
    int *top)        /* input/output - pointer to top of stack */
{
    char item;       /* value popped off the stack */

    if (*top >= 0) {
        item = stack[*top];
        --(*top);
    } else {
         item = STACK_EMPTY;
    }

    return (item);
}

int
main (void)
{
   char s [STACK_SIZE];
   int s_top = -1; // stack is empty
   int a, b, c, d, e, f, g, i;
   char p;
   
   
   printf("Please enter 6 integers to push onto the stack seperating each with a space (a b c d e f): "); /*initialize the stack*/
   scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
   push(s, a, &s_top, STACK_SIZE); /*Push all inputs onto stack*/
   push(s, b, &s_top, STACK_SIZE);
   push(s, c, &s_top, STACK_SIZE);
   push(s, d, &s_top, STACK_SIZE);
   push(s, e, &s_top, STACK_SIZE);
   push(s, f, &s_top, STACK_SIZE);
   
   printf("The stack is now:\n"); /*show inital stack*/
   
   for(i=s_top;i>-1;--i)
   {
       
       printf("| %d |\n", s[i]);
   }
   
   printf("\nEnter 'p' if you would like to pop the stack, 'P' to push the stack, 'e' to end: "); /*ask user if they would like to pop or push*/
   scanf(" %c", &p);
   
   while(p != 'e')
   {
       if(p == 'p')
       {
           pop(s, &s_top);/*pop if user selects pop*/
           printf("The stack is now:\n");
           for(i=s_top;i>-1;--i)
           {
               printf("| %d |\n", s[i]);
           }
           printf("\nEnter 'p' if you would like to pop the stack, 'P' to push the stack, 'e' to end: ");
           scanf(" %c", &p);
       }
       if(p == 'P')
       {
           printf("Please enter an integers to push onto the stack: ");
           scanf("%d", &g);
           push(s, g, &s_top, STACK_SIZE); /*push if user selects push*/
           printf("The stack is now:\n");
           for(i=s_top;i>-1;--i)
           {
               printf("| %d |\n", s[i]);
           }
           printf("\nEnter 'p' if you would like to pop the stack, 'P' to push the stack, 'e' to end: ");
           scanf(" %c", &p);
       }
   }

   return (0);
}
