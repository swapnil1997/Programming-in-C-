#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[] = {56,25,14,75,36,29};
    replace(a,a+6,14,13);
    for(int i = 0 ; i < 6 ; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}