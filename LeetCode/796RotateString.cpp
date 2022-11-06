#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

string rotate(string s) {
  char back = s[0];
  s.erase(s.begin());
  s += back;
  return s;
}

bool rotateString(string s, string goal) {
  if (s.size() != goal.size()) {
    return false;
  }
  if (s == goal) {
    return true;
  }
  int n = s.size();
  for (int i = 0; i < s.size(); i++) {
    s = rotate(s);
    if (s == goal) {
      return true;
    }
  }
  return false;
}

int main(int argc, char *argv[]) {
  string s = "abcde";
  string goal = "cdeab";
  cout << rotateString(s, goal) << endl;
}
