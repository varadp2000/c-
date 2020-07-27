#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

bool sortfun(string a, string b){
  if(a[0] == b[0])
    return (int)a[1] < (int)b[1];
  return (int)a[0] < (int)b[0];
}

string largest_number(vector<string> a) {
  //write your code here
  std::stringstream ret;
  std::sort(a.begin(), a.end(), sortfun);
  for (int i = a.size()-1; i >= 0; i--)
  {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
