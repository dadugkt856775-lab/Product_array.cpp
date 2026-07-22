#include<iostream>
using namespace std;

int main(){
    int dadu[] = {5,2,4,5,2};
    int product = 1;
    int n = sizeof(dadu)/sizeof(dadu[0]);
    for(int i=0; i<n; i++){
        product *= dadu[i];
    }
    cout<<product;
}