#include <bits/stdc++.h>
using namespace std;

int charToInt(int pos, string arr) {
	int res = 0;
	while (arr[pos] < '9' && arr[pos] > '0') {
		res = (res * 10) + (arr[pos] - '0');
		pos++;
	}
	return res;
}

int main() {
	string input;
	int temp = 0, res = 0, index = 0;
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if ((input[0] > '9' || input[0] < '0') || (input[input.length() - 1] < '0' || input[input.length() - 1] >'9')) {
			cout << "Invalid operation\n";
			return 0;
		} else if (input[i] == '+' || input[i] == '-') {
			if (input[i + 1] == '+' || input[i + 1] == '-') {
				cout << "Invalid operation\n";
				return 0;
			}
		}
	}

	res = charToInt(0, input); // initial value

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '+') {
			res += charToInt(i + 1, input);
		} else if (input[i] == '-') {
			res -= charToInt(i + 1, input);
		}
	}

	cout << res << "\n";
	return 0;
}