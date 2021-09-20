//
//  main.cpp
//  ellenek2_4
//
//  Created by Ellen Kirsh on 9/19/21.
//

#include <iostream>
using namespace std;

int main(void) {
    int number, digit;
    int sum = 0;
    int prod = 1;
    cout << "Enter an integer: ";
    cin >> number;
    do {
        digit = number % 10;
        number = number/10;
        sum += digit;
        prod *= digit;
    }
    while (number > 0);
    cout << "Sum is " << sum << " and Product is "<< prod<< endl;
    return 0;
}
