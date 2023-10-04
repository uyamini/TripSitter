//
//  MapPin.h
//  LondonLandmarks
//
//  Created by Aaron Caines on 28/06/2017.
//  Copyright © 2017 Aaron Caines. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MapPin : NSObject <MKAnnotation> {
    
    CLLocationCoordinate2D coordinate;
    
}

@property(nonatomic, assign) CLLocationCoordinate2D coordinate;


@end
