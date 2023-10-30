#include <iostream>

using namespace std;

int main() {
  int n, m;
  cout << "n=";
  cin >> n;
  cout << "m=";
  cin >> m;
  int a[n], b[m];
  for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
        cout << "b[" << i << "]=";
        cin >> b[i];
  }
  int s = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == j && a[i] == b[j]) s += a[i];
    }
  }
  int szj, tk;
  while (s > 0){
    szj = s%10 ;
    s = s/10;
    tk = tk*10 + szj;
  }
  cout << tk;
  return 0;
}
