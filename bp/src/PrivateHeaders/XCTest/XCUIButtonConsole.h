//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class XCUIScreen;

@interface XCUIButtonConsole : NSObject
{
    XCUIScreen *_screen;
}

- (void).cxx_destruct;
@property(readonly) __weak XCUIScreen *screen; // @synthesize screen=_screen;
- (void)_silentlyPressButton:(unsigned long long)arg1 forDuration:(double)arg2;
- (void)pressButton:(unsigned long long)arg1 forDuration:(double)arg2;
- (void)pressButton:(unsigned long long)arg1;
- (id)initWithScreen:(id)arg1;

@end

