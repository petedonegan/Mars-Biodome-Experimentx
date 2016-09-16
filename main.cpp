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
		cout << "---------------------------" << endl
			<< "Mars Colony main menu" << endl
			<< "1. Set Mission Parameters" << endl
			<< "2. Run Simulation" << endl
			<< "3. Quit" << endl
			<< "---------------------------" << endl
			<< "Choice >> ";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			cout << "A. Food grown per day: ";
			cin >> foodGrown_PerDay;
			cout << endl << "B. Cleanup per person per day: ";
			cin >> cleanup_PerPersonPerDay;
			cout << endl << "C. Starting units of food: ";
			cin >> foodCount;
			cout << endl << "D. Mission length, in days: ";
			cin >> missionLength;
			cout << endl << "E. People on the mission: ";
			cin >> peopleCount;
			cout << endl << "F. Team name: ";
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
			cout << "RUNNING SIMULATION" << endl;
			cout << "------------------" << endl;
			cout << endl;
			oxygenCount = 100;
			wasteCount = 0;
			int day = 1;
			bool missionSuccess = true;

			while (day <= missionLength)
			{
				cout << "Day " << day << " of " << missionLength << ":" << endl;
				cout << foodGrown_PerDay << " units of food grown" << endl;
				cout << foodConsumed_PerPersonPerDay << " units of food consumed" << endl;
				cout << endl;
				cout << wasteCreated_PerPersonPerDay << " units of waste created" << endl;
				cout << cleanup_PerPersonPerDay << " units of waste cleaned up" << endl;
				cout << endl;
				cout << oxygenCreated_PerDay << " units of oxygen produced" << endl;
				cout << oxygenUsed_PerPersonPerDay << " units of oxygen used" << endl;

				foodCount = (foodCount + foodGrown_PerDay) - (foodConsumed_PerPersonPerDay * peopleCount);
				wasteCount = wasteCount + (wasteCreated_PerPersonPerDay * peopleCount) - (cleanup_PerPersonPerDay * peopleCount);
				if (wasteCount < 0)
					wasteCount = 0;
				oxygenCount = oxygenCount - (oxygenUsed_PerPersonPerDay * peopleCount) + oxygenCreated_PerDay;
				cout << "Status:  " << foodCount << " food,  " << wasteCount << " waste,  " << oxygenCount << " oxygen." << endl;
				cout << "-------------------------------------------------------" << endl;

				if (foodCount <= 0)
				{
					cout << "Mission Failed! You're out of food!" << endl;
					missionSuccess = false;
					break;
				}

				if (wasteCount > 20)
				{
					cout << "Mission Failed! You're covered in garbage" << endl;
					missionSuccess = false;
					break;
				}

				if (oxygenCount < 0)
				{
					cout << "Mission Failed! You can't breathe!" << endl;
					missionSuccess = false;
					break;
				}
					day++;
			}
			if (missionSuccess == true)
				cout << "Your mission was a success!!!" << endl << endl << endl;
			else
				cout << "Your mission failed" << endl << endl << endl;
		}
		if (choice == 3)
		{
			done = true;
		}
	}

	return 0;
}
