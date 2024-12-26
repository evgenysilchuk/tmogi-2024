#include <iostream>
#include <cmath>

int main() {
    
    double error_reper = 2.0; 
    double error_reika = 3.0;  
    double error_otlozhenie = 2.0; 

    
    double total_error_mm = std::sqrt(std::pow(error_reper, 2) + 
                                       std::pow(error_reika, 2) + 
                                       std::pow(error_otlozhenie, 2));

    
    double total_error_m = total_error_mm / 1000.0;

   
    std::cout << "Общая погрешность выноса в натуру проектной отметки: "
              << total_error_m << " метров" << std::endl;

    return 0;
}
