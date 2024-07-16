#include <iostream>
// #include <string>

using namespace std;

class Car
{
    private:
        string provider;
        int model;
        string color;

    public:

        // constructor
        Car() {
            provider = "Honda";
            model = 2009;
            color = "Red";
            
        }
    
        int speed(int maxSpeed);

        void setMaker (string m)
        {
            provider = m;
        }

        string getMaker()
        {
            return provider;
        }
        void setModel (int m)
        {
            model = m;
        }

        int getModel()
        {
            return model;
        }

        void setColor (string c)
        {
            color = c;
        }

        string getColor()
        {
            return color;
        }

        void myMethod()
        {
            cout << "Hello World!" << "\n";
        }


};
