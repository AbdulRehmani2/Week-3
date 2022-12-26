#include <iostream>

using namespace std;

main()
{
int fVelocity;
int iVelocity;
int time;
int acceleration;
cout << "Enter initial velocity : ";
cin >> iVelocity;
cout << "Enter acceleration : ";
cin >> acceleration;
cout << "Enter time : ";
cin >> time;
fVelocity = iVelocity + (acceleration * time);
cout << "Final Velocity = " << fVelocity;
}