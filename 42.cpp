// Wildcard String Matching

#include <iostream>
using namespace std;

bool isMatch(string s, string p) {

		int sIdx = 0, pIdx = 0, lastWildcardIdx = -1, sBacktrackIdx = -1, nextToWildcardIdx = -1;
		while (sIdx < s.size()) {
			if (pIdx < p.size() && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
				++sIdx;
				++pIdx;
			} else if (pIdx < p.size() && p[pIdx] == '*') {
				lastWildcardIdx = pIdx;
				nextToWildcardIdx = ++pIdx;
				sBacktrackIdx = sIdx;

			} else if (lastWildcardIdx == -1) {
				return false;
			} else {
				pIdx = nextToWildcardIdx;
				sIdx = ++sBacktrackIdx;
			}
		}
		for(int i = pIdx; i < p.size(); i++){
			if(p[i] != '*') return false;
		}
		return true;
	}

int main() {

	string str = "baaabab";
	string pattern = "*****ba*****ab";
	if (isMatch(str, pattern))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
