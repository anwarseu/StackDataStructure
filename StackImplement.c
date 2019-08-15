#include <stdio.h>
#define STACK_MAX 100

typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item){
    if (s->top < STACK_MAX) {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }else{
        printf("Stack is full! \n");
    }
}

int pop(Stack *s){
    int item;
    if (s->top == 0) {
        printf("Stack is empty! \n");
        item = -1;
    }else{
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}

int main(int argc, const char * argv[]) {
    int item;
    Stack stack;
    stack.top = 0;
    //data push in stack
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    
    item = pop(&stack);
    printf("%d \n", item);
    
    item = pop(&stack);
    printf("%d \n", item);
    
    item = pop(&stack);
    printf("%d \n", item);
    
    return 0;
}
