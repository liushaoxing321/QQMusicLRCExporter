//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDButton.h"

@class IDModel, NSString;

@interface IDFilterButton : IDButton
{
    IDModel *_tooltipTextModel;
}

@property(readonly, nonatomic) IDModel *tooltipTextModel; // @synthesize tooltipTextModel=_tooltipTextModel;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) long long tooltipTextId;
@property(copy, nonatomic) NSString *tooltipText;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2 imageModel:(id)arg3 previewModel:(id)arg4 focusAction:(id)arg5 selectAction:(id)arg6;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 tooltipModel:(id)arg3 imageModel:(id)arg4 targetModel:(id)arg5 actionId:(long long)arg6 focusId:(long long)arg7;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2 tooltipModel:(id)arg3 imageModel:(id)arg4 targetModel:(id)arg5 actionId:(long long)arg6 focusId:(long long)arg7;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2 tooltipModel:(id)arg3 imageModel:(id)arg4 previewModel:(id)arg5 focusAction:(id)arg6 selectAction:(id)arg7;

@end

