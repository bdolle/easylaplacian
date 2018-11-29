// This code simulates electric potential on a 40x400 rectangular space 
// using Laplace's equation. The boundary of the rectangle are all 
// held at a constant 0.0 value, except for the right wall where the
// top half is held at constant charge density of 2.0 and bottom half
// at -2.0.

#include <iostream>
#include <fstream>
#include "relaxfuncs.h"

using namespace std;

int main() {

    ofstream lpcfile;
    lpcfile.open("Laplace.csv",ios::app);

    // defines my arrays
    double V[400][40];
    double Vnew[400][40];

    // populates my initial array V with values
    setbc(V);
    //cout << V[3][7] << ", " << V[0][4] << ", " << V[4][0] << endl;

    for(int k=0; k<100000; k++) {
        relax(V);
        update(V,Vnew);
    }

    for (int i=0; i<40; i++){
        for (int j=0; j<400; j++){
            lpcfile << Vnew[j][i] << ",";
        }
        lpcfile << endl;
    }

    lpcfile.close();
    return 0;
}