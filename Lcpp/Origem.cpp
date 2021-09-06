#include <iostream>

using namespace std;

int main() {
	
	for (int counter = 1; counter <= 100; counter++) {

		if (counter % 2 != 0 && counter % 3 != 0 && counter % 5 != 0 && counter % 7 != 0) {
			
			int result = counter;
			cout << "This is a prime number: " << result << endl;
		}
	}

	return 0;
}