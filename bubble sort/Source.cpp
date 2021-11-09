#include <iostream>
#include "string"

using namespace std;

int sort(int a[4]) {
	int k = 1;
	int i = 0;
	int j = 0;
	while (i < 4) {
		if (a[i] > a[i + 1]) {
			j = a[i];
			a[i] = a[i + 1];
			a[i + 1] = j;
			i = i + 1;
			k = 0;
		}
		else {
			i = i + 1;
			k = k + 1;
		}
	}
	return k;
}

//нужно понять, сколько раз подряд не меняется число. Если меньше 5 раз, то запускаем снова сорт.
//проверка должна возвращать сообщения: либо снова сортировать, либо всё супер.

int proverka(int a[4]) {
	int k = sort(a);
	bool yes = false;
	if (k < 5) {
		yes = false;
	}
	else {
		yes = true;
	}
	return yes;
}

int main() {
	bool yes = false;
	bool no = true;
	int a[]{ 3,6,3,4,2 };
	while (yes == false) {
		sort(a);
		yes = proverka(a);

	}

	int I = 0;
	for (I, a; I < 5; I = I + 1) {
		cout << "[" << I << "]" << a[I] << "\n";
	}
	return 0;
}