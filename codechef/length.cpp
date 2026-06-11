#include <iostream>
using namespace std;

int main(){
    string one = "coding";
    string two = "on";
    string three = "codechef";

    cout << one << " - " << one.length() <<endl;
    cout << two << " - " << two.length() <<endl;
    cout << three << " - " << three.length() <<endl;

    string sentence = one + " " + two + " " + three + " ";
    cout << sentence << " - " << sentence.length() << endl;

    return 0;

}