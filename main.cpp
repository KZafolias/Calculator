#include <iostream>
#include <string>
using namespace std;

int main()
{          
        string type;
        double num1, num2;
        cout << "enter what type of calculation you want to get (devision, multiplication, subtraction, addition)" << endl;
        cin >> type;
        
        if (type == "devision") { 
            cout << "type first number: " << endl;
            cin >> num1; 
            cout << "type second number: " << endl;
            cin >> num2;
            cout << " " << endl;
            cout << num1 / num2 << endl; 
        }

        else if(type == "multiplication") { 
            cout << "type first number: " << endl;
            cin >> num1; 
            cout << "type second number: " << endl;
            cin >> num2;
            cout << " " << endl;
            cout << num1 * num2 << endl; 
        }

        else if(type == "subtraction") { 
            cout << "type first number: " << endl;
            cin >> num1; 
            cout << "type second number: " << endl;
            cin >> num2;
            cout << " " << endl;
            cout << num1 - num2 << endl; 
        }

        else if(type == "addition") { 
            cout << "type first number: " << endl;
            cin >> num1; 
            cout << "type second number: " << endl;
            cin >> num2;
            cout << " " << endl;
            cout << num1 + num2 << endl; 
        }
            
    return 0;
}
