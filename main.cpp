#include <iostream>

using namespace std;

void square(int num);

int main(){
    cout << "GitHub Test" << endl;
    square(1);
    square(5);
    square(10);
    square(-1);
    square(0);

    return 0;
}

void square(int num){
    cout << (num * num) << endl;
}