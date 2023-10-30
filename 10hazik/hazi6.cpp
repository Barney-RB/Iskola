#include <iostream>

using namespace std;

int main()
{
    int i, n, lnko, lkkt;
    cout << "Adj meg egy 5-nel nagyobb szamot: ";
    cin >> n;
    int a[n];
    for (i=0; i<n; i++){
        cout << "a["<<i<<"]=";
        cin >> a[i];
    }
    int aux, p=0, k=0;
    do
    {
        p=0;
        for (i=0; i<n-1-k; i++)
        {
            if (a[i]>a[i+1])
            {
                aux=a[i+1];
                a[i+1]=a[i];
                a[i]=aux;
                p=1;
            }
        }
        k++;
    }
    while(p==1);
    lkkt=a[2]*a[n-2];
    while (a[2]!=a[n-2]){
        if (a[n-2]>a[2]) {
            a[n-2]=a[n-2]-a[2];
        }
        else {
            a[2]=a[2]-a[n-2];
        }
    }
    lkkt=lkkt/a[n-2];
    cout << lkkt - a[n-2];
    return 0;
}
