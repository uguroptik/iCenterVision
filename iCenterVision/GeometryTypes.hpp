//
//  GeometryTypes.h
//  iCenterVision
//
//  Created by Sertaç Anadollu on 14.12.2013.
//  Copyright (c) 2013 Uğur Optik Makina. All rights reserved.
//

#ifndef __iCenterVision__GeometryTypes__
#define __iCenterVision__GeometryTypes__

struct Matrix44 {
    
    union {
        float data[16];
        float mat[4][4];
    };
    
    Matrix44 getTransposed() const;
    Matrix44 getInvertedRT() const;
    static Matrix44 identity();
    
};

struct Matrix33 {
    union {
        float data[9];
        float mat[3][3];
    };
    
    Matrix33 getTransposed() const;
    static Matrix33 identity();
};


struct Vector4 {
    float data[4];
};

struct Vector3 {
    float data[3];
    
    static Vector3 zero();
    Vector3 operator-() const;
};


struct Transformation {
    
    Transformation();
    Transformation(const Matrix33& rotation, const Vector3& translation);
    
    Matrix33& rotation();
    Vector3& translation();
    
    const Matrix33& rotation() const;
    const Vector3& translation() const;
    
    Matrix44 getMatrix44() const;
    Transformation getInverted() const;

private:
    Matrix33 _rotation;
    Vector3 _translation;

};


#endif /* defined(__iCenterVision__GeometryTypes__) */
