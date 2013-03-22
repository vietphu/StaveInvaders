//
//  SI_Alien.h
//  StaveInvaders
//
//  Created by Jerome on 22/03/2013.
//
//

#ifndef __StaveInvaders__SI_Alien__
#define __StaveInvaders__SI_Alien__

/** Alien is an object that contains a note number and an X position.
 
 The notenumber is read only after the class is constructed
 */
#include <iostream>

class SI_Alien
{
public:
    SI_Alien(int NoteNumber);
    ~SI_Alien();
    
    void setX(int newX);
    int getX();
    
    int NoteNumber();
    
private:
    int X_position;
    const int noteNumber;
};

#endif /* defined(__StaveInvaders__SI_Alien__) */
