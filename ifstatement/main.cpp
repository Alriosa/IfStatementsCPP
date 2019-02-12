#include <iostream>

using namespace std;

int main() {

int fixedNumber=5;
int number;

cout<<"Insert a number and try to guess if is the number between 0 and 9"<<endl;

cin>>number;

if(number==fixedNumber){
    cout<<"You guess the number";
} else {
    cout<<"Keep trying";
}

    return 0;
}