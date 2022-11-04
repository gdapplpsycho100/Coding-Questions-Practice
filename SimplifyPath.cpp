/*
LeetCode 71 SimplifyPath

using stack

come from disscussion
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

string symplifyPath(string path) {
  stack<string> stack;
  string result;

  for (int i = 0; i < path.size(); i++) {
    if (path[i] == '/') {
      continue;
    }
    string temp;
    while (i < path.size() && path[i] != '/') {
      temp += path[i];
      i++;
    }
    if (temp == ".") {
      continue;
    } else if (temp == "..") {
      if (!stack.empty()) {
        stack.pop();
      } 
    }
    else {
        stack.push(temp);
    }
    while (!stack.empty()) {
        result = "/" + stack.top() + result;
        stack.pop();
      }
  }
  if (result.size() == 0) {
    return "/";
  }
  return result;
}
