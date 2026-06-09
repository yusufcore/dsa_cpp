#include <iostream>
#include <cstdio>
using namespace std;

void sumfour(int x, int y, int z, int v){
    if(x>=y && x>=z && x>=v){
        cout << x <<endl;
    }else if(y>=x && y>=z && y>=v){
        cout << y <<endl;
    }else if(z>=x && z>=y && z>=    v){
        cout << z <<endl;
    }else{
        cout << v << endl;
    }
}
int main(){
    int a;
    int b;
    int c;
    int d;
    
    cin >> a >> b >> c >> d;
    
     sumfour(a,b,c,d);
        return 0;   
}
