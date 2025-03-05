// FL4-CS131-Class-3-5.cpp : This file contains the 'main' function. 

#include <iostream>
using namespace std;

void doubleThis(int& num) {
    num *= 2;
}

int main()
{
    int fibs[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21 };
    int* begin{ fibs };
    cout << begin << "\n";
    for (int i = 0; i < 1000; i++) {
        begin++;
        cout << *begin << "\n";
    }
    cout << begin << "\n";
    cout << *begin << "\n";

    // Dynamic - allocated on the heap (as opposed to on the stack)
    int* p1 = new int[25];
    p1[0] = 0;
    p1[1] = 1;
    p1[2] = 1;
    p1[20] = 'o';
    p1[21] = 'f';
    p1[22] = ' ';
    p1[23] = 'c';
    p1[24] = 'o';

    for (int i = 0; i <= 24; i++) {
        cout << (char)p1[i];
    }

    int* p2 = new int[10000];
    delete[] p2;

    int* p3 = new int;
    int i = 19;
    p3 = &i;
    int** p4;
    p4 = &p3;
    cout << endl << **p4 << endl;
    delete p3;

    int k = 30;
    shared_ptr<int> p6(&k);

    weak_ptr<int> p7(p6);

    // unique_ptr<int> p5(&i);
    // cout << endl << p5 << endl;
}