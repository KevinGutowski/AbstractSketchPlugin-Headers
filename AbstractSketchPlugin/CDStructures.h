//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GPBMessage, NSData, NSOutputStream, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct GPBCodedInputStreamState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
    int lastTag;
    unsigned long long recursionDepth;
};

struct GPBExtensionDescription {
    CDUnion_319e3a73 _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    CDUnknownFunctionPointerType _field5;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct GPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct GPBMessageFieldDescription {
    char *_field1;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct GPBMessage_Storage {
    unsigned int _field1[0];
};

struct GPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct grpc_byte_buffer {
    void *_field1;
    int _field2;
    union grpc_byte_buffer_data _field3;
};

struct grpc_compressed_buffer {
    int _field1;
    struct grpc_slice_buffer _field2;
};

struct grpc_metadata {
    struct grpc_slice _field1;
    struct grpc_slice _field2;
    unsigned int _field3;
    struct {
        void *_field1[4];
    } _field4;
};

struct grpc_op {
    int op;
    unsigned int flags;
    void *reserved;
    union grpc_op_data data;
};

struct grpc_op_recv_close_on_server {
    int *cancelled;
};

struct grpc_op_recv_initial_metadata {
    CDStruct_183601bc *recv_initial_metadata;
};

struct grpc_op_recv_message {
    struct grpc_byte_buffer **recv_message;
};

struct grpc_op_recv_status_on_client {
    CDStruct_183601bc *trailing_metadata;
    int *status;
    struct grpc_slice *status_details;
    char **error_string;
};

struct grpc_op_send_initial_metadata {
    unsigned long long count;
    struct grpc_metadata *metadata;
    struct grpc_op_send_initial_metadata_maybe_compression_level maybe_compression_level;
};

struct grpc_op_send_initial_metadata_maybe_compression_level {
    unsigned char is_set;
    int level;
};

struct grpc_op_send_message {
    struct grpc_byte_buffer *send_message;
};

struct grpc_op_send_status_from_server {
    unsigned long long trailing_metadata_count;
    struct grpc_metadata *trailing_metadata;
    int status;
    struct grpc_slice *status_details;
};

struct grpc_slice {
    struct grpc_slice_refcount *refcount;
    union grpc_slice_data data;
};

struct grpc_slice_buffer {
    struct grpc_slice *_field1;
    struct grpc_slice *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    struct grpc_slice _field6[8];
};

struct grpc_slice_inlined {
    unsigned char length;
    unsigned char bytes[23];
};

struct grpc_slice_refcount;

struct grpc_slice_refcounted {
    unsigned long long length;
    char *bytes;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long state;
    id *itemsPtr;
    unsigned long long *mutationsPtr;
    unsigned long long extra[5];
} CDStruct_58648341;

typedef struct {
    void *reserved[8];
} CDStruct_d7a492ad;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned long long count;
    unsigned long long capacity;
    struct grpc_metadata *metadata;
} CDStruct_6f820e53;

#pragma mark Named Unions

union grpc_byte_buffer_data {
    CDStruct_d7a492ad _field1;
    struct grpc_compressed_buffer _field2;
};

union grpc_op_data {
    CDStruct_d7a492ad reserved;
    struct grpc_op_send_initial_metadata send_initial_metadata;
    struct grpc_op_send_message send_message;
    struct grpc_op_send_status_from_server send_status_from_server;
    struct grpc_op_recv_initial_metadata recv_initial_metadata;
    struct grpc_op_recv_message recv_message;
    struct grpc_op_recv_status_on_client recv_status_on_client;
    struct grpc_op_recv_close_on_server recv_close_on_server;
};

union grpc_slice_data {
    struct grpc_slice_refcounted refcounted;
    struct grpc_slice_inlined inlined;
};

#pragma mark Typedef'd Unions

typedef union {
    char valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    GPBMessage *valueMessage;
    int valueEnum;
} CDUnion_319e3a73;

