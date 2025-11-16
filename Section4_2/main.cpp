#include <iostream> // # Preprocessor directive
// Preprocessor does not know C++ code
// It just gets the source code ready for the compiler


// int main(int argc, char *argv[]) // another way of a main function
int main(){
    int myFavorNum;
    // << called an output stream TO CONSOLE
    std::cout << "Enter your favoirate number:  " << std::endl;
    // >> extraction operator, takes from the console and store it into a variable
    std::cin >> myFavorNum;
    // :: scope resolution operator
    std::cout << "Ooh Really!! "<< myFavorNum << " This is my operator too!" << std::endl;

    return 0;
}
