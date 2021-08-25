// sum the numbers from to 100 (use white)

#include <iostream>

int main() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << "the sum is: " << sum << std::endl;
    return 0;
}