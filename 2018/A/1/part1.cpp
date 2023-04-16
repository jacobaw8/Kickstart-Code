#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		
		int currTest;
		cin >> currTest;

		currTest;
		
		//test if it is good already

		bool fail = false;
		int numUp = currTest;
		for (int j = 0; j < to_string(numUp).length(); j++) {
			if (int(to_string(numUp)[j]) % 2 != 0) {
				fail = true;
			}
		}
		if (fail == false) {
			cout << "Case #" << i+1 << ": 0" << endl;
			continue;
		}


		int upCount = 0;
		numUp = currTest;
		bool failUpFlag = true;
		while (failUpFlag == true) {
			string currString = to_string(numUp);
			bool failUp = false;
			for (int j = 0; j < currString.length(); j++) {
				if (int(currString[j]) % 2 != 0) {
					failUp = true;
				}
			}
			if (failUp == false) {
				//cout << "made it in " << upCount << endl;
				failUpFlag == false;
				break;
			}
			upCount++;
			numUp += 1;
		}

		int downCount = 0;
		int numDown = currTest;
		bool failDownFlag = true;
		while (failDownFlag == true) {
			string currString = to_string(numDown);
			bool failDown = false;
			for (int j = 0; j < currString.length(); j++) {
				if (int(currString[j]) % 2 != 0) {
					failDown = true;
				}
			}
			if (failDown == false) {
				//cout << "made it in " << downCount << endl;
				failDownFlag == false;
				break;
			}
			downCount++;
			numDown -= 1;
		}
		
		cout << "Case #" << i + 1 << ": " << to_string(min(upCount, downCount)) << endl;
		//cout << "uhhhhhhhhh the counts are: UP in " << upCount << " and DOWN in " << downCount << endl;



	}

}