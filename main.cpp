#include <iostream>

/**
 * argc (Argument Count): This is an integer that tells you how many arguments are passed to the program (including the program name itself).
 * argv (Argument Vector): This is an array of strings (char pointers) that contains each argument passed to the program. The first element (argv[0]) is always the name of the program.
 */
using namespace std;

int main(int argc, char* argv[])
{
    cout << "Number of arguments: " << argc << endl;

    // Print all arguments
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    cout << "Abosamra" << endl ;
    
    // Wait for the user to press Enter
    // cin.get();

    return 0;
}