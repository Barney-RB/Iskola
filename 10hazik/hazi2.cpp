#include <iostream>

using namespace std;

int main()
{
    int i, n, a, min=99999, max=-99999;
    cout << "n=";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cin >> a;
        if (a<min)
        {
            min=a;
        }
        if (a>max)
        {
            max=a;
        }
    }
    while (max != min)
{
    if (max>min)
    {
        max = max-min;
    }
    else
    {
        min = min-max;
    }
}
cout << "A minimum es maximum legnagyobb kozos osztoja: " << max;
return 0;
}
