#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    int N;
    in>>N;
    int m[N][N], felett=0, alatt=0;

    for (int sor=0; sor<N; sor++){
        for (int oszlop=0; oszlop<N; oszlop++){
            in >> m[sor][oszlop];

            if (sor < oszlop){
                felett+=m[sor][oszlop];
            } else if (sor > oszlop){
                alatt+=m[sor][oszlop];
            }
            // cout << felett << " " << alatt << endl;
        }
    }
    //cout << felett << endl << alatt << endl;
    int lkkt;

    lkkt = felett*alatt;
    //cout << lkkt << endl;
    while (felett!=alatt){
        if (felett > alatt){
            felett-=alatt;
        }
        else {
            alatt-=felett;
        }

    }
    // cout << felett << endl;
    lkkt /= felett;

    ofstream out("lkkt.out");
    out << lkkt;
    return 0;
}
