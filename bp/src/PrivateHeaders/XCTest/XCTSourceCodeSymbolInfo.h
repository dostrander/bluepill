//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSString, XCTSourceCodeLocation;

@interface XCTSourceCodeSymbolInfo : NSObject <NSSecureCoding>
{
    NSString *_imageName;
    NSString *_symbolName;
    XCTSourceCodeLocation *_location;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) XCTSourceCodeLocation *location; // @synthesize location=_location;
@property(readonly, copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, copy) NSString *imageName; // @synthesize imageName=_imageName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImageName:(id)arg1 symbolName:(id)arg2 location:(id)arg3;

@end

