//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasCommBase.h"

@interface APMidasCGICommunicator : APMidasCommBase
{
}

- (_Bool)processCgiRetError:(long long)arg1 innerError:(id)arg2 msg:(id)arg3;
- (_Bool)doCommParse:(id)arg1 resp:(id)arg2;
- (void)parseGetTokenResp:(id)arg1 resp:(id)arg2;
- (void)parseCommResp:(id)arg1 resp:(id)arg2;
- (void)callGetMbCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callGetAcctBalance:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callGetMcardStatus:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callGetImgVerifyCode:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callSaveCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callGetTokenCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callGetChannelCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callGoodsInfoCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callMonthInfoCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callBuyPageCgi:(CDUnknownBlockType)arg1 err:(CDUnknownBlockType)arg2 succ:(CDUnknownBlockType)arg3;
- (void)callNetCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;
- (void)callNetCgi:(id)arg1;

@end
