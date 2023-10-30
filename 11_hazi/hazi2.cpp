#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    int max=-999999, N;
    in >> N;
    while (N>0){
        int szj = N % 10;
        N/=10;
        if (szj > max){
            max = szj;
        }
    }
    int x = max;
    int v[x];
    v[1]=0;
    v[2]=1;
    int fibx = 0;
    if (x==0){
        fibx = v[1];
    } else if (x==1) {
        fibx = v[2];
    } else {
        for (int i=2; i<=x; i++){
            v[i+1]=v[i] + v[i-1];
            fibx = v[i+1];
        }
    }
    ofstream out("fib.out");
    out << fibx;
    return 0;
}
