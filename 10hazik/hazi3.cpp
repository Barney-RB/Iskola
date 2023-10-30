#include <iostream>

using namespace std;

int main()
{
    //Egy számot úgy fordít meg, hogy a páratlan számjegyei után odaír az illető számjegynél eggyel kisebb számot.
    int a, b, c=0;
    cout << "Irj be egy legalabb 2 jegyu szamot: ";
    cin >> a;
    while (a > 0)
    {
        b=a%10;
        a=a/10;
        if (b%2==0)
        {
            c=c*10+b;
        }
        if (b%2!=0)
        {
            c=c*10+b;
            c=c*10+b-1;
        }
    }
    cout << "A kapott szam: " << c;
    return 0;
}
