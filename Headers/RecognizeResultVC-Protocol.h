//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RecognizeResultVC, RecognizeSession, RecognizedSong;

@protocol RecognizeResultVC <NSObject>
- (void)recognizeResultVC:(RecognizeResultVC *)arg1 feedBackWithSession:(RecognizeSession *)arg2;
- (void)recognizeResultVC:(RecognizeResultVC *)arg1 recognizeSession:(RecognizeSession *)arg2 chooseResult:(RecognizedSong *)arg3;
- (void)recognizeResultVC:(RecognizeResultVC *)arg1 retryWithSession:(RecognizeSession *)arg2;
- (void)recognizeResultVC:(RecognizeResultVC *)arg1 pushWebView:(RecognizedSong *)arg2;
- (void)recognizeResultVC:(RecognizeResultVC *)arg1 switchToRecognizing:(_Bool)arg2;
- (int)vcType;
- (NSString *)getAllVCType;
@end

