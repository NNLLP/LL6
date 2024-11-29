#include<iostream>
using namespace std;

int main(){
    int i=1;
    int evenn=0;
    int oddn=0;
    while(i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        if(i % 2 == 0 && i != 0){
            evenn += 1;
        }
        else if(i != 0){
            oddn += 1;
        }
    }
    cout << "#Even numbers = " << evenn << "\n";
    cout << "#Odd numbers = " << oddn;
    return 0;
}
