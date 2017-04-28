#include <stdio.h>

typedef struct stack{
    char a[100];
    int top;
}stack;
void push(stack *p,char c){
    p->a[++(p->top)]=c;
}
void pop(stack *p){
    printf("%c",p->a[(p->top)--]);
}
int empty(stack *p){
    return (p->top==-1);
}
int top(stack *p){
    return p->a[p->top];
}
int main(){
    stack s;
    s.top=-1;
    char b[10] = "Hello";
    for(int i = 0 ; b[i]!='\0' ; i++){
        push(&s,b[i]);
    }
    while(!(empty(&s))){
        pop(&s);
    }
    return 0;
}