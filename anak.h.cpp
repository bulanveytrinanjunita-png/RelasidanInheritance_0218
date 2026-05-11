#include <iostream>
#include <string>

#ifndef ANAK_H
#define ANAK_H

class anak
{
public:
    std::string nama;

    anak(std::string pNama) : nama(pNama)
    {
        std::cout << "Nama anak: " << nama << "\" ada \n";
    }

    ~anak()
    {
        std::cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif