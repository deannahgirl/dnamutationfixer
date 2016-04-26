//
// Created by Deanna on 4/23/2016.
//

#ifndef DNA_CODON_H
#define DNA_CODON_H


#include <string>

class Codon {
private:

    std::string bases;
    std::string proteinName;
    Codon* prev;
    Codon* next;


public:
    //codon constructor
    Codon();
    //codon overloaded constructor
    Codon(std::string bases);
    Codon(std::string bases, std::string proteinName, Codon* prev, Codon* next);
    //codon destructor
    ~Codon();
    //returns pointer to first element of bases array
    std::string getBases();
    //pass in first element of bases array
    void setBases(std::string bases);
    std::string getProteinName();
    void setProteinName(std::string name);
    void setPrev(Codon* prev);
    Codon * getPrev();
    void setNext(Codon* next);
    Codon * getNext();
};


#endif //DNA_CODON_H
