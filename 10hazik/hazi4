#include <iostream>

using namespace std;

int main()
{
    int a, b, a2=0, szj, ujsz=0;
    cin>>a;
    b=a;
    while (a>0){
        szj=a%10;
        a/=10;
        if (szj%2==0){
            a2=a2*10+szj;
        }
    }
    while (a2>0){
        szj=a2%10;
        a2/=10;
        ujsz=ujsz*10+szj;
    }
    if (ujsz==b)
        cout<<"-1";
    else
        cout<<ujsz;

    return 0;
}
