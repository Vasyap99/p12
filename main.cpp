#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool IsKPeriodic(string s,int K){
	if(s.length()==0) return true;
	if(K<=0) return false;
	int N=s.length()/K;//количество повторений
	if(N*K!=s.length()) return false;
	for(int k=1;k<N;k++){
		for(int j=0;j<K;j++){
			if(s[k*K+j]!=s[j]) return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	cout << IsKPeriodic("abcabcabcabc",3) << endl;
	cout << IsKPeriodic("abcabcabcabd",3) << endl;	
	cout << IsKPeriodic("abcabcabcabca",3) << endl;	
	return 0;
}
