#include <iostream>

int main()
{
    /*
    long long number;
    int amount {};

    std::cout << "input number: ";
    std::cin >> number;

    while (number)
    {
        amount += number % 10;
        number /= 10;
    }

    std::cout << "amount digits of number = " << amount << "\n";
    */

    /*
    int x;
    int n;
    int power{ 1 };
    int i{};

    std::cout << "input x and n: ";
    std::cin >> x >> n;

    while (i < n)
    {
        power = power * x;
        i++;
    }

    std::cout << "x power n = " << power << "\n";
    */

    /*
    int n;
    size_t fact{ 1 };
    int i{ 1 };

    std::cout << "input n: ";
    std::cin >> n;

    if (i <= n)
    {
        fact *= i;
        i++;
    }
    */
    /*
    int n{ 1000 };
    int amount{};
    int i{ 2 };

    while (i <= n)
    {
        amount += i;
        i += 2;
    }
    */

    int number;
    int amount{};

    do
    {
        std::cout << "input number (zero -> exit): ";
        std::cin >> number;
        amount += number;
    } while (number);

    std::cout << "total amount = " << amount << "\n";
}
