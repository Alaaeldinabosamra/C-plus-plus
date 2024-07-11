#include <iostream>
#include <vector>
#include <algorithm>

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

    // vector <int> numsOne = {10 ,20 ,30 ,40};
    // vector <int> numsTwo = {100 ,200 ,300 ,400};
    // vector <int> numsThree(4,50); //=> {50,50,50,50}

    // for (int i = 0; i < numsOne.size(); i++)
    // {
    //     cout << numsOne.at(i) << " ";
    // }
    // cout << "\n===========\n";
    
    // for (int i = 0; i < numsTwo.size(); i++)
    // {
    //     cout << numsTwo.at(i) << " ";
    // }
    // cout << "\n===============\n";
    
    // for (int i = 0; i < numsThree.size(); i++)
    // {
    //     cout << numsThree.at(i) << " ";
    // }
    // cout << "\n===========\n";

    // // Adding elements
    // numsThree.push_back(50);

    // for (int i = 0; i < numsThree.size(); i++)
    // {
    //     cout << numsThree.at(i) << " ";
    // }
    // cout << "\n==============\n";

    // // edit element in vector array
    // numsThree.at(0) = 100;

    // for (int i = 0; i < numsThree.size(); i++)
    // {
    //     cout << numsThree.at(i) << " ";
    // }
    // cout << "\n===============\n";

    // int nums[] = {10, 20, 30};
    // cout << nums[2] << "\n";

    // CRUD in Vector
    // Read
    // vector<int> nums = {10,20,30};
    // cout << nums.at(2) << "\n";
    // cout << nums[2] << "\n"; // better to not use [] in vector because it return random value of out range and not get error
    // //add
    // nums.push_back(40);
    // cout << nums.size() << "\n";
    // cout << nums.at(3) << "\n";
    // //update
    // nums.at(3) = 100;
    // cout << nums.at(3) << "\n";
    // //delete
    // nums.push_back(200);
    // cout << nums.at(4) << "\n";
    // cout << nums.size() << "\n";
    // nums.pop_back();
    // cout << nums.size() << "\n";
    // // advanced
    // cout << nums.capacity() << "\n";
    
    // cout << nums.front() << "\n";
    // cout << nums.at(0) << "\n";
    
    // nums.clear();
    // cout << nums.size() << "\n";
    // if(nums.empty())
    // {
    //     cout << "Vector is Empty" << "\n";
    // } else {
    //     cout << "Vector is not Empty" << "\n";
    // }

    // vector<int> nums = { 10, 20, 30 ,40};

    // // initialize with vector syntax or with auto keyword 
    // vector<int>::iterator it = nums.begin();
    // vector<int>::iterator last = nums.end() - 1;
    // auto ite = nums.begin() + 1;

    // // [*] Dereference => Dont Print the iterator, print what its point to
    // cout << "First Element Is: " << *it << "\n";
    // cout << "Second Element Is: " << *ite << "\n";

    // cout << "======================" << "\n";
    // cout << " Element Is: " << ite[1] << "\n"; // 30
    // cout << " Element Is: " << ite[2] << "\n"; // 40
    // cout << " Element Is: " << ite[0] << "\n"; // 20

    // cout << "======================" << "\n";
    // nums.erase(nums.begin(), nums.begin() + 2);
    // cout << "Element Is: " << *nums.begin() << "\n"; //30
    // cout << "======================" << "\n";
    // cout << "Second Element Is: " << *last << "\n"; //40
    // cout << "Second Element Is: " << *last - 1 << "\n"; //39
    // cout << "Second Element Is: " << *(last - 1) << "\n"; //30
    // cout << "======================" << "\n";
    // advance(it,3); // 3 refer to steps in vector array
    // cout << "First Element Is: " << *it << "\n";
    // cout << "======================" << "\n";
    // loop with iterator

    vector <int> nums = {10,20,30,40,50,60};
    vector <int>::iterator it;

    for(it = nums.begin(); it < nums.end(); it++)
    {
        cout << *it << "\n";
    }
    cout << "======================" << "\n";
    // ranged loop with for
    for(int val : nums)
    {
        cout << val << "\n";
    }
    cout << "======================" << "\n";
    int numbers[5] = {20,30,40,60,100};
    for(int myNumber : numbers)
    {
        cout << myNumber << "\n";
    }
    // Vector sort count reverse with header file <algorithm>
    cout << "======================" << "\n";
    vector <int> nums2 = {10,500,60,-20,20,20,100,20};
    int val = 20;
    int countTimes = count(nums2.begin(), nums2.end(), val);

    cout << "Number " << val << "Found " << countTimes << "\n";
    cout << "======================" << "\n";
    for( int &n: nums2) // iteration get copy in ranged loop with variable n if you want take the original array put & reference before variable
    {
        cout << n << "\n";
    }
    cout << "======================" << "\n";
    sort(nums2.begin(), nums2.end());
    for( int &n: nums2) 
    {
        cout << n << "\n";
    }
    cout << "======================" << "\n";


    return 0;
}