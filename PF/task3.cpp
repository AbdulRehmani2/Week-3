#include <iostream>

using namespace std;

main()
{
float onekilo = 0.45;
float lbs;
float kgs;
float result;

cout << "Enter pounds : ";
cin >> lbs;

result = lbs * onekilo;

cout << "The weight in kgs is : " << result << endl;

cout << "Enter kgs : ";
cin >> kgs;

result = kgs / onekilo;

cout << "The weight in lbs is : " << result;
}