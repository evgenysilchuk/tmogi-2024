#include <iostream>
#include <cmath>

int main() {
    // Данные
    double P2 = 780.1; // в мм рт. ст.
    double P1 = 771.2; // в мм рт. ст.
    double dP = 0.5;   // погрешность в мм рт. ст.
    
    double deltaH = 11.0; // в мм рт. ст.
    double dDeltaH = 0.1; // погрешность в мм рт. ст.

    // Расчет разности давления
    double deltaP = P2 - P1;

    // Расчет значения h
    double h = deltaH * deltaP;

    // Расчет погрешности h
    double dH = h * sqrt(pow(dDeltaH / deltaH, 2) + pow(2 * dP / deltaP, 2));

    // Вывод результатов
    std::cout << "Ширина h = " << h << " ± " << dH << " мм рт. ст." << std::endl;

    return 0;
}
