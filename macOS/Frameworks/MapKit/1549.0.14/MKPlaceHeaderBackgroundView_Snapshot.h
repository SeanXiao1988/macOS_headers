//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPlaceHeaderBackgroundView.h>

#import <MapKit/MKMapViewDelegate-Protocol.h>

@class CLLocation, MKMapCamera, MKMapView, NSString;

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    BOOL _orbiting;
    BOOL _settingUpOrbitAnimation;
    BOOL _showsPin;
    MKMapCamera *_orbitCamera;
    double _zoomLevel;
    unsigned long long _pinColor;
    CLLocation *_location;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long pinColor; // @synthesize pinColor=_pinColor;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) BOOL showsPin; // @synthesize showsPin=_showsPin;
@property(nonatomic) BOOL settingUpOrbitAnimation; // @synthesize settingUpOrbitAnimation=_settingUpOrbitAnimation;
@property(nonatomic) BOOL orbiting; // @synthesize orbiting=_orbiting;
@property(retain, nonatomic) MKMapCamera *orbitCamera; // @synthesize orbitCamera=_orbitCamera;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)present;
- (void)prepareForPresentation;
@property(readonly, nonatomic) BOOL useSatellite;
- (void)pauseOrbit;
- (void)_orbitNextThird;
- (void)beginOrbit;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapFinishedLoading:(BOOL)arg1;
- (void)requestSnapshot;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setMapItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

