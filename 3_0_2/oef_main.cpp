#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::cerr;

	const int n = 3;
	const float inch_per_cm = 1/2.54f;
	float len_in_cm[n]{};

	cout << "Give 3 lengths in cm:\n";
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << ": ";
		cin >> len_in_cm[i];
		if (len_in_cm[i] < 0) {
			cerr << "negative cm is no good\n";
			return -1;
		}
	}

	cout << "\n";

	for (auto l : len_in_cm) {
		cout << l*inch_per_cm << "\n";
	}
	return 0;
}