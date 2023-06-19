

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int col = 1;
	for (int i = 1; i < 300; i++) {
		if (i % 7 == 0) {
			cout << setw(4) << i;
			col++;
			if(col > 10) {
				cout << endl;
				col = 1;
			}
		}
	}
	return 0;
}

