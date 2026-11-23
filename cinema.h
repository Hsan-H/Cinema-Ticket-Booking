#ifndef CINEMA_H
#define CINEMA_H

#include <iostream>

using namespace std;

typedef struct elemenFilm *adrFilm;
typedef struct elemenBangku *adrBangku;

struct film
{
    string judul;
    int durasi; // dalam waktu menit
};

struct bangku
{
    string posisiBangku;
    string namaPenonton;
};

struct elemenFilm
{
    film info;
    adrFilm next;
    adrFilm prev;
    adrBangku bangkuPertama;
};

struct elemenBangku
{
    bangku info;
    adrBangku next;
    adrBangku prev;
};

struct ListFilm
{
    adrBangku first;
    adrBangku last;
};

void createListFilm(ListFilm &L);
bool isEmptyFilm(ListFilm L);
bool isEmptyMataKuliah(adrFilm p);
adrFilm createElemenFilm(string judul,int durasi);
adrBangku createElemenBangku(string posisiBangku, string namaPenonton);
void addFilm(ListFilm &L, adrFilm p);
void addBangku(adrFilm &p, adrBangku q);
void deleteFilm(ListFilm &L, adrFilm p);
void deleteBangku(adrFilm &p, adrBangku q);
adrFilm searchFilm(ListFilm L, string judul);
void displayList(ListFilm L);



#endif