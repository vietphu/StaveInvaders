//
//  KeyButton.h
//  StaveInvaders
//
//  Created by Jerome on 25/03/2013.
//
//

#import <UIKit/UIKit.h>

/** KeyButton is a subclass of UIButton
 it is initialised with a MidiNumber
 */
@interface KeyButton : UIButton
{
    int midiNoteNumber;
}
-(id)initialise : (int) midiNoteNum;

-(int)MidiNoteNumber;

@end
