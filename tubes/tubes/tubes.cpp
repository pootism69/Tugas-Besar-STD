#include "tubes.h"

void createListHari(listH &h){
    first(h) = NULL;
}
adrd createElemenHari(string x){
    adrd p = new elmhari;
    info(p) = x;
    next(p) = NULL;
    menus(p) = NULL;
    return p;
}
void createListMenu(listM &m){
    first(m) = NULL;
}
adrm createElemenMenu(infotype x){
    adrm p = new elmenu;
    info(p) = x;
    next(p) = NULL;


    return p;
}
void searchMenuID(listM m, int ID, adrm &p){
    p = first(m);
    while (info(p).ID != ID){
        p = next(p);
        }
    }
bool searchMenuIDBool(listM m, int ID){
    adrm p = first(m);
    while (p!=NULL){
        if (info(p).ID == ID){
            return true;
        }
        p = next(p);
        }
        return false;
    }

adrd searchDay(listH h, string day){
    adrd p = first(h);
    while (info(p) != day){
        p = next(p);
    }
    return p;
}
void insertMenu(listM &m, adrm p){
    if(first(m) == NULL){
        first(m) = p;
    } else {
        adrm q = first(m);
        while (next(q)!=NULL){
            q = next(q);
        }
        next(q) = p;
    }
}
void insertHari(listH &h, adrd p){
    if(first(h) == NULL){
        first(h) = p;
    } else {
        adrd q = first(h);
        while (next(q)!=NULL){
            q = next(q);
        }
        next(q) = p;
    }
}
void insertRelasi(listH h, listM m, int ID, string day, adrd &p, adrm &q){
    searchMenuID(m,ID,q);
    p = searchDay(h,day);
    menus(p) = q;
    }

void deleteMenu(listM &m, listH &h, int ID, adrm &q){
        searchMenuID(m,ID,q);
        adrm x = first(m);
        if (x == q){

        } else{
        while (next(x)!=q){
            x = next(x);
        }
        }
        if (q == first(m)){
            first(m) = next(q);
            next(q) = NULL;
        } else if (next(q) == NULL){
            next(x) = NULL;
        } else {
            next(x) = next(q);
            next(q) = NULL;
        }

        adrd p = first(h);
        while(p!=NULL){
            if(menus(p)==q){
                menus(p)= NULL;
            }
            p = next(p);
        }



    }

void jumData(listM m, listH h){
    int totH = 0;
    int totM = 0;

    adrd p = first(h);
    while (p!= NULL){
        totH++;
        p = next(p);
    }
    adrm q = first(m);
    while (q!=NULL){
        totM++;
        q = next(q);
    }
    cout<<"jumlah menu : "<<totM<<endl;
    cout<<"jumlah Hari : "<<totH<<endl;
}
int  jumMenu(listM m){
    int totM = 0;
    adrm q = first(m);
    while (q!=NULL){
        totM++;
        q = next(q);
    }
    return totM;
}
string minM(listH h,listM m){
    int mins = 999999999;
    int tot;
    adrm p = first(m);
    adrm x = first(m);
    while (p != NULL) {
        tot = 0;
        adrd q = first(h);
        while (q != NULL) {
            if (menus(q) == p){
                tot++;
            }
            q = next(q);
        }


        if (tot < mins){
                mins = tot;
                x = p;

        }
         p = next(p);

    }
    return info(x).nama;

}
string maxM(listH h, listM m){
    int maxs = 0;
    int tot;
    adrm p = first(m);
    adrm x = first(m);
    adrd q;
    while (p != NULL) {
        tot = 0;
        q = first(h);
        while (q != NULL) {
            if (menus(q) == p){
                tot++;
            }
            q = next(q);
        }


        if (tot > maxs){
                maxs = tot;
                x = p;
        }
         p = next(p);

    }
    return info(x).nama;

}
void showM(listM m){
    adrm p = first(m);
    int i = 1;
    while (p!=NULL){
        cout<<"menu "<<i<<" : "<<info(p).nama<<endl;
        cout<<"ID : "<<info(p).ID<<endl;
        i++;
        p = next(p);
    }
}
void showH(listH h){
    adrd p = first(h);
    cout<<"hari : "<<endl;
    while (p!= NULL){
        cout<<info(p)<<endl;
        p = next(p);
    }
}
void show(listH h){
    adrd p = first(h);
    cout<<"hari : "<<endl;
    while (p!= NULL){
        cout<<info(p);
        cout<<"(menu : ";
        if (menus(p) == NULL){
            cout<<"tidak ada";
        } else {
            cout<<info(menus(p)).nama;
        }
        cout<<"   ID : ";
        if(menus(p) == NULL){
            cout<<"tidak ada";
        } else {
            cout<<info(menus(p)).ID;
        }
        cout<<")"<<endl;
        p = next(p);

    }
}
int selectMenu(){
    cout<<"=====Menu======"<<endl;
    cout<<"1.Tambah menu baru"<<endl;
    cout<<"2.tampilkan menu"<<endl;
    cout<<"3.tampilkan semua hari"<<endl;
    cout<<"4.output menu yang paling sering keluar "<<endl;
    cout<<"5.output menu yang paling jarang muncul"<<endl;
    cout<<"6.masukan/ganti menu ke hari"<<endl;
    cout<<"7.hapus menu"<<endl;

    cout<<"0.Keluar"<<endl;

    int input = 0;
    cin>>input;
    return input;
}
