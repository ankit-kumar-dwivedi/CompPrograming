#include <bits/stdc++.h>
using namespace std;

vector<int> splitString(string s, string delimiter) {
	size_t last = 0;
	size_t next = 0;
	vector<int> output;
	// while delimiter exist after the last marker
	while((next = s.find(delimiter, last)) != string::npos) {
		output.push_back(stoi(s.substr(last, next - last)));
		last = next + delimiter.length();
	}
	output.push_back(stoi(s.substr(last)));
	return output;
}

int main() {
  string s = "12>=123>=12345";
  string delimiter = ">=";
  vector<int> arr = splitString(s,delimiter);
  for (auto elem: arr) {
    cout<<elem<<",";
  }
  return 0;
}
