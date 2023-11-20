#include <iostream>

int main()
{
    // Certainly! In C++, the switch statement is used to make decisions based on the value of a variable or an expression.
    // Here's the basic syntax of a switch statement in C++:
    int choice;

    // Get user input or set the value of 'choice' in some way
    std::cout << "Enter a choice: ";
    std::cin >> choice;

    // Switch statement
    switch (choice)
    {
    case 1:
        std::cout << "You chose option 1." << std::endl;
        break;

    case 2:
        std::cout << "You chose option 2." << std::endl;
        break;

    case 3:
        std::cout << "You chose option 3." << std::endl;
        break;

    default:
        std::cout << "Invalid choice." << std::endl;
        // Let me explain the components of this example:

        // switch and case: The switch keyword is followed by a set of curly braces containing various case labels.
        // Each case represents a different possible value of the variable or expression being tested.

        // break: After each case block, the break statement is used to exit the switch statement.
        // Without break, the control would "fall through" to the next case.

        // default: This is optional and is used to provide a block of code to be executed if none of the case values match the value of the expression.
        // It's similar to the else statement in an if-else structure.

        // Expression to be tested: This is the variable or expression whose value is being tested against the various case values.

        // In the example above, the user is prompted to enter a choice, and the program responds based on the entered value.
        // If the entered value matches one of the case values, the corresponding block of code is executed.
        // If none of the case values match, the code within the default block is executed.

        // Remember, the expression within the switch statement must evaluate to an integral or enumeration type in C++.
        // Also, each case value must be a constant expression.
        return 0;
    }
}