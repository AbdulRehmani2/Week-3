#include <iostream>

using namespace std;

main()
{
double megabytes;
double bits;

cout << "Enter the megabytes : ";
cin >> megabytes;

bits = 1024*1024*8*megabytes;
cout << "The bits are : " << bits;
}