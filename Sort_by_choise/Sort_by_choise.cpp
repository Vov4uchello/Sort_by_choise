
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int ll;

int main()
{
	srand(time(NULL));
	int size;
	cin >> size;
	int *mas = new int[size];
	unsigned int start_time = clock();
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % size;
		cout << mas[i] << " ";
	}

	int count = 0;
	int change = 0;
	int ex = 0;

	for (int j = 0; j < size; j++) {
		int k = mas[j];
		ex = 0;
		for (int l = j + 1; l < size; l++) {
			count++;
			if (k > mas[l]) {
				ex++;
				k = mas[l];
				ll = l;
			}
			if (l == size - 1) {
				if (ex > 0) {
					change++;
				}
				mas[ll] = mas[j];
				mas[j] = k;
			}
		}
	}

	cout << "\n";
	cout << "\n";

	unsigned int end_time = clock();
	unsigned int search = end_time - start_time;
	cout << "Time: " << search / 100000.0 << endl;
	cout << "Comparison: " << count << endl;
	cout << "Change: " << change;
	cout << "\n";
	cout << "\n";


	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}



	delete[] mas;
	system("pause");
	return 0;

}



