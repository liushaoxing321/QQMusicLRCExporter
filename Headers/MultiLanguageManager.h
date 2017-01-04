//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MultiLanguageManager : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)scanRepeatFile:(id)arg1 repeatKey:(id)arg2;
- (_Bool)scanRepeatFile:(id)arg1 noRepeatName:(id)arg2;
- (_Bool)autoTransLate:(id)arg1 en_fileName:(id)arg2 hant_Name:(id)arg3;
- (_Bool)needTransLate:(id)arg1 en_fileName:(id)arg2;
- (void)createNoRepeatStringFile;
- (void)refreshLanguage;
- (id)buildDictionary:(id)arg1;
- (void)copyStringToPath:(id)arg1;
- (id)getCurrentLanguageBundle;
- (void)setAppCurrentLanguage:(long long)arg1;
- (_Bool)isEnglishLanguageDefinitionType;
- (long long)getAppCurrentLanguageDefinitionType;
- (id)getAppCurrentLanguage;
- (id)getSystemCurrentLanguage;
- (id)localizedStringForKey:(id)arg1 andComment:(id)arg2;

@end

