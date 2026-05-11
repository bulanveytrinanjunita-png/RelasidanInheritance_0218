#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu *varibu = new ibu("rani");
    ibu *varibu2 = new ibu("sari");
    anak *varAnak1 = new anak("tono");
    anak *varAnak2 = new anak("tiara");
    anak *varAnak3 = new anak("dini");

    varibu->tambahanAnak(varAnak1);
    varibu->tambahanAnak(varAnak2);
    varibu2->tambahanAnak(varAnak3);
}