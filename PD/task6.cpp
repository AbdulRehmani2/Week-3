#include <iostream>

using namespace std;

main()
{
int sizeBag;
int costBag;
int areaBag;
int costFertilizer;
int costArea;
cout << "Enter the size of bag in pounds : ";
cin >> sizeBag;
cout << "Enter the cost of the bag : ";
cin >> costBag;
cout << "Enter the area covered by each bag in square feet : ";
cin >> areaBag;
costFertilizer =  costBag / sizeBag;
costArea = costBag / areaBag;
cout << "The cost of fertilizer per pound : " << costFertilizer << endl;
cout << "The cost of fertilizing the area per square feet : " << costArea;
}