//
//  TestFlowLayout.h
//  ImageMagick
//
//  Created by birney on 2018/6/12.
//  Copyright © 2018年 one. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GSTestFlowLayout : UICollectionViewFlowLayout

@property(nonatomic,assign) CGSize newContentSize;

@property(nonatomic,assign) BOOL keepOffset;

@end