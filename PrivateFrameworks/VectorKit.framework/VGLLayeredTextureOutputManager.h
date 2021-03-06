/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface VGLLayeredTextureOutputManager : NSObject {
    NSMutableDictionary *_textureDictionary;
    NSObject<OS_dispatch_queue> *_textureQueue;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)purge;
- (id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned int)arg3;

@end
