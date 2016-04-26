//
// Created by Deanna on 4/23/2016.
//

#include <iostream>
#include "Strand.h"
using namespace std;

Strand::Strand() {
    //calling the contrustor
    this->startCodon = new Codon();
    this->currentCodon = startCodon;
    this->numOfCodons = 0;
    this->isValid = false;
}

Strand::~Strand() {

}

void Strand::setStartCodon(Codon *startCodon) {
    this->startCodon=startCodon;
}

Codon *Strand::getStartCodon() {
    return this->startCodon;
}

void Strand::setCurrentCodon(Codon *currentCodon) {
    this->currentCodon=currentCodon;
}

Codon *Strand::getCurrentCodon() {
    return this->currentCodon;
}

void Strand::setNumOfCodons(int numOfCodons) {
    this->numOfCodons=numOfCodons;
}

int Strand::getNumOfCodons() {
    //return 0;
    return this->numOfCodons;
}
//user input in here
//spliting into peiecees of 3(which is a codon)
Strand::Strand(std::string uInput) {
    //calling the contrustor
    this->startCodon = new Codon("test");
    this->currentCodon = startCodon;
    this->numOfCodons = 0;
    this->isValid = false;
    //checking the input size
    int uInputleng = uInput.size();
    //bool to see if input is /3
    if (uInputleng % 3 == 0){
        //if is then it will be true
        this->isValid=true;
    }else {
        //if not then false
        this->isValid = false;
    }
    if (this->isValid){
        //for loop
        string bases;
        for (int i=0; i<uInputleng; i+=3){
            bases = uInput.substr(i,3);
            //adding on a codon
            this->addCodon(bases);
        }
    }
}


//passing to new Codon, linked list
void Strand::addCodon(string bases) {
    //create element, created on heap
    Codon* a = new Codon (bases);
    //currents next to new element
    this->getCurrentCodon()->setNext(a);
    //new elements next to null
    a->setNext(nullptr);
    //new elements prev is current
    a->setPrev(this->getCurrentCodon());
    //new element is current codon
    this->setCurrentCodon(a);
}

std::string Strand::toString() {
    Codon* currentCodon = this->getStartCodon();
    while (currentCodon != nullptr){
        cout << currentCodon->getBases() << ", ";
        currentCodon = currentCodon->getNext();
    }
}





















