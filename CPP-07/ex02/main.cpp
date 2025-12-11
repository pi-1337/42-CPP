#include <iostream>
#include <exception>
#include "Array.hpp"

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

int main() {
    int errors = 0;

    std::cout << CYAN << "===== Array Template Tester =====" << RESET << std::endl;

    std::cout << YELLOW << "Testing default constructor... " << RESET;
    try {
        Array<int> arr1;
        if (arr1.size() != 0) {
            std::cout << RED << "ERR (size not 0)" << RESET << std::endl;
            errors++;
        } else {
            std::cout << GREEN << "OK" << RESET << std::endl;
        }
    } catch (...) {
        std::cout << RED << "ERR (exception thrown)" << RESET << std::endl;
        errors++;
    }

    std::cout << YELLOW << "Testing constructor with size 5... " << RESET;
    try {
        Array<int> arr2(5);
        if (arr2.size() != 5) {
            std::cout << RED << "ERR (size mismatch)" << RESET << std::endl;
            errors++;
        } else {
            std::cout << GREEN << "OK" << RESET << std::endl;
        }
    } catch (...) {
        std::cout << RED << "ERR (exception thrown)" << RESET << std::endl;
        errors++;
    }

    std::cout << YELLOW << "Testing element access and default initialization... " << RESET;
    try {
        Array<int> arr3(3);
        bool ok = true;
        for (unsigned int i = 0; i < arr3.size(); i++) {
            if (arr3[i] != 0) ok = false; // int default should be 0
        }
        if (ok) {
            std::cout << GREEN << "OK" << RESET << std::endl;
        } else {
            std::cout << RED << "ERR (default values wrong)" << RESET << std::endl;
            errors++;
        }
    } catch (...) {
        std::cout << RED << "ERR (exception thrown)" << RESET << std::endl;
        errors++;
    }

    std::cout << YELLOW << "Testing out-of-bounds access... " << RESET;
    try {
        Array<int> arr4(2);
        int x = arr4[2]; // Should throw
        std::cout << RED << "ERR (no exception)" << RESET << std::endl;
        errors++;
        (void)x;
    } catch (std::exception& e) {
        std::cout << GREEN << "OK" << RESET << std::endl;
    } catch (...) {
        std::cout << RED << "ERR (wrong exception type)" << RESET << std::endl;
        errors++;
    }

    std::cout << YELLOW << "Testing copy constructor independence... " << RESET;
    try {
        Array<int> arr5(3);
        arr5[0] = 10;
        arr5[1] = 20;
        arr5[2] = 30;
        Array<int> arrCopy(arr5);
        arrCopy[0] = 100;

        if (arr5[0] != 10) {
            std::cout << RED << "ERR (original modified)" << RESET << std::endl;
            errors++;
        } else {
            std::cout << GREEN << "OK" << RESET << std::endl;
        }
    } catch (...) {
        std::cout << RED << "ERR (exception thrown)" << RESET << std::endl;
        errors++;
    }

    std::cout << YELLOW << "Testing assignment operator independence... " << RESET;
    try {
        Array<int> arr6(2);
        arr6[0] = 5;
        arr6[1] = 15;
        Array<int> arrAssign;
        arrAssign = arr6;
        arrAssign[1] = 50;

        if (arr6[1] != 15) {
            std::cout << RED << "ERR (original modified)" << RESET << std::endl;
            errors++;
        } else {
            std::cout << GREEN << "OK" << RESET << std::endl;
        }
    } catch (...) {
        std::cout << RED << "ERR (exception thrown)" << RESET << std::endl;
        errors++;
    }

    std::cout << CYAN << "===== Test Summary =====" << RESET << std::endl;
    if (errors == 0) {
        std::cout << GREEN << "All tests passed successfully!" << RESET << std::endl;
    } else {
        std::cout << RED << errors << " test(s) failed." << RESET << std::endl;
    }

    return 0;
}
