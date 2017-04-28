                                                  //Binary Search....
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[] = {56,25,36,75,23,2,0,96};
    int key = 2;
    if(binary_search(a,a+8,key)){
        cout<<"found..!!"<<endl;
    }else{
        cout<<"not found..!!"<<endl;
    }
    return 0;
}

Some sort of problem in the compiler.....!!!!
That's why not working!!!!!