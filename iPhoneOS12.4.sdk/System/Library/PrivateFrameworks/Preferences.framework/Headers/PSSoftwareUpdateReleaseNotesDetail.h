//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate>
{
    NSString *_releaseNotes;
}

@property(retain, nonatomic) NSString *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadView;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

