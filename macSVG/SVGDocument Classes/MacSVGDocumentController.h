//
//  MacSVGDocumentController.h
//  macSVG
//
//  Created by Douglas Ward on 10/2/13.
//
//

#import <Cocoa/Cocoa.h>

@interface MacSVGDocumentController : NSDocumentController <NSOpenSavePanelDelegate>


- (IBAction)saveDocument:(id)sender;
- (IBAction)saveDocumentAs:(id)sender;

@end
