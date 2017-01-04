//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AppThemeItem, NSCache, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ColorableImage : NSObject
{
    _Bool _refreshingColorStyle;
    _Bool _refreshingSkin;
    unsigned int _colorImagesCount;
    NSMutableSet *colorableImageNames;
    NSMutableArray *preDefineColorStyles;
    NSMutableArray *inTimeColorableImageNames;
    NSMutableArray *delayableColorableImageNames;
    NSMutableDictionary *_skinDic;
    NSMutableDictionary *_skinDicPad;
    NSString *_currentSkinName;
    NSCache *_dicInMemoryImages;
    NSMutableArray *_inMemoryImages;
    NSMutableArray *_inMemoryImagesBackup;
    long long _activityStyle;
    NSString *_actionsheetStyle;
    AppThemeItem *_currentAppThemeItem;
    NSMutableArray *_colorImageQueue;
}

+ (void)backgroudRefreshSkinStyle;
+ (struct SColorStyle)getBestColorStyleForColor:(unsigned long long)arg1 fixHue:(short)arg2;
+ (void)checkOnFirstTimeLauch;
+ (id)getPreDefineColorStyles;
+ (_Bool)isColorStyleEqual:(struct SColorStyle)arg1 b:(struct SColorStyle)arg2;
+ (struct SColorStyle)getSystemBlueColorStyle;
+ (unsigned long long)getColorByCurrentColorSyleForColor:(unsigned long long)arg1;
+ (unsigned long long)getColorByColorSyle:(struct SColorStyle)arg1;
+ (unsigned long long)getColorByColorSyle:(struct SColorStyle)arg1 forColor:(unsigned long long)arg2;
+ (struct SColorStyle)getColorStyleByColor:(unsigned long long)arg1;
+ (struct SColorStyle)decodeColorStyle:(id)arg1;
+ (id)encodeColorStyle:(struct SColorStyle)arg1;
+ (void)refreshColorStyle;
+ (struct SColorStyle)getCurrentColorStyle;
+ (id)imageNamed:(id)arg1;
+ (void)backgroundApplyNewColorStyle;
+ (void)cleanMemoryCache;
+ (long long)subStringCount:(id)arg1 subStr:(id)arg2;
+ (id)getUniqueNameByColorStyle:(struct SColorStyle)arg1 skinName:(id)arg2;
+ (id)sharedColorableImage;
@property unsigned int colorImagesCount; // @synthesize colorImagesCount=_colorImagesCount;
@property(retain) NSMutableArray *colorImageQueue; // @synthesize colorImageQueue=_colorImageQueue;
@property _Bool refreshingSkin; // @synthesize refreshingSkin=_refreshingSkin;
@property _Bool refreshingColorStyle; // @synthesize refreshingColorStyle=_refreshingColorStyle;
@property(retain) AppThemeItem *currentAppThemeItem; // @synthesize currentAppThemeItem=_currentAppThemeItem;
@property(retain) NSString *actionsheetStyle; // @synthesize actionsheetStyle=_actionsheetStyle;
@property long long activityStyle; // @synthesize activityStyle=_activityStyle;
@property(retain) NSMutableArray *inMemoryImagesBackup; // @synthesize inMemoryImagesBackup=_inMemoryImagesBackup;
@property(retain) NSMutableArray *inMemoryImages; // @synthesize inMemoryImages=_inMemoryImages;
@property(retain) NSCache *dicInMemoryImages; // @synthesize dicInMemoryImages=_dicInMemoryImages;
@property(retain) NSString *currentSkinName; // @synthesize currentSkinName=_currentSkinName;
@property(retain) NSMutableDictionary *skinDicPad; // @synthesize skinDicPad=_skinDicPad;
@property(retain) NSMutableDictionary *skinDic; // @synthesize skinDic=_skinDic;
@property(retain) NSMutableArray *delayableColorableImageNames; // @synthesize delayableColorableImageNames;
@property(retain) NSMutableArray *inTimeColorableImageNames; // @synthesize inTimeColorableImageNames;
@property(retain) NSMutableArray *preDefineColorStyles; // @synthesize preDefineColorStyles;
@property(retain) NSMutableSet *colorableImageNames; // @synthesize colorableImageNames;
- (void).cxx_destruct;
- (void)innerRefreshSkinStyle;
- (void)refreshSkinStyle;
- (long long)getCurrentActivityStyle;
- (int)getCurrentColorType;
- (struct CGSize)getPadCGSizeValueForKey:(id)arg1;
- (float)getPadFloatValueForKey:(id)arg1;
- (id)getPadNumberColorForKey:(id)arg1;
- (id)getPadColorForKey:(id)arg1;
- (struct CGSize)getCGSizeValueForKey:(id)arg1;
- (float)getFloatValueForKey:(id)arg1;
- (id)getNumberColorForKey:(id)arg1;
- (id)getColorForKey:(id)arg1;
- (void)backgroundConvertDelayableImages:(id)arg1;
- (void)onBackgroundApplyNewColorStyleFinish:(id)arg1;
- (void)_backgroundApplyNewColorStyle;
- (void)_deleteCurrentSkinColorStyles;
- (void)_deleteAllColorStyles;
- (void)asynCreateColorImagesWithQueue:(id)arg1;
- (void)createColorImageNamed:(id)arg1 colorStyle:(struct SColorStyle)arg2;
- (void)createColorImages;
- (_Bool)writeImage:(id)arg1 toFileAtPath:(id)arg2;
- (id)origImageWithContentsOfFile:(id)arg1;
- (id)origImageName:(id)arg1;
- (id)_imageNamed:(id)arg1;
- (id)_imageNamedFromFile:(id)arg1;
- (void)_loadPadSkinColorStyle;
- (void)_loadSkinColorStyle;
- (id)translateSizeStr:(id)arg1;
- (id)translateFloatStr:(id)arg1;
- (id)translateColorStr:(id)arg1;
- (id)styleOfString:(id)arg1 modelString:(id)arg2 type:(long long)arg3;
- (id)styleOfString:(id)arg1 modelString:(id)arg2;
- (void)_defaultColorStyle;
- (void)removeMyMusicIconFromColorable;
- (void)_loadFromFile;
- (id)_getValueByKey:(id)arg1 fromContent:(id)arg2;
- (id)init;

@end

