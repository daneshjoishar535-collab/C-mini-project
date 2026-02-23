Email Validation Program (C++)

Description
This is a simple Email Validation Program written in C++. The program checks whether an email address follows standard formatting rules. It validates the structure of the email and displays whether it is valid or invalid. If valid, it also extracts and displays the username and domain.

This project demonstrates the use of strings, loops, conditional statements, functions, and character validation using the cctype library.


Features

* Validates email format
* Ensures only one @ symbol
* Checks proper placement of dot (.)
* Verifies domain extension length
* Extracts username and domain
* Allows multiple email validations in one run
* Displays clean and formatted console output


Validation Rules

The program checks the following conditions:

1. Email must not be empty
2. The first character must be alphanumeric
3. There must be exactly one @ symbol
4. The @ symbol cannot be at the start or end
5. There must be at least one dot (.) after the @ symbol
6. The domain extension must contain at least two characters
7. The username part can contain letters, numbers, dot (.), underscore (_), and hyphen (-)
8. The domain part can contain letters, numbers, dot (.), and hyphen (-)


Technologies Used

Language: C++
Libraries Used:

* iostream
* string
* cctype


How to Run

1. Open the program in any C++ IDE such as CodeBlocks, Dev C++, or VS Code
2. Compile the program
3. Run the program
4. Enter an email address when prompted

You can also compile using g++ from the terminal and run the executable.


Program Structure

1. isValidEmail()
   This function checks all validation rules and returns true if the email is valid, otherwise false.

2. displayEmailDetails()
   This function prints the email validation result. If the email is valid, it extracts and displays the username and domain.

3. main()
   This function handles user input and allows multiple email validations using a loop.


Sample Output

If the user enters a valid email such as [john_doe@gmail.com](mailto:john_doe@gmail.com), the program displays that the email is valid and shows the username and domain.

If the user enters an invalid email such as [john@.com](mailto:john@.com), the program displays that the email format is incorrect.


Learning Outcomes

* Understanding string manipulation in C++
* Applying conditional statements and loops
* Implementing modular programming using functions
* Performing input validation
* Building real-world logical programs


Limitations

* Does not verify if the domain actually exists
* Does not support complex email formats such as plus (+) symbols
* Only basic format validation is implemented


Future Improvements

* Implement regular expression (regex) validation
* Store validated emails in a file
* Create a graphical user interface version
* Add domain existence checking
* Improve validation rules for advanced formats

