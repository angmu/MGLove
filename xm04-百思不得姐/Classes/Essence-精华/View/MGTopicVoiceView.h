//
//  MGTopicVoiceView.h
//  xm04-百思不得姐
//
//  Created by 穆良 on 16/3/28.
//  Copyright © 2016年 穆良. All rights reserved.
// 声音帖子 中间内容

#import <UIKit/UIKit.h>
@class MGTopic;
@interface MGTopicVoiceView : UIView

/** 帖子中间显示图片的控件 */
+ (instancetype)voiceView;

/** 帖子数据模型 */
@property (nonatomic, strong) MGTopic *topic;

@end
