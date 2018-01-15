//
//  PPSktickerKeyboard.h
//  PPStickerKeyboard
//
//  Created by Vernon on 2018/1/14.
//  Copyright © 2018年 Vernon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PPStickerKeyboard;
@class PPEmoji;

@protocol PPStickerKeyboardDelegate <NSObject>

- (void)stickerKeyboard:(PPStickerKeyboard *)stickerKeyboard didClickEmoji:(PPEmoji *)emoji;
- (void)stickerKeyboardDidClickDeleteButton:(PPStickerKeyboard *)stickerKeyboard;
- (void)stickerKeyboardDidClickSendButton:(PPStickerKeyboard *)stickerKeyboard;

@end

@interface PPStickerKeyboard : UIView

@property (nonatomic, weak) id<PPStickerKeyboardDelegate> delegate;

@end
