#include <iostream>
using namespace std;

void checkVoting(int age)
{
    if(age >= 18)
        cout << "Eligible for voting";
    else
        cout << "Not eligible for voting";
}

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    checkVoting(age);

    return 0;
}