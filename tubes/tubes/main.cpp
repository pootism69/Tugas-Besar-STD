#include <iostream>
#include "tubes.h"
using namespace std;

int main()
{
    listH h;
    listM m;
    infotype x;
    int maxs, mins, i, ID;
    adrm menuu, hapus;
    adrd haris;
    string hari,b;


    createListHari(h);
    createListMenu(m);

    adrd p = createElemenHari("1");
    insertHari(h,p);
    p = createElemenHari("2");
    insertHari(h,p);
    p = createElemenHari("3");
    insertHari(h,p);
    p = createElemenHari("4");
    insertHari(h,p);
    p = createElemenHari("5");
    insertHari(h,p);
    p = createElemenHari("6");
    insertHari(h,p);
    p = createElemenHari("7");
    insertHari(h,p);
    p = createElemenHari("8");
    insertHari(h,p);
    p = createElemenHari("9");
    insertHari(h,p);
    p = createElemenHari("10");
    insertHari(h,p);
    p = createElemenHari("11");
    insertHari(h,p);
    p = createElemenHari("12");
    insertHari(h,p);
    p = createElemenHari("13");
    insertHari(h,p);
    p = createElemenHari("14");
    insertHari(h,p);
    p = createElemenHari("15");
    insertHari(h,p);
    p = createElemenHari("16");
    insertHari(h,p);
    p = createElemenHari("17");
    insertHari(h,p);
    p = createElemenHari("18");
    insertHari(h,p);
    p = createElemenHari("19");
    insertHari(h,p);
    p = createElemenHari("20");
    insertHari(h,p);
    p = createElemenHari("21");
    insertHari(h,p);
    p = createElemenHari("22");
    insertHari(h,p);
    p = createElemenHari("23");
    insertHari(h,p);
    p = createElemenHari("24");
    insertHari(h,p);
    p = createElemenHari("25");
    insertHari(h,p);
    p = createElemenHari("26");
    insertHari(h,p);
    p = createElemenHari("27");
    insertHari(h,p);
    p = createElemenHari("28");
    insertHari(h,p);
    p = createElemenHari("29");
    insertHari(h,p);
    p = createElemenHari("30");
    insertHari(h,p);

  int pilihan = selectMenu();

  while (pilihan != 0) {
    switch (pilihan){
    case 1:
        i = 1;
        cout<<"berapa menu? "<<endl;
        int n;
        adrm q;
        cin>>n;
        while (i<= n){
            cout<<i<<endl;
            cout<<"nama : ";
            cin>>x.nama;
            cout<<endl;
            cout<<"ID : ";
            cin>>x.ID;
            cout<<endl;
            q = createElemenMenu(x);
            insertMenu(m,q);
            i++;

        }
        break;
    case 2:
        showM(m);
        break;
    case 3:
        show(h);
        break;


    case 4:
         b = maxM(h,m);
        cout<<"menu yang terbanyak muncul adalah : "<<b<<endl;
        break;
    case 5:
        b = minM(h,m);
        cout<<"menu yang paling sedikit muncul adalah : "<<b<<endl;
        break;
    case 6:
        cout<<"masukan berapa data yang diubah"<<endl;
         i = 1;
        cin>>n;
        while (i<= n){
            cout<<i<<endl;
            cout<<"hari ke berapa?"<<endl;
            cin>>hari;
            cout<<"masukan ID menu"<<endl;
            cin>>ID;
            cout<<endl;

            if (!searchMenuIDBool(m,ID)){
                cout<<"menu tidak ditemukan"<<endl;
            } else {
                insertRelasi(h,m,ID,hari,haris,menuu);
            }


            i++;
        }
        break;
    case 7:
        cout<<"berapa menu yang akan dihapus?"<<endl;
        n;
        cin>>n;
        cout<<endl;

         i = 1;
        while (i<= n ){
            cout<<i<<endl;
            cout<<"masukan ID : ";
            cin>>ID;
            if (!searchMenuIDBool(m,ID)){
                cout<<"menu tidak ditemukan"<<endl;
            } else{
                deleteMenu(m,h,ID,hapus);
            }


            cout<<endl;
            i++;

        }
        break;


    }
    pilihan = selectMenu();
  }
  cout<<"see you next time!"<<endl;
  return 0;








}
