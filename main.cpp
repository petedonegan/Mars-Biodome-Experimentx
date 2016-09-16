#include <iostream>
#include <string>
using namespace std;
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
		cout<< "---------------------------" << endl
			<< "Mars Colony main menu" << endl
			<< "1. Set Mission Parameters" << endl
			<< "2. Run Simulation" << endl
			<< "3. Quit" << endl
			<< "---------------------------" << endl
			<< "Choice >>";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			cout << "A. Food grown per day" << endl;
				cin >> foodGrown_PerDay;
				cout << "B. Cleanup per person per day" << endl;
				cin >> cleanup_PerPersonPerDay;
				cout << "C. Starting units of food" << endl;
				cin >> foodCount;
				cout << "D. Mission length, in days" << endl;
				cin >> missionLength;
				cout << "E. People on the mission" << endl;
				cin >> peopleCount;
				cout << "F. Team name" << endl;
				cin >> teamName;
				cout << endl;

				cout << "foodGrown_PerDay: " << foodGrown_PerDay << endl;
				cout << "cleanup_PerPersonPerDay: " << cleanup_PerPersonPerDay << endl;
				cout << "foodCount: " << foodCount << endl;
				cout << "missionLength: " << missionLength << endl;
				cout << "peopleCount: " << peopleCount << endl;
				cout << "teamName: " << teamName << endl;
				cout << endl;
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
