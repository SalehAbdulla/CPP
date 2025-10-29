#include <iostream>

int main() {
    int x = 5; // declaration
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    // -------------------
    int age = 21;
    int year = 2023;

    double price = 7.5; // double
    double GPA = 4.0;
    double temperature = 25.1;

    std::cout << price << '\n';
    std::cout << GPA << '\n';

    // ---------- Char dataType
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << initial;
    // ---- Boolean
    bool student = true;
    bool  power = true;
    [[maybe_unused]] bool forSale = true;

    // string - (Object represents a sequence of text)
    std::string name = "Bro";
    std::cout << name << '\n';
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << "years old";

    return 0;
}
