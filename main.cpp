#include <iostream>

using namespace std;

void power(int base, int exponent);

int main(){
    cout << "GitHub Test" << endl;
    power(1, 2);
    power(5, 2);
    power(10, 2);
    power(-1, 2);
    power(0, 2);

    return 0;
}

void power(int base, int exponent){
    int result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    cout << result << endl;
}