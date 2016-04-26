//
// Created by Deanna on 4/23/2016.
//

#include "Codon.h"

using namespace std;

Codon::Codon() {
    //setting to 0
    this->bases = nullptr;
    this->proteinName = "";
    this->prev = nullptr;
    this->next = nullptr;

};

Codon::Codon(string bases) {
    //setting the propties to the parameterr of global varr.
    this->bases=bases;
}

Codon::Codon(string bases, std::string proteinName, Codon *prev, Codon *next) {
    //setting the propties to the parameterr of global varr.
    this->bases=bases;
    this->proteinName=proteinName;
    this->prev=prev;
    this->next=next;
}

Codon::~Codon() {
//not making any "new"
}

string Codon::getBases() {
    //return bases
    return this->bases;

}

void Codon::setBases(string bases) {
    //updating the propt. of codon to the parameter
    this->bases=bases;
}

std::string Codon::getProteinName() {
    //returning protein
    return this->proteinName;
}

void Codon::setProteinName(std::string name) {
    // updating the name of the codon
    this->proteinName=name;
}

void Codon::setPrev(Codon *prev) {
    //updating
    this->prev=prev;
}

Codon * Codon::getPrev() {
    //returning
    return this->prev;
}

void Codon::setNext(Codon *next) {
    //updating
    this->next=next;
}

Codon * Codon::getNext() {
    //returning
    return this->next;
}





















