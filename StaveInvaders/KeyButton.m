//
//  KeyButton.m
//  StaveInvaders
//
//  Created by Jerome on 25/03/2013.
//
//

#import "KeyButton.h"

@implementation KeyButton

-(id)initialise : (int) midiNoteNum
{
    if ([super init]) {
        
        midiNoteNumber = midiNoteNum;
    }
    return self;
}
@end
