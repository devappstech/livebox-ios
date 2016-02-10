//
//  PLMovieViewController.h
//  PLPlayerKit
//
//  Created by 0day on 14/11/13
//  Copyright (c) 2012 qgenius. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const PLMovieParameterMinBufferedDuration;    // Float, default 0.2s for local video, 2.0s for streaming video
extern NSString * const PLMovieParameterMaxBufferedDuration;    // Float, default 0.4s for local video, 4.0s for streaming video
extern NSString * const PLMovieParameterDisableDeinterlacing;   // BOOL

typedef NS_ENUM(NSUInteger, PLVideoPlayerControlMode) {
    PLVideoPlayerControlModeNone,
    PLVideoPlayerControlModeBlack,
    PLVideoPlayerControlModeDefault = PLVideoPlayerControlModeBlack
};

@class PLMovieDecoder;
@interface PLVideoPlayerViewController : UIViewController

+ (instancetype)videoPlayerViewControllerWithContentURL:(NSURL *)url
                                             parameters:(NSDictionary *)parameters;

@property (nonatomic, readonly, getter=isPlaying) BOOL playing;
@property (nonatomic, assign) PLVideoPlayerControlMode controlMode; // default as PLVideoPlayerControlModeDefault

- (void)play;
- (void)pause;

@end
