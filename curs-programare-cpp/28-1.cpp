#include <bits/stdc++.h>
using namespace std;

int main() {
    // declaram variabilele necesare
    int x = 7;
    int *pointer_var, *pointer_vec;
    int v[] = {1, 3, 5, 7};
    struct Catalog {
        string nume;
        int varsta;
        double medie;
    } Elev, *pointer_struct;

    Elev.nume = "Andrei";
    Elev.varsta = 16;
    Elev.medie = 9.66;

    // initializam pointerii
    pointer_var = &x; 
    pointer_vec = v; // primul element al lui v[]
    pointer_struct = &Elev;

    *pointer_var = 9; // schimba valoarea var
    // se folosesc paranteze pentru ca restul 
    // operatorilor au prioritate inaintea *
    int elem2 = *(pointer_vec + 1);
    int elem3 = *(pointer_vec + 2);
    // accesarea struct varianta 1:
    (*pointer_struct).nume = "Cristi";
    // accesarea struct varianta 2:
    pointer_struct->varsta = 17;

    return 0;
}
