#include <iostream>

using namespace std;

int main()
{

    const int minAge{16};
    int age;
    char answer;

    cout << "How old are you?";
    cin >> age;

    cout << "Do you have a car? Only (y/n)";
    cin >> answer;

    if (age >= minAge)
    {
        if (answer == 'y')
        {
            cout << "Yes - you can drive!";
        }
        else
        {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    }
    else
    {
        cout << "Sorry, come back in " << minAge - age << " years and be sure you own a car when you come back.";
    }

    return 0;
}