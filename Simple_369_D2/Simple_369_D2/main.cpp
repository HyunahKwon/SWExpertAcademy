#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, length;
	string target;
	string res = "";

	//cout << "10戚雌 1000戚馬税 n 脊径" << endl;
	cin >> n;
	//cout << endl;

	for (int j = 1; j <= n; j++){
		target = to_string(j);
		length = target.length();
		res = "";

		for (int i = length; i > 0; i--){
			if (target.at(i - 1) == '3' || target.at(i - 1) == '6' || target.at(i - 1) == '9'){
				res += '-';
			}
		}
		if (res == "")
			cout << target;
		else
			cout << res;
		
		cout << " ";
	}
	return 0;
}

// 坦製拭 fail梅澗汽 戚政亜 scan 閤壱 cout<<endl; 凶庚戚醸製..せせせせせせせせせせせせ