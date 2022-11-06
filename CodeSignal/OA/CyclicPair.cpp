// use LeetCode 796 directly

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

int cyclicPair(vector<int> numbers) {
  int counter = 0;
  for (int i = 0; i < numbers.size(); i++) {
    for (int j = i + 1; j < numbers.size(); j++) {
      string s = to_string(numbers[i]);
      string goal = to_string(numbers[j]);
      if (rotateString(s, goal)) {
        counter++;
      }
    }
  }
  return counter;
}

int main(int argc, char *argv[]) {
  string s = "abcde";
  string goal = "cdeab";
  // cout << rotateString(s, goal) << endl;
  vector<int> numbers{456, 564, 465, 142857, 285714};
  cout << cyclicPair(numbers) << endl;
}
