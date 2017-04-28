#include <stdio.h>
#include <ctype.h>
typedef struct fix{
    char a[100];
    int top;
}fix;
void push(fix *e , char ch){
    e->a[++(e->top)]=ch;
}
int pop(fix *e){
    if(e->top!=-1){
        e->top-=1;
    }
}
int top(fix *e){
    return e->a[e->top];
}
int main(){
    fix f;
    f.top=-1;
    int c , d;
    char b[] = {'1','2','3','*','+','4','-'};
    for(int i = 0 ; i < 7 ; i++){
        if(isdigit(b[i])){
            push(&f,b[i] - '0');
        }else{
            c = top(&f);pop(&f);
            d = top(&f);pop(&f);
            switch(b[i]){
                case '+':push(&f,c + d);
                break;
                case '-':push(&f,c - d);
                break;
                case '*':push(&f,c * d);
                break;
                case '/':push(&f,c / d);
                break;
            }
        }
    }
    printf("Evaluation is : %d",top(&f));
}