#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[] = {12,58,36,41,2};
    sort(a,a+5);
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<endl;
    }
}