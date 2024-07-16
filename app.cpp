#include <iostream>
#include "Car.cpp"


using namespace std;

/**
 * Introduction to OOP using C++
 * OOP stands for Object-Oriented Programming.
 * Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.
 * OOP is faster and easier to execute
 * OOP provides a clear structure for the programs
 * OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
 * OOP makes it possible to create full reusable applications with less code and shorter development time.  You should extract out the codes that are common for the application, and place them at a single place and reuse them instead of repeating it.
 * class car objects volvo toyota audi
 * So, a class is a template for objects, and an object is an instance of a class.
 * When the individual objects are created, they inherit all the variables and functions from the class.
 * Everything in C++ is associated with classes and objects, along with its attributes and methods.
 * For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.
 * Attributes and methods are basically variables and functions that belongs to the class.
 * A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
 * To create a class, use the class keyword:
 *  class MyClass {       // The class
    public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    };
 * // Access modifiers
 * he public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
 * Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
 * 
 * Class Methods
 * Methods are functions that belongs to the class.
 * There are two ways to define functions that belongs to a class:
 * Inside class definition
 * Outside class definition
 */



// class MyClass{
//     public:
//     int myNum;
//     string  myString;
// };

/**
 * separating class code into 2 files
 * 
 * Header file - .h
 * contains the declaration of all the class members
 * only attributes declaration and methods prototypes
 * implementation File - .cpp
 * contains the implementation of the class methods
 * client code is the one that includes the main function this file should be stored by the name main.cpp
 * 
 */

int Car::speed(int s) {
    return s;
}





int main ()
{
    // MyClass myObj; // create an object of MyClass

    // //  Access attributes and set values
    // myObj.myNum = 15;  // setter, mutator
    // myObj.myString = "Text"; 

    // cout << "hello world!" << "\n";
    // // Printing attribute values
    // cout << myObj.myNum << "\n"; // getter, accessor
    // cout << myObj.myString << "\n";

    Car c1; // this will call the constructor
    
    cout << "This Car provider by: "<<c1.getMaker() << "\n";
    cout << "The car model is: "<<c1.getModel() << "\n";
    cout << "The car color is: "<<c1.getColor() << "\n";
    cout << "The Max Speed is: "<<c1.speed(200) << "\n";
    

    c1.setMaker("Honda");
    c1.setModel(2018);
    c1.setColor("Black");
    c1.myMethod();

    cout << "This Car provider by: "<<c1.getMaker() << "\n";
    cout << "The car model is: "<<c1.getModel() << "\n";
    cout << "The car color is: "<<c1.getColor() << "\n";
    cout << "The Max Speed is: "<<c1.speed(180) << "\n";
    


    /**
     * Constructor
     * A constructor in C++ is a special method that is automatically called when an object of a class is created.
     * To create a constructor, use the same name as the class, followed by parentheses ():
     * constructors typically initialize object attributes and perform other object initializations
     * constructors are used to perform operations at the time an object is created
     * initialize like Rectangle(){ length = 0; width = 0;}
     * 
     * constructor special properties
     * constructors have the same name as the class
     * constructors have no return type not event void
     * constructors may not return any values
     * constructors are typically public
     * 
     */

    return 0;
}