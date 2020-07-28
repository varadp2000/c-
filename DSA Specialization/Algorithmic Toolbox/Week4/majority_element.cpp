#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  //write your code here
  while (left < right){
    int curr = a[left];
    int occ = 0;
    for (int i = left; i < right;i++){
      if (a[i] == curr)
        occ++;
      if(occ>(right/2)){
        return curr;
      }
    }
    left++;
  }
    return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size())) << '\n';
}
