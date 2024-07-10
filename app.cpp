#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>

using namespace std;


/**
 * C++ Functions
 * A function is a block of code which only runs when it is called.
 * You can pass data, known as parameters, into a function.
 * Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times
 * C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.
 * to declare a function, specify the name of function followed by parentheses ()
 * void means that the function does not have a return value. You will learn more about return values later in the next chapter
 * inside the function (the body), add code that defines what the function should do
 * Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.
 * To call a function, write the function's name followed by two parentheses () and a semicolon ;
 * 
 * A C++ function consist of two parts:
 * Declaration: the return type, the name of the function, and parameters (if any)
 * Definition: the body of the function (code to be executed)
 * 
 * C++ Function Parameters
 * Information can be passed to functions as a parameter. Parameters act as variables inside the function.
 * Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
 * when function is called we pass the info which declare in parameters inside the parentheses functionName(info);
 * 
 * C++ Functions Default parameters
 * you can also use a default parameter value, by using the equals sign (=).
 * If we call the function without an argument, it uses the default value ("Norway"):
 * 
 * C++ return function
 * The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:
 * References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.
 * 
 * C++ Function Overloading
 * With function overloading, multiple functions can have the same name with different parameters:
 * 
 * C++ variable Scope
 * it is important to learn how variables act inside and outside of functions.
 * In C++, variables are only accessible inside the region they are created. This is called scope.
 * 
 * C++ global scope
 * A variable created outside of a function, is called a global variable and belongs to the global scope.
 * and can therefore be used by anyone
 * However, you should avoid using the same variable name for both globally and locally variables as it can lead to errors and confusion.
 * 
 * C++ function recursion
 * الدالة التكرارية
 * Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.
 */

void myFunction() {
    cout << "i just got executed!" << "\n";
}

void functionName(int parameter1, string parameter2, bool parameter3 = true) {
    cout << parameter1 << "\n";
    cout << parameter2 << "\n";
    cout << parameter3 << "\n";
}

int calc(int n1 , int n2){
    return n1 + n2;
}

int calc(int arr[],int counter){
    int result = 0;
    for (int i = 0; i < counter; i++){
        result += arr[i];
    }
    return result;
}

// pass Reference 

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}
void swapNumss(int x, int y){
    int z = x;
    x = y;
    y = z;
    cout << x;
    cout << y;
}

// Overloading

void print(int a, int b){
    cout << "Number One Is: " << a << "\n";
    cout << "Number Two Is: " << b << "\n";
}
void print(int a, int b, int c){
    cout << "Number One Is: " << a << "\n";
    cout << "Number Two Is: " << b << "\n";
    cout << "Number Three Is: " << c << "\n";
}

int plusFunc(int a , int b){
    return a + b;
}
double plusFunc(double a , double b){
    return a + b;
}

// local scope
void localScope() {
    int x = 5;
}

// recursion 
int add (int num){
    if(num == 0){
        return 0;
    }
    cout << num << "\n";
    cout << "===============\n";
    return num + add(num - 1);
}

int summon(int k) {
    if ( k > 0){
        return k + summon( k - 1);
    } else {
        return 0;
    }
}

int main() {

    // int fnum = 10;
    // int snum = 20;
    // int lnum = fnum;

    // // // lnum = fnum;
    // // fnum = snum;
    // // snum = lnum;
    
    // swapNumss(fnum,snum);
    // // cout << fnum << snum << "\n"; //error undefined reference
    
    // swapNums(fnum,snum); 
    // cout << fnum << snum << "\n"; //error undefined reference
    // cout << lnum << "\n"; // you can assign value of variable to a empty declare variable but 
    // cout << fnum << "\n"; 
    // cout << snum << "\n"; 

    // cout << "Before swap : \n";
    // cout << fnum << snum << "\n";

    // //  call func
    // swapNums(fnum,snum);

    // cout << "After swap : \n";
    // cout << fnum << snum << "\n";


    // int arra[] = {10,20,30,100,400};
    // int arrSize = size(arra);
    // cout << "The Result is : " << calc(arra,arrSize) <<"\n";

    /**
     * Build-in Functions
     * cmath Functions
     * max()
     * min()
     * round()
     * ceil()
     * floor()
     * trunc()
     * cctype Functions
     * tolower()
     * toupper()
     * islower()
     * isspace()
     * algorithm Functions
     * Count Number Occurance
     * Find Minimum Number
     * Find Maximum Number
     */

    // int num1 = 15;
    // int num2 = 10;
    // int num3 = 20;    
    // double num4 = 24.42;
    // float num5 = 2.5f;
    // float num6 = 7.7f;
    // int num7 = 7.6;

    // cout << max(num3,num2) <<"\n";  //20
    // cout << min(num1, num2) << "\n";//10
    // cout << ceil(num4) << "\n";     //25
    // cout << floor(num6) << "\n";    //7
    // cout << round(num5) << "\n";    //3
    // cout << trunc(num6) << "\n";    //7



    // cout << "A\n";                          // A
    // cout << tolower('A') << "\n";           // 97
    // cout << char(tolower('A')) << "\n";     // a
    // cout << toupper('a') << "\n";           // 65
    // cout << char(toupper('a')) << "\n";     // A
    // cout << "============================" << "\n";

    // string name = "AbouSAmra"; //aBOUsaMRA
    
    // int nameSize = size(name);

    // for(int i=0; i < nameSize; i++) {
    //     if(isupper(name[i]))
    //     {
    //         cout << char(tolower(name[i]));
    //     } else {

    //         cout << char(toupper(name[i]));
    //     }
    // }
    // cout << "\n============================" << "\n";


    // string name2 = "ab o  samr a";
    
    // int name2Size = size(name2);

    // for(int i=0; i < name2Size; i++) {
        
    //     if(name2[i] == ' ')
    //     {
    //         continue;
    //     } else {

    //         cout << name2[i];
    //     }
    // }
    // for(int i=0; i < name2Size; i++) {
        
    //     if(isspace(name2[i]))
    //     {
    //         continue;
    //     } else {

    //         cout << name2[i];
    //     }
    // }
    // cout << "\n============================" << "\n";

    // myFunction();
    // functionName(25,"alaa",true);



    // cout << min({1,2,3,4,5,6,7,8,9}) << "\n";
    // cout << max({1,2,3,4,5,6,7,8,9}) << "\n";
    
    // int nums[] = {1,2,3,4,5,6,7,8,9,-1,-2,-3};
    // int numsSize = size(nums);
    // int numChecker = 0;
    // // Checking for minimum number
    // for(int i = 0; i < numsSize; i++) {
    //     if(nums[i] < numChecker)
    //     {
    //         numChecker = nums[i];
    //     }
    // }
    // int nums[] = {1,2,3,4,5,6,7,8,9,-1,-2,-3};
    // int numsSize = size(nums);
    // int numChecker = 0;
    // // Checking for maximum number
    // for(int i = 0; i < numsSize; i++) {
    //     if(nums[i] > numChecker)
    //     {
    //         numChecker = nums[i];
    //     }
    // }

    // cout << numChecker << "\n";

    // // Checking count number
    // int nums2[] = {10,20,30,10,20,10,15,100,10};
    // int nums2Size = size(nums2);
    // int counter = 0;
    // int choosenNum = 10;

    // for(int i=0; i < nums2Size; i++)
    // {
    //     if(nums2[i] == choosenNum)
    //     {
    //         counter++;
    //     }
    // }

    // cout << choosenNum << " Found " << counter << " Times\n";


    // print(5,6);
    // print(5,6,8);
    // cout << plusFunc(10.5,10.2) << "\n";
    // cout << plusFunc(1,2) << "\n";
    

    // localScope();
    // // cout << x; // error: 'x' was not declared in this scope

    // // recursion
    // cout << add(5);
    // int result = summon(4);
    //  cout << result;

    return 0;
}
