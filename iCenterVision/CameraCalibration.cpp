//
//  CameraCalibration.cpp
//  iCenterVision
//
//  Created by Sertaç Anadollu on 14.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#include "CameraCalibration.hpp"

CameraCalibration::CameraCalibration(){

}

CameraCalibration::CameraCalibration(float fx, float fy, float cx, float cy) {
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            instrinsic.mat[i][j] = 0;
        }
    }
    
    
    instrinsic.mat[0][0] = fx;
    instrinsic.mat[1][1] = fy;
    instrinsic.mat[0][2] = cx;
    instrinsic.mat[1][2] = cy;
    
    for (int i=0; i<4; i++) {
        distorsion.data[i] = 0;
    }
    
    
}

CameraCalibration::CameraCalibration(float fx, float fy, float cx, float cy, float distorsionCoeff[4]) {
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            instrinsic.mat[i][j] = 0;
        }
    }
    
    
    instrinsic.mat[0][0] = fx;
    instrinsic.mat[1][1] = fy;
    instrinsic.mat[0][2] = cx;
    instrinsic.mat[1][2] = cy;
    
    for (int i=0; i<4; i++) {
        distorsion.data[i] = distorsionCoeff[i];
    }
    
}

void CameraCalibration::getMatrix34(float cparam[3][4]) const {
    
    for (int j=0; j<3; j++) {
        for (int i=0; i<3; i++) {
            cparam[i][j] = instrinsic.mat[i][j];
        }
    }
    
    for (int i=0; i<4; i++) {
        cparam[3][i] = distorsion.data[i];
    }
}

const Matrix33& CameraCalibration::getInstrinsic() const {
    return instrinsic;
}

const Vector4& CameraCalibration::getDistorsion() const {
    return distorsion;
}
