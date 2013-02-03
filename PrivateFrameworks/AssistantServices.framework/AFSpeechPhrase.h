/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSArray;

@interface AFSpeechPhrase : NSObject {
    NSArray *_interpretations;
    BOOL _isLowConfidence;
}

@property(copy) NSArray * interpretations;
@property BOOL isLowConfidence;

- (void)dealloc;
- (id)dkPlistRepresentation;
- (id)initWithDKPlistRepresentation:(id)arg1;
- (id)interpretations;
- (BOOL)isLowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setIsLowConfidence:(BOOL)arg1;

@end