//
// Created by Brian Dolle on 11/29/18.
//

#ifndef EASYLAPLACE_RELAXFUNCS_H
#define EASYLAPLACE_RELAXFUNCS_H


void relax(double V[400][40]);
void update(double V[400][40],double Vnew[400][40]);
void setbc(double V[400][40]);


#endif //EASYLAPLACE_RELAXFUNCS_H