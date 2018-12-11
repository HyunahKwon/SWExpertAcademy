/* 마디: 패턴에서 반복되는 부분 */
#include <iostream>
using namespace std;

int main() {
	int tc, madi;
	char str[31];
	bool finish;

	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> str;

		for (madi = 1; madi < 10; madi++) {
			for (int j = 0; j < madi; j++) {
				if (str[madi + j] == str[j]) {
					finish = true;
					continue;
				}
				else {
					finish = false;
					break;
				}
			}
			if (finish == true)
				break;
		}
		cout << "#" << i + 1 << " " << madi << endl;
	}

	return 0;
}