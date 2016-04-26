//
// Created by Deanna on 4/23/2016.
//

#ifndef DNA_STRAND_H
#define DNA_STRAND_H


#include "Codon.h"

class Strand {
    private:
        Codon * currentCodon;
        int numOfCodons;
        Codon * startCodon;
        bool isValid;


    public:
        //constructor
        Strand();
        Strand(std::string uInput);
        //deconstructor
        ~Strand();
        void setStartCodon(Codon * startCodon);
        Codon * getStartCodon();
        void setCurrentCodon(Codon * currentCodon);
        Codon * getCurrentCodon();
        void setNumOfCodons(int numOfCodons);
        int getNumOfCodons();
        void addCodon(std::string bases);
        std::string toString();
};


#endif //DNA_STRAND_H
