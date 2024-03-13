#include <stdio.h>

struct Mahasiswa
{
    /* data */
    const char *name;
    const char *adress;
    int age;
};
 int main(){
    struct Mahasiswa mhs1, mhs2;
    
    mhs1.name = "Dian";
    mhs1.adress = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.adress = "Surabaya";
    mhs2.age = 23;

    printf ("## Mahasiswa 1 ##\n");
    printf ("Nama : %s\n",mhs1.name);
    printf ("Alamat : %s\n", mhs1.adress);
    printf ("Umur : %d\n", mhs1.age);
    printf ("## Mahasiswa 2 ##\n");
    printf ("Nama : %s\n",mhs2.name);
    printf ("Alamat : %s\n", mhs2.adress);
    printf ("Umur : %d\n", mhs2.age);
    
 }
