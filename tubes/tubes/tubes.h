#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define menus(p) (p)->menus
#define first(l) ((l).first)

struct menu {
    string nama;
    int ID;
};

typedef menu infotype;

typedef struct elmenu *adrm;


struct elmenu {
    infotype info;
    adrm next;

};

typedef struct elmhari *adrd;

struct elmhari {
    string info;
    adrd next;
    adrm menus;
};

struct listM {
    adrm first;
};

struct listH{
    adrd first;
};

void createListHari(listH &h);
adrd createElemenHari(string x);
void createListMenu(listM &m);
adrm createElemenMenu(infotype x);
void searchMenuID(listM m, int ID, adrm &p);
bool searchMenuIDBool(listM m, int ID);
adrd searchDay(listH h, string day);
void insertMenu(listM &m, adrm p);
void insertHari(listH &h, adrd p);
void insertRelasi(listH h,listM m, int ID, string day, adrd &p, adrm &q);
void deleteMenu(listM &m, listH &h, int ID, adrm &q);
void jumData(listM m, listH h);
int  jumMenu(listM m);
string minM(listH h,listM m);
string maxM(listH h, listM m);
void showM(listM m);
void showH(listH h);
void show(listH h);
int selectMenu();








#endif // TUBES_H_INCLUDED
