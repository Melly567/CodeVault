#include <iostream>

int main() {
    int n;
    int sum = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    std::cout <<"The sum of the series is: " << sum << std::endl;

    return 0;
}
