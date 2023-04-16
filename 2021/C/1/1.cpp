#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int cases;
	cin >> cases;
	
	for (int i = 0; i < cases; i++) {
		int final = 0;
		int length, location;
		cin >> length;
		cin >> location;
		string str;
		cin >> str;

		string pal(length, 'a');

		int curr = 2;
		while ((int)pal.at(curr) < (int)str.at(curr)) {
			string tempStr = pal;

			pal.at(curr) = 'g';
			cout << pal << endl;
			reverse(tempStr.begin(), tempStr.end());
			if (pal.compare(tempStr) == 0){
				final++;
			}
		}

		cout << final << endl;
	}

	return 0;
}