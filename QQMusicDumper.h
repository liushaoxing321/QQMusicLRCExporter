//
//  QQMusicDumper.h
//  QQMusicHelper
//
//  Created by Zhang Naville on 15/4/26.
//
//

#import <Foundation/Foundation.h>
@interface QQMusicDumper : NSObject
+(void)Dump;
+(NSString*)ConvertLRCTime:(long long)microsecond;

@end
