#include <iostream>

int main() {
    double celsius;
    double fahrenheit;

    std::cout << "Masukkan suhu Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    std::cout << "Suhu Fahrenheit: " << fahrenheit << '\n';
    return 0;
}