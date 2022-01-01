#include <bits/stdc++.h>
using namespace std;

int charToInt(int batas_kiri, int batas_kanan, string arr) {
	int res = 0;
	for (int i = batas_kiri; i <= batas_kanan; i++) {
		res = (res * 10) + (arr[i] - '0');
	}
	return res;
}

int main() {
	string input;
	int a = 0, b = 0, res;
	cin >> input;
	if ((input[0] > '9' || input[0] < '0') || (input[input.length() - 1] > '9' || input[input.length() - 1] < '0')) {
		cout << "Invalid operation";
		return 0;
	} else {
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '+') {
				if (input[i + 1] == '+' || input[i + 1] == '-') {
					cout << "Invalid operation";
					return 0;
				} else {
					a = charToInt(0, i - 1, input);
					b = charToInt(i + 1, input.length() - 1, input);
					res = a + b;
				}
			} else if (input[i] == '-') {
				if (input[i + 1] == '+' || input[i + 1] == '-') {
					cout << "Invalid operation";
					return 0;
				} else {
					a = charToInt(0, i - 1, input);
					b = charToInt(i + 1, input.length() - 1, input);
					res = a - b;
				}
			}
		}
		cout << res << "\n";
	}
}