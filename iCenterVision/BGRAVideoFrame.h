//
//  BGRAVideoFrame.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 14.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#ifndef iCenterVision_BGRAVideoFrame_h
#define iCenterVision_BGRAVideoFrame_h

#include <cstddef>

// A helper struct presenting interleaved BGRA image in memory.
struct BGRAVideoFrame {
    
    size_t width;
    size_t height;
    size_t stride;
    
    unsigned char * data;
    
};

#endif
