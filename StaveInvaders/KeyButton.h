//
//  KeyButton.h
//  StaveInvaders
//
//  Created by Jerome on 25/03/2013.
//
//

#import <UIKit/UIKit.h>

@interface KeyButton : UIButton
{
    int midiNoteNumber;
}
-(id)initialise : (int) midiNoteNum;



@end
