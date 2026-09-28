#include <iostream>

int main() {
    int fromUnit;
    int toUnit;
    double temperature;
    double celsius;
    double result;
    const char* unitNames[] = {"Celsius", "Kelvin", "Fahrenheit"};

    std::cout << "       KONVERSI SUHU             \n";
    std::cout << "1. Celsius\n2. Kelvin\n3. Fahrenheit\n";
    std::cout << "Pilih satuan asal (1-3): ";
    if (!(std::cin >> fromUnit) || fromUnit < 1 || fromUnit > 3) {
        std::cout << "Pilihan satuan asal tidak valid.\n";
        return 1;
    }

    std::cout << "Pilih satuan tujuan (1-3): ";
    if (!(std::cin >> toUnit) || toUnit < 1 || toUnit > 3) {
        std::cout << "Pilihan satuan tujuan tidak valid.\n";
        return 1;
    }

    std::cout << "Masukkan suhu dalam " << unitNames[fromUnit - 1] << ": ";
    if (!(std::cin >> temperature)) {
        std::cout << "Input suhu tidak valid.\n";
        return 1;
    }

    if (fromUnit == 1) {
        celsius = temperature;
    } else if (fromUnit == 2) {
        celsius = temperature - 273.15;
    } else {
        celsius = (temperature - 32) * 5 / 9;
    }

    if (celsius < -273.15) {
        std::cout << "Suhu tidak boleh lebih rendah dari nol mutlak.\n";
        return 1;
    }

    if (toUnit == 1) {
        result = celsius;
    } else if (toUnit == 2) {
        result = celsius + 273.15;
    } else {
        result = (celsius * 9 / 5) + 32;
    }

    std::cout << "\nHasil: " << temperature << " " << unitNames[fromUnit - 1]
              << " = " << result << " " << unitNames[toUnit - 1] << '\n';
    return 0;
}