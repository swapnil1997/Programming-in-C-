#include <iostream>
#include <stack>
using namespace std;
int main(){
    char c[100]="Hello";
    stack<char> s;
    for(int i = 0 ; c[i]!='\0' ; i++){
        s.push(c[i]);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}