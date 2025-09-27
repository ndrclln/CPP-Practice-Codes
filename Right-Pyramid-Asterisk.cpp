#include <iostream>
using namespace std;

int main(){
    int val;
    
    cout<< "Enter value for n: ";
    cin>> val;
    
    int rows = val;
    
    for(int i = 1; i <= rows; ++i){
        for(int j = 1; j<=i; ++j){
        cout<<"*";
        }
        cout<< "\n";
    } 
    
    
    return 0;
}