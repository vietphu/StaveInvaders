//
//  SI_Alien.cpp
//  StaveInvaders
//
//  Created by Jerome on 22/03/2013.
//
//

#include "SI_Alien.h"

SI_Alien::SI_Alien(int NoteNumber)
: noteNumber(NoteNumber)
{
    
}

SI_Alien::~SI_Alien(){
    
}

void SI_Alien::setX(int newX){
    X_position = newX;
}

int SI_Alien::getX(){
    return X_position;
}

int SI_Alien:: NoteNumber(){
    return noteNumber;
}