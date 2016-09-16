#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool done = false;
	const int foodConsumed_PerPersonPerDay = 2; 
	const int oxygenCreated_PerDay = 5;
	const int wasteCreated_PerPersonPerDay = 3;
	const int oxygenUsed_PerPersonPerDay = 2;
	int foodGrown_PerDay;
	int cleanup_PerPersonPerDay;
	int foodCount;
	int wasteCount;
	int oxygenCount;
	int peopleCount;
	int missionLength;
	string teamName = "carRamRod";
	int choice; 


	while (done == false)
	{
		cout << "Mars Colony main menu" << endl
			<< "1. Set Mission Parameters" << endl
			<< "2. Run Simulation" << endl
			<< "3. Quit" << endl
			<< "---------------------------" << endl
			<< "Choice >>";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			cout << "Mission Parameters" << endl;
		}
		if (choice == 2)
		{
			cout << "Run Simulation" << endl;
		}
		if (choice == 3)
		{
			done = true;
		}
	}
	
	return 0;
}
