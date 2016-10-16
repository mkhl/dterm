//  Copyright (c) 2007-2010 Decimus Software, Inc. All rights reserved.


@interface DTRunManager : NSObject {
	NSString* workingDirectory;
	NSArray* selectedURLStrings;
	
	NSString* command;
	NSTextStorage* resultsStorage;
	NSAttributedString* trailingWhitespace;
	NSMutableData* unprocessedResultsData;
	NSMutableDictionary* currentAttributes;
	NSUInteger cursorLoc;
	
	NSTask* task;
	NSFileHandle* stdOut;
	NSFileHandle* stdErr;
}

@property NSString* workingDirectory;
@property NSArray* selectedURLStrings;
@property (readonly) NSString* command;

@property (readonly) NSTextStorage* resultsStorage;
- (void)setDisplayFont:(NSFont*)font;
- (void)setDisplayColor:(NSColor*)color;

@property (readonly) NSTask* task;

+ (NSString*)shellPath;
+ (NSArray*)argumentsToRunCommand:(NSString*)command;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithWD:(NSString*)_wd selection:(NSArray*)_selection command:(NSString*)_command NS_DESIGNATED_INITIALIZER;
- (IBAction)cancel:(id)sender;

@end
