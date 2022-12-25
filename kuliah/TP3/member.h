#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

const int Max = 6;

struct member {
    string IDNumber;
    float Poin[Max];
};

void inputData_1302213026(member &MB);
float ratarata_1302213026(member MB);
void showData_1302213026(member MB);

#endif // MEMBER_H_INCLUDED
