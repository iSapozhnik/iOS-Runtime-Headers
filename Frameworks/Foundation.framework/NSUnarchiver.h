/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSUnarchiver : NSCoder 
{
    void *datax;
    NSUInteger cursor;
    struct _NSZone { } *objectZone;
    NSUInteger systemVersion;
    BOOL streamerVersion;
    BOOL swap;
    BOOL unused1;
    BOOL unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    NSInteger lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
+ (id)classNameDecodedForArchiveClassName:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (void)initialize;

- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (id)classNameDecodedForArchiveClassName:(id)arg1;
- (struct _NSZone { }*)objectZone;
- (BOOL)isAtEnd;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeDataObject;
- (id)decodeObject;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(NSUInteger)arg2 at:(void*)arg3;
- (void*)decodeBytesWithReturnedLength:(NSUInteger*)arg1;
- (NSInteger)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)initForReadingWithData:(id)arg1;
- (NSUInteger)systemVersion;
- (void)finalize;
- (id)data;
- (void)dealloc;
- (void)_setAllowedClasses:(id)arg1;

@end