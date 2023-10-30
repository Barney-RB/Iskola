#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    int N;
    in>>N;
    int m[N][N], K=0, Ny=0;

    for (int sor=0; sor<N; sor++){
        for (int oszlop=0; oszlop<N; oszlop++){
            in >> m[sor][oszlop];

            if (sor < oszlop && sor+oszlop > N-1) {
                K+=m[sor][oszlop];
            } else if (sor > oszlop && sor+oszlop < N-1){
                Ny+=m[sor][oszlop];
            }
            //cout << K << " " << Ny << endl;
        }
    }
    //cout << K << endl << Ny << endl;

    /*int lkkt;
    lkkt = K*Ny;
    cout << lkkt << endl;*/

    while (K!=Ny){
        if (K > Ny){
            K-=Ny;
        }
        else {
            Ny-=K;
        }

    }

    /* cout << K << endl;
    //lkkt /= K;*/

    ofstream out("lnko.out");
    out << K;

    return 0;
}
