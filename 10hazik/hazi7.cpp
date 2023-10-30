#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100000];
    int i=0, j, n, r;
    ifstream file("bac.in");
    while(file >> a[i]){
        i++;
    }
    n=i;
    for (int i = 0; i < n-1; i++) {
      for (int j = 0; j < n-i-1; j++) {
         if (a[j] > a[j+1]) {
            swap(a[j], a[j+1]);
            }
        }
    }
//    for (i=0; i<n; i++){
//        cout << a[i] << " ";
//    }
    for (i=1; i<n; i++){
        if (a[i] != a[i-1]){
            r = a[i]-a[i-1];
//            cout << r << endl;
            break;
        }
    }
    for (i=2; i<n; i++){
        if (a[i]-a[i-1]!=r && a[i]-a[i-1]!=0){
            cout << "NU";
            return 0;
        }
    }
    cout << r;
    file.close();
    return 0;
}
