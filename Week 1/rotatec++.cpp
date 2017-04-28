#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[] = {6,3,2,5,7,4};
    rotate(a,a+4,a+6);
    for(int i = 0 ; i < 6 ; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}