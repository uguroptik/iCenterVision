//
//  iCvVideoSource.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 13.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>

////////////////////////////////////////////////////////////////////

// File includes:
#include "BGRAVideoFrame.h"
#include "CameraCalibration.hpp"

@protocol VideoSourceDelegate<NSObject>

-(void)frameReady:(BGRAVideoFrame) frame;

@end

@interface VideoSource : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate>
{
    
}

@property (nonatomic, retain) AVCaptureSession        * captureSession;
@property (nonatomic, retain) AVCaptureDeviceInput    * deviceInput;
@property (nonatomic, retain) id<VideoSourceDelegate>   delegate;

- (bool) startWithDevicePosition:(AVCaptureDevicePosition)devicePosition;
- (CameraCalibration) getCalibration;
- (CGSize) getFrameSize;

@end
