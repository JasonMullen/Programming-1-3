#include <iostream>
#include <chrono>
using namespace std;

void time_keeper(chrono::steady_clock::time_point start, int ver) { 
	//cout << "[Version " << ver << "] Time used: " << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - start).count() << " milliseconds.\n";
	using namespace std :: chrono;
	std::cout << "[Version" << ver << "] Time:" << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - start).count() << " milliseconds.\n";

}
int main(int argc, char* argv[]) {

	int number_list[10] = {100,200,400,800,1600,3200,6400,12800,25600,51200};
	int list_size = 8;


	for (int size = 0; size < list_size; size++) {
		int n = number_list[size]; // for readability
		cout << "\tn = " << n << '\n';
		int** a = new int* [n];
		int** b = new int* [n];
		int** c = new int* [n];
		for (int i = 0; i < n; i++) { //reduce
			a[i] = new int[n](); // init to 0
			b[i] = new int[n]();
			c[i] = new int[n]();
		}

		// VERSION 1
		auto start = chrono::steady_clock::now();
		for (int i = 1; i < n; i++)
			for (int j = 1; j < n; j++)
				c[i][j] = a[i][j] + b[i][j];
		time_keeper(start, 1);

		// VERSION 2
		auto start_two = chrono::steady_clock::now();
		for (int j = 1; j < n; j++)
			for (int i = 1; i < n; i++)
				c[i][j] = a[i][j] + b[i][j];
		time_keeper(start_two, 2);

		delete[] a; delete[]b; delete[] c;

	}
	// system("pause");
	return 0;
}
