#include <iostream>
#include <vector>

using namespace std;

/**
 * Vector
 * what is vector? 
 * --vector is A container for similar Data like Array
 * --vectors are Dynamic Arrays => Array that can change in size
 * --vector is a class template
 * -Vector Syntax => vector<type> VariableName
 * -Vector create with all methods
 * -Loop on Elements
 * -Important Notes
 */

/**
 * Vector vs Array
 * ---Vector
 * ----- It Need A Standard Header To Work
 * ----- Can Be Resized After Insertion Or Deletion Of Elements
 * ----- Not Index Based And Elements Accessed By Iterators
 * ----- Vectors Are Slower Than Arrays
 * ----- Vectors Occupy More Memory
 * ----- Vector Available In C++ Only
 * ---Array
 * ----- C-Array Is Language Construct
 * ----- Cannot be Resized After its defined
 * ----- Arrays are faster than vectors
 * ----- Arrays Occupy Less Memory
 * ----- Vector Available In C & C++ 
 * when To use vector
 * --- When we don't know the size of the list
 * when we use Array
 * --- When It Comes To Performance & Speed
 * [1] After Learning Pointers There Will Be More Things To Compare
 * [2] You Can Still Create Dynamic Array But Vector Is Better
 */

int main () {

    vector <int> numsOne = {10 ,20 ,30 ,40};
    vector <int> numsTwo = {100 ,200 ,300 ,400};
    vector <int> numsThree(4,50); //=> {50,50,50,50}

    for (int i = 0; i < numsOne.size(); i++)
    {
        cout << numsOne.at(i) << " ";
    }
    cout << "\n===========\n";
    
    for (int i = 0; i < numsTwo.size(); i++)
    {
        cout << numsTwo.at(i) << " ";
    }
    cout << "\n===============\n";
    
    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }
    cout << "\n===========\n";

    // Adding elements
    numsThree.push_back(50);

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }
    cout << "\n==============\n";

    // edit element in vector array
    numsThree.at(0) = 100;

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }
    cout << "\n===============\n";

    int nums[] = {10, 20, 30};
    cout << nums[2] << "\n";



    return 0;
}