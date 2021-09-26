#include <iostream>
using namespace std;



int main(int argc, const char* argv[]) {

	int i, k = 0;

	int a[] = { 5,3,7,9,6 };
	while (k < 4) {
		for (i = 0; i < 4; i++) {
			if (a[i] >= a[i + 1]) {
				int rpl = a[i];
				a[i] = a[i + 1];
				a[i + 1] = rpl;
				if (i = 4) {
					k = 0;
				}
			}
			else {
				k = k + 1;
			}

		}
	}

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	system("pause");
	return 0;
}
