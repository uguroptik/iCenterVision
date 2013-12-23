//
//  GeometryTypes.cpp
//  iCenterVision
//
//  Created by Sertaç Anadollu on 14.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#include "GeometryTypes.hpp"

Matrix44 Matrix44::getTransposed() const {
    Matrix44 t;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            t.mat[i][j] = this->mat[j][i];
        }
    }
    return t;
}

Matrix44 Matrix44::identity() {
    Matrix44 eye;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            eye.mat[i][j] = (i == j) ? 1 : 0;
        }
    }
    return eye;
}

Matrix44 Matrix44::getInvertedRT() const {
    
    Matrix44 t = identity();
    
    for (int col=0; col<3; col++) {
        for (int row=0; row<3; row++) {
            // Transpose rotation component (inversion)
            t.mat[row][col] = mat[col][row];
        }
        
        // Inverse translation component
        t.mat[3][col] = - mat[3][col];
    }
    
    return t;
}


Matrix33 Matrix33::identity() {
    Matrix33 eye;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            eye.mat[i][j] = (i == j) ? 1 : 0;
        }
    }
    return eye;
}

Matrix33 Matrix33::getTransposed() const {
    Matrix33 t;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            t.mat[i][j] = mat[i][j];
        }
    }
    return t;
}

Vector3 Vector3::zero() {
    Vector3 v = { 0,0,0 };
    return v;
}

Vector3 Vector3::operator-() const {
    Vector3 v = {-this->data[0], -this->data[1], -this->data[2]};
    return v;
}

Transformation::Transformation():
_rotation(Matrix33::identity()),
_translation(Vector3::zero())
{
}


Transformation::Transformation(const Matrix33& rotation, const Vector3& translation):
_rotation(rotation),
_translation(translation)
{
    
}

Matrix33& Transformation::rotation() {
    return _rotation;
}

Vector3& Transformation::translation() {
    return _translation;
}




const Matrix33& Transformation::rotation() const {
    return _rotation;
}

const Vector3& Transformation::translation() const {
    return _translation;
}

Matrix44 Transformation::getMatrix44() const {
    Matrix44 result = Matrix44::identity();
    for (int col=0; col<3; col++) {
        for (int row=0; row<3; row++) {
            // Copy rotation component
            result.mat[row][col] = _rotation.mat[row][col];
        }
        // Copy translation component
        result.mat[3][col] = _translation.data[col];
    }
    return result;
}

Transformation Transformation::getInverted() const {
    return Transformation(_rotation.getTransposed(), -(_translation));
}


