#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("oszto.out");
    int N, max=-999999, atlag=0;
    in >> N;
    int v[N];
    for (int i=0; i<N; i++){
        in >> v[i];
        atlag+=v[i];
        if (max < v[i])
        {
            max = v[i];
        }
    }

    atlag/=N;

    //cout << atlag << endl;

    int ujsz, hatvany=1, x=max;
    while (x>0)
    {
        x/=10;
        hatvany*=10;
    }

    ujsz = atlag*hatvany+max;

    //cout << ujsz;
    x=ujsz-1;
    int lno=1;

    for (x=ujsz-1; x>0; x--)
    {
        if(ujsz%x==0)
        {
            lno=x;
            break;
        }
    }

    out << lno;
    return 0;
}
