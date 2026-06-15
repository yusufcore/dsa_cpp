// increasing, decreasing, or neither program
#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a<b && b <c){
        cout << "Increasing " <<endl;
    }else if(a>b && b<c){
        cout << "Decreasing " <<endl;
    }else{
        cout << "Neither" <<endl;
    }
} 