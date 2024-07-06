/**
 * C++ 
 * ====
 * what is C++?
 * C++ is a cross-platform language that can be used to create high-performance applications.
 * C++ was developed by Bjarne Stroustrup, as an extension to the C language.
 * C++ gives programmers a high level of control over system resources and memory.
 * The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.
 *****************************************************************************************************
 *  why C++?
 * C++ is a popular programming language.
 * C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.
 * C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.
 * C++ is used to create computer programs, and is one of the most used language in game development.
 * C++ was developed as an extension of C, and both languages have almost the same syntax. it also close to C# and Java, it makes it easy for programmers to switch to C++ or vice versa.
 * The main difference between C and C++ is that C++ support classes and objects, while C does not.
 ******************************************************************************************************
 * C++ Get Started =>To start using C++, you need two things:
 * A text editor, like Notepad, to write C++ code
 * A compiler, like GCC, to translate the C++ code into a language that the computer will understand
 */

// Header file library => that lets us work with input and output objects
#include <iostream>
// To Access Math operations 
#include <cmath>
// means that we can use names for objects and variables from the standard library.
using namespace std;

// main function is the base of C++ app all the statements inside curly brackets executed and finish when it return 0
// The statements are executed, one by one, in the same order as they are written
int main() {

    /**
     * Break lines
     * '\n' for new line
     * endl for endline
     */

    /**
     * C++ variables
     * Variables are containers for storing data values
     * int - stores integers (whole numbers), without decimals, such as 123 or -123
     * double - stores floating point numbers, with decimals, such as 19.99 or -19.99
     * char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
     * string - stores text, such as "Hello World". String values are surrounded by double quotes
     * bool - stores values with two states: true or false
     */
    // datatype variable_name assignment-operator value
    
    // int num = 15;
    // cout << num << endl;
    
    // float num = 15.5f;
    // cout << num << endl;
    
    // double num = 15.99;
    // cout << num << endl;
    
    // char myChar = 'D';
    // cout << myChar << endl;
    
    // string name = "alaa";
    // cout << name << endl;
    
    // bool mySwitch = false;
    // cout << mySwitch << endl;

    // // To declare more than one variable of the same type, use a comma-separated list:
    // int x = 5, y = 6, z = 50;
    // cout << x + y + z << endl;

    /**
     * Identifiers is the variable names
     * Names can contain letters, digits and underscores
     * Names must begin with a letter or an underscore (_)
     * Names are case-sensitive (myVar and myvar are different variables)
     * Names cannot contain whitespaces or special characters like !, #, %, etc.
     * Reserved words (like C++ keywords, such as int) cannot be used as names
     */

    /**
     * Constants
     * const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
     * const int myNum = 15;  // myNum will always be 15
     * myNum = 10;  // error: assignment of read-only variable 'myNum'
     */
    // const float PI = 3.14;
    // cout << "Math PI Value: "<< PI << endl;

    /**
     * User input
     * You have already learned that cout is used to output (print) values. Now we will use cin to get user input.
     * cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
     */
    // int x; 
    // cout << "Type a number: " ; // Type a number and press enter
    // cin >> x; // Get user input from the keyboard
    // cout << "Your number is: " << x ; // Display the input value
    
    /**
     * Arithmetic operators
     * + Addition
     * - Subtraction
     * * Multiplication
     * / Division
     * % Modulus => Returns the division remainder	
     * ++ Increment => Increases value of a variable by 1	
     * -- Decrement => Decreases the value of a variable by 1	
     */
    // cout << 20+20 << '\n';
    // cout << 20-20 << '\n';
    // cout << 20*20 << '\n';
    // cout << 20/20 << '\n';
    // cout << 20%20 << '\n';
    
    // // pre/post increment
    
    // int likes = 0;
    // cout << likes++ << '\n';
    // cout << likes << '\n';
    
    // int views = 0;
    // cout << ++views << '\n';
    // cout << views << '\n';
    
    /**
     * comparison operators
     * == equal to
     * != not equal
     * > greater than
     * < less than
     * >= greater than or equal
     * <= less than or equal
     */
    // cout << (10 == 10) << "\n"; // 1 => true
    // cout << (100 == 1000) << "\n"; // 0 => false

    // cout << (100 != 1000) << "\n"; // 1 => true

    // cout << (100 > 1000) << "\n"; // 0 => false
    // cout << (100 < 1000) << "\n"; // 1 => true
    // cout << (100 >= 1000) << "\n"; // 0 => false
    // cout << (100 <= 1000) << "\n"; // 1 => true

    /**
     * Logical Operators
     * && Logical and => Returns true if both statements are true
     * || Logical or  => Returns true if one of the statements is true	
     * !  Logical not => Reverse the result, returns false if the result is true
     */
    // int x = 15;
    // cout << (x > 10 && x <= 15) << "\n"; // 1 => true
    // cout << (x > 10 && x <  15) << "\n"; // 0 => false
    // cout << (x > 10 || x <  15) << "\n"; // 1 => true
    // cout << !( x <  15) << "\n"; // 1 => true

    /**
     * String 
     * String Concatenation => The + operator can be used between strings to add them together to make a new stringhe + operator can be used between strings to add them together to make a new string
     * Numbers with String  => you can add number to number with integer and concat number with number in string but cant add number to string an error will occurs
     * String Length        => To get the length of a string, use the length() function:
     * Access Strings       => You can access the characters in a string by referring to its index number inside square brackets [].
     * Special Characters   => The backslash (\) escape character turns special characters into string characters:
     * 
     */
    // string firstName = "Alaa eldin";
    // string lastName = "Abousamra";
    // string fullName = firstName + " " + lastName;
    // cout << fullName;
    
    // string x = "10";
    // string y = "20";
    // string z = x + y;  // z will be 1020
    // cout << z;
    
    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.length() << endl ;
    // cout << "The length of the txt string is: " << txt.size() << endl ;
    
    // string myString = "Hello";
    // cout << myString[0] << endl;
    // cout << myString.at(0) << endl;

    // string txt = "We are the \"Vikings\" ";
    // cout << txt << endl ;

    /**
     * Math core functions
     * max()
     * min()
     * round()
     * sqrt()
     * log()
     */
    // cout << max(5,2) << endl;
    // cout << min(5,2) << endl;
    // cout << round(5.5) << endl; // if decimal number is equal to or bigger than 5 it return the next value
    // cout << sqrt(25) << endl;
    // cout << log(5) << endl;

    /**
     * Conditions
     * if else => if (condition) {// block of code to be executed if condition is true} else {... if condition is false}
     * else if => if (condition1) {true} else if (condition2){if condition1 false and condition 2 is true} else{if con1 & con2 is false}
     * short-hand if else => variable = (condition) ? expressionTrue : expressionFalse; => also known as ternary operator because it consists of three operands
     * nested if and nested ternary operator
     */

    // string msg1 = "Good Morning";
    // string msg2 = "Good Evening";
    // int time = 11;
    // if(time < 12){
    //     cout << msg1 << endl;
    // } else {
    //     cout << msg2 << endl;
    // }

    // string msg1 = "Good Morning";
    // string msg2 = "Good Evening";
    // int time = 13;
    // string result = (time < 12) ? msg1 : msg2 ;
    // cout << result << "\n";

    // string msg1 = "Good Morning";
    // string msg2 = "Good Evening";
    // string msg3 = "Good Night";
    // int time = 21;
    // if(time < 12){
    //     cout << msg1 << endl;
    // } else if (time > 12 && time < 20) {
    //     cout << msg2 << endl;
    // } else {
    //     cout << msg3 << endl;
    // }

    // string msg1 = "Good Morning";
    // string msg2 = "Good Evening";
    // string msg3 = "Good Night";
    // int time ;
    // cout << "Enter The Time right now!" << "\n";
    // cin >> time;

    // string result = (time < 12 ? msg1: (time > 12 && time < 20 ? msg2 : msg3));
    // cout << result << "\n";

    /**
     * Implementations
     * 1. Even / Odd Checker
     * 2. Find Greatest Number
     * 3. User Rank Checker
     * 4. Simple Calculator
     */

    // // Even / Odd Checker
    // int num;
    // cout << "\nEnter Your Number: " << "\n";
    // cin >> num;
    // if(num % 2 == 0){
    //     cout << "Your Number is Even";
    // } else {
    //     cout << "Your Number is Odd";
    // }

    // //  Find Greatest Number
    // int a,b,c;
    // cout << "Enter Your THREE Numbers: " << "\n";
    // cin >> a >> b >> c;
    // // cout << a << b << c;
    // int result = max(max(a,b),c);
    // cout << "The Greatest result you have enter is : " << result << "\n";
    // // if(a > b && b > c){
    // //     cout << "The Greatest number you have enter is : " << a;
    // // } else if (b > a && b > c){
    // //     cout << "The Greatest number you have enter is : " << b;
    // // } else {
    // //     cout << "The Greatest number you have enter is : " << c;
    // // }


    // // User Rank
    // int points;
    // cin >> points;

    // if(points > 0 && points <= 500){
    //     cout << "Not bad" << "\n";
    // } else if (points > 500 && points <= 1000) {
    //     cout << "Good" << "\n";
    // } else {
    //     cout << "VIP" << "\n";
    // }

    // Simple calculator
    int num1, num2, op;
    cout << "Enter The Number 1: " << "\n";
    cin >> num1;
    cout << "Enter The Number 2: " << "\n";
    cin >> num2;
    cout << "Choose The Operation number " << "\n";
    cout << "[1] +" << "\n";
    cout << "[2] -" << "\n";
    cout << "[3] *" << "\n";
    cout << "[4] /" << "\n";
    cin >> op;
    if(op == 1){
        cout << "The result of sum Number 1 + Number 2 is : " << num1+num2 << "\n";
    } else if (op == 2){
        cout << "The result of subtract Number 1 - Number 2 is : " << num1-num2 << "\n";
    } else if (op == 3){
        cout << "The result of Multiplicate Number 1 * Number 2 is : " << num1*num2 << "\n";
    } else if (op == 4){
        cout << "The result of sum Number 1 / Number 2 is : " << num1/num2 << "\n";
    } else {
        cout << "The operation not found you must insert a integer number from 1 ~ 4";
    }



    return 0;
};