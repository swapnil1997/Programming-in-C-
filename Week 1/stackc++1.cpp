#include <iostream>
#include <stack>
#include <ctype.h>
using namespace std;
int main(){
    char c[]={'1','2','3','*','+'};
    stack<int> s;
    int c,d;
    for(int i = 0 ; i < 5 ; i++){
        if(isdigit(c[i])){
            s.push(c[i] - '0');
        }else{
            c = s.top();s.pop();
            d = s.top();s.pop();
            switch(c[i]){
                case '+': s.push(c + d);break;
                case '-': s.push(c - d);break;
                case '*': s.push(c * d);break;
                case '/': s.push(c / d);break;
            }
        }
    }
    cout<<"Evaluation is : "<<s.top()<<endl;
    return 0;
}

Work in Progress!!!!!!!!!!!!!