//
//  CameraCalibration.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 14.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#ifndef __iCenterVision__CameraCalibration__
#define __iCenterVision__CameraCalibration__

// file includes
#include "GeometryTypes.hpp"

/*
 * A camera calibration class that stores instrinsic matrix and distorsion vector.
 */

class CameraCalibration {

public:
    CameraCalibration();
    CameraCalibration(float fx, float fy, float cx, float cy);
    CameraCalibration(float fx, float fy, float cx, float cy, float distorsionCoeff[4]);
    
    void getMatrix34(float cparam[3][4]) const;
    
    const Matrix33& getInstrinsic() const;
    const Vector4& getDistorsion() const;
    
private:
    Matrix33 instrinsic;
    Vector4 distorsion;
    
};

#endif /* defined(__iCenterVision__CameraCalibration__) */
