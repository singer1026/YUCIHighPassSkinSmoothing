//
//  YUCIRGBToneCurveFilter.h
//  Pods
//
//  Created by YuAo on 1/21/16.
//
//

#import <CoreImage/CoreImage.h>

@interface YUCIRGBToneCurveFilter : CIFilter

@property (nonatomic,strong) CIImage *inputImage;

@property(nonatomic, copy) NSArray<CIVector *> *redControlPoints;
@property(nonatomic, copy) NSArray<CIVector *> *greenControlPoints;
@property(nonatomic, copy) NSArray<CIVector *> *blueControlPoints;
@property(nonatomic, copy) NSArray<CIVector *> *rgbCompositeControlPoints;

@property (nonatomic,copy) NSNumber *inputIntensity;

@end