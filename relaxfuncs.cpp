//
// Created by Brian Dolle on 11/29/18.
//

#include "relaxfuncs.h"
void relax(double V[400][40]){
    for(int i=1; i<399; i++){
        for (int j=1; j<39; j++){
            V[i][j]=(V[i+1][j]+V[i-1][j]+V[i][j+1]+V[i][j-1])/4.0;
        }
    }
}

void update(double V[400][40], double Vnew[400][40]){
    for(int i=0; i<400; i++){
        for (int j=0; j<40; j++){
            Vnew[i][j]=V[i][j];
        }
    }
}

void setbc(double V[400][40]){

    // Sets top and bottom rows to 0.0 (Boundary Conditions)
    for(int i=1; i<399; i++){
        V[i][1]=0.0;
        V[i][38]=0.0;
    }

    // Sets top half of x=0 line
    for(int j=0; j<20; j++){
        V[0][j]=2.0;
    }

    //Sets bottom half of x=0 line
    for(int j=20; j<40; j++){
        V[0][j]=-2.0;
    }

    //Sets the x=39 line
    for(int j=0; j<40; j++){
        V[399][j]=0.0;
    }

    for (int i=1; i<399; i++){
        for (int j=1; j<39; j++){
            V[i][j]=0.42;
        }
    }
}