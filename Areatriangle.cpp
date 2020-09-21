#include <iostream>
#include <cmath>

int main()
{
    double sedi_a = 0.0;
    std::cin >> sedi_a;

    double sedi_b = 0.0;
    std::cin >> sedi_b;

    double sedi_c = 0.0;
    std::cin >> sedi_c;

    double semiperimeter;
    semiperimeter = (sedi_a + sedi_b + sedi_c) / 2;

    double perimeter;
    perimeter = semiperimeter * (semiperimeter + sedi_a) * (semiperimeter + sedi_b) * (semiperimeter + sedi_c);

    std::cout << sqrt(perimeter) << std::endl;

    return 0;
}