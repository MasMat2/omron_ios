//
//  BSOBodyCompositionCollectionViewCell.h
//  BleSampleOmron
//
//  Copyright © 2017 Omron Healthcare Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BSOBodyCompositionCollectionViewCell : UICollectionViewCell

+ (UINib *)nib;
+ (NSString *)reuseIdentifier;
+ (CGSize)requiredSize;

@property (nonatomic, strong) NSDate *timeStamp;
@property (nonatomic, strong) NSNumber *userIndex;
@property (nonatomic, strong) NSNumber *sequenceNumber;
@property (nonatomic, copy) NSString *weightUnit;
@property (nonatomic, strong) NSNumber *weight;
@property (nonatomic, strong) NSNumber *bodyFatPercentage;

@end
