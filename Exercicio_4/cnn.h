#pragma once

#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

// automatically configure network
#define TF_NUM_INPUTS 4
#define TF_NUM_OUTPUTS 3
#define TF_NUM_OPS 2
#define TF_OP_FULLYCONNECTED
#define TF_OP_SOFTMAX




// sample data
float x0[4] = {0.22222222222f, 0.62500000000f, 0.06779661017f, 0.04166666667f};
float x1[4] = {0.75000000000f, 0.50000000000f, 0.62711864407f, 0.54166666667f};
float x2[4] = {0.55555555556f, 0.54166666667f, 0.84745762712f, 1.00000000000f};


/** model size = 5060 bytes **/
const unsigned char irisModel[] DATA_ALIGN_ATTRIBUTE = { 0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x9c, 0x0d, 0x00, 0x00, 0xac, 0x0d, 0x00, 0x00, 0x60, 0x13, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x4a, 0xf2, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x6b, 0x65, 0x72, 0x61, 0x73, 0x5f, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xa8, 0x0c, 0x00, 0x00, 0xa0, 0x0c, 0x00, 0x00, 0xd0, 0x0b, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0xa4, 0x03, 0x00, 0x00, 0x54, 0x03, 0x00, 0x00, 0xc4, 0x02, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xfe, 0xf2, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x64, 0xf7, 0x46, 0x1f, 0xd9, 0xc2, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x38, 0x2e, 0x30, 0x00, 0x00, 0x6a, 0xf3, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xee, 0xff, 0xff, 0x84, 0xee, 0xff, 0xff, 0x88, 0xee, 0xff, 0xff, 0x8c, 0xee, 0xff, 0xff, 0x96, 0xf3, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xb2, 0x87, 0x10, 0x3d, 0xed, 0x1d, 0x43, 0x3e, 0x38, 0xff, 0x32, 0x3c, 0x0f, 0x21, 0x80, 0x3e, 0x64, 0xd9, 0xbc, 0xbc, 0xc1, 0x1e, 0x23, 0x3f, 0x59, 0x07, 0xfd, 0xbb, 0x88, 0x0a, 0x50, 0x3e, 0xeb, 0x61, 0x43, 0xbe, 0x16, 0x0f, 0x8b, 0xbe, 0x26, 0x61, 0x89, 0xbe, 0x28, 0xed, 0x58, 0x3e, 0xe5, 0x40, 0xe5, 0x3e, 0x5d, 0xc2, 0x3b, 0xbe, 0x9d, 0x1b, 0x77, 0x3e, 0x11, 0xd4, 0x0e, 0x3f, 0xe4, 0x2a, 0xc2, 0xbd, 0xe0, 0xe5, 0xd0, 0xbd, 0x01, 0xfe, 0xae, 0xbe, 0x1b, 0x47, 0x54, 0xbe, 0x44, 0x9b, 0x0e, 0x3f, 0xcd, 0xd5, 0xb6, 0xbe, 0xb7, 0x1e, 0xbb, 0x3c, 0xd0, 0x81, 0xd2, 0x3e, 0x7c, 0x6b, 0x8d, 0xbe, 0x3b, 0x5c, 0x92, 0xbe, 0x98, 0xc1, 0xcb, 0x3d, 0x77, 0x03, 0x40, 0x3e, 0xdc, 0x75, 0x57, 0xbe, 0x18, 0xc8, 0x9d, 0xbe, 0x2e, 0x13, 0x25, 0xbd, 0x6b, 0x62, 0x3f, 0x3e, 0xe1, 0x32, 0xe0, 0x3e, 0xb0, 0xcd, 0x17, 0xbe, 0x36, 0x32, 0x0c, 0x3f, 0x1c, 0x7e, 0xe3, 0x3e, 0x50, 0x9d, 0x8f, 0x3e, 0xf3, 0x2f, 0x75, 0xbe, 0xe9, 0xfd, 0xc2, 0xbe, 0xd7, 0x72, 0xab, 0xbe, 0x4e, 0xac, 0x02, 0x3f, 0x41, 0x2a, 0x85, 0xbe, 0xd6, 0x68, 0xb3, 0x3e, 0x1d, 0xbf, 0xee, 0x3e, 0xd7, 0x85, 0xeb, 0xbd, 0xa4, 0xfb, 0xaa, 0x3e, 0x8b, 0x7a, 0xfc, 0x3d, 0xaa, 0xa6, 0x5d, 0xbe, 0xc2, 0xf0, 0xcf, 0xbe, 0xe8, 0x15, 0xb1, 0xbe, 0x94, 0xa8, 0x13, 0xbe, 0x20, 0x6f, 0x35, 0x3e, 0x44, 0xc7, 0x28, 0x3e, 0xf3, 0xdc, 0xd2, 0x3e, 0x44, 0x08, 0x53, 0x3e, 0x8e, 0xb6, 0xfa, 0xbe, 0x93, 0xc9, 0x72, 0xbd, 0x2d, 0x5b, 0x31, 0xbd, 0xb5, 0x8b, 0x8e, 0x3e, 0xb2, 0x93, 0xf3, 0x3e, 0x16, 0x2f, 0x0f, 0xbe, 0xa8, 0x6c, 0x3a, 0x3e, 0x54, 0x0a, 0x9f, 0xbd, 0xc3, 0xb0, 0xa7, 0x3e, 0xb8, 0x55, 0xcf, 0xbc, 0x53, 0x4b, 0x10, 0xbe, 0x50, 0xa6, 0xbd, 0x3e, 0x88, 0xe6, 0xe9, 0x3e, 0x88, 0xd0, 0xf3, 0x3e, 0xd1, 0xda, 0xbe, 0xbc, 0x9e, 0x0b, 0xb8, 0xbd, 0xff, 0x24, 0x04, 0x3e, 0x39, 0xfe, 0x5d, 0x3e, 0x4e, 0x62, 0x41, 0x3e, 0xc2, 0xa9, 0x24, 0x3e, 0x62, 0x07, 0x74, 0x3e, 0x41, 0x42, 0x04, 0x3e, 0x24, 0xc5, 0x1f, 0x3f, 0x7b, 0x68, 0x8e, 0xbd, 0xe8, 0xc5, 0x43, 0xbe, 0xc7, 0x42, 0xe2, 0xbd, 0xfd, 0xf7, 0x3f, 0x3e, 0xf6, 0x2f, 0xf6, 0x3d, 0xc6, 0xbc, 0x2e, 0x3e, 0xaa, 0x49, 0x14, 0xbd, 0xde, 0xa6, 0x0e, 0x3d, 0xd8, 0x5e, 0xca, 0x3d, 0x89, 0xdf, 0xc4, 0x3e, 0xef, 0xf7, 0x4d, 0xbe, 0x3c, 0x0b, 0x06, 0x3f, 0x3a, 0x97, 0x51, 0x3e, 0xec, 0xb0, 0xfb, 0x3d, 0x03, 0x0e, 0x5d, 0xbe, 0x6c, 0xa9, 0x02, 0x3e, 0xa0, 0x8b, 0x92, 0x3e, 0x53, 0x11, 0x8a, 0x3d, 0x23, 0x4b, 0x81, 0x3e, 0x59, 0x88, 0x67, 0x3e, 0x91, 0x5d, 0x10, 0xbe, 0x5d, 0xf2, 0x94, 0x3d, 0xca, 0x21, 0x2b, 0xbe, 0xb7, 0x53, 0x4d, 0x3d, 0x10, 0x35, 0x71, 0x3d, 0x12, 0x81, 0xb9, 0xbe, 0x16, 0xf2, 0x56, 0xbe, 0x5e, 0x2e, 0xbd, 0x3d, 0x00, 0x37, 0x23, 0x3e, 0xbb, 0x63, 0x88, 0x3e, 0x35, 0xe9, 0x67, 0x3e, 0x41, 0x42, 0x6a, 0x3e, 0x6e, 0xf0, 0x79, 0x3e, 0x07, 0x53, 0xa4, 0x3e, 0x98, 0x82, 0xab, 0xbe, 0xe7, 0x88, 0x72, 0xbe, 0xf0, 0x0d, 0x74, 0xbe, 0x32, 0x05, 0x9e, 0xbe, 0x0a, 0x45, 0xb0, 0xbe, 0xaa, 0x90, 0xc8, 0xbe, 0xeb, 0x69, 0x7e, 0xbe, 0x08, 0x0e, 0xbb, 0x3e, 0x53, 0x6c, 0xf7, 0x3e, 0x73, 0x64, 0x7f, 0x3d, 0x6b, 0x79, 0xd9, 0xbd, 0x4d, 0x68, 0x89, 0x3e, 0xd8, 0x21, 0xa0, 0x3e, 0x9d, 0x20, 0x0d, 0xbe, 0x64, 0x03, 0x03, 0x3e, 0xf2, 0xda, 0x05, 0x3f, 0xa2, 0xf5, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xbb, 0x58, 0x12, 0xbe, 0xb2, 0xd4, 0x2e, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x21, 0x85, 0x05, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x56, 0xa2, 0x3d, 0x3d, 0x2c, 0x36, 0xbd, 0x25, 0xed, 0x6b, 0xbc, 0xbf, 0x4b, 0x87, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x72, 0x56, 0xbd, 0xbc, 0x66, 0xe6, 0x1a, 0x3d, 0x00, 0x00, 0x00, 0x00, 0xf9, 0x1d, 0x45, 0x3e, 0xc1, 0x68, 0x22, 0xbd, 0xa3, 0xf9, 0x51, 0x3d, 0x65, 0xee, 0x65, 0x3b, 0x76, 0x97, 0x3c, 0xbd, 0xef, 0xfa, 0x25, 0xbe, 0xad, 0xbe, 0x5f, 0x3e, 0x09, 0x9f, 0xb4, 0xbd, 0x17, 0x9e, 0xc7, 0x3d, 0xf5, 0xc4, 0x2a, 0x3e, 0x95, 0x87, 0x08, 0xbd, 0x83, 0xd3, 0x2a, 0x3e, 0xf2, 0x2b, 0xda, 0xbc, 0x36, 0x7b, 0xa2, 0xbd, 0x0f, 0x71, 0x0a, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x27, 0x0d, 0xbe, 0xb9, 0xad, 0x5b, 0xbd, 0x2e, 0xf6, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc3, 0x5e, 0xfa, 0xbb, 0x46, 0x81, 0x27, 0x3e, 0x99, 0xa1, 0x7c, 0xbd, 0x50, 0x90, 0x05, 0xbc, 0x18, 0xdf, 0x6d, 0x3d, 0x60, 0x66, 0x15, 0x3e, 0x44, 0x74, 0x56, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x89, 0x44, 0x22, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x29, 0xc8, 0x28, 0xbd, 0xea, 0x0f, 0x85, 0xbd, 0x01, 0x7b, 0xa6, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x50, 0x24, 0x3e, 0x7a, 0xf6, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xa5, 0xae, 0x69, 0x3d, 0x93, 0xee, 0x1c, 0x3d, 0x8d, 0x0b, 0xc4, 0xbd, 0x92, 0xf6, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0xbf, 0xe4, 0x6a, 0x3e, 0xe0, 0x20, 0xd1, 0x3c, 0xee, 0x60, 0xdd, 0xbd, 0x15, 0xe2, 0x72, 0x3e, 0x7e, 0xf2, 0xab, 0xbe, 0xbb, 0x88, 0x9c, 0x3e, 0xb0, 0x11, 0x24, 0x3d, 0x6f, 0x11, 0x0b, 0xbe, 0x55, 0x38, 0x8f, 0xbe, 0x4e, 0x2e, 0x05, 0x3e, 0xb4, 0x36, 0x8f, 0x3e, 0xa0, 0xb6, 0xee, 0x3c, 0x34, 0x43, 0xb7, 0x3d, 0xf5, 0x3b, 0x2c, 0xbd, 0xdf, 0x91, 0x85, 0xbe, 0xad, 0x17, 0xb5, 0xbe, 0xae, 0xbc, 0xb7, 0xbc, 0x01, 0x67, 0x2d, 0x3e, 0x14, 0x03, 0xb0, 0xbe, 0x3f, 0xef, 0x68, 0xbe, 0x57, 0xb5, 0x98, 0xbd, 0xcf, 0x3d, 0xf8, 0x3d, 0xe4, 0x7d, 0xc0, 0xbd, 0x12, 0x72, 0xaa, 0xbd, 0x2e, 0xa0, 0x83, 0xbe, 0x65, 0x2f, 0xa9, 0xbe, 0xac, 0xe5, 0xa2, 0xbd, 0xae, 0x49, 0x4e, 0xbe, 0x90, 0xba, 0x06, 0xbd, 0x9a, 0x39, 0x8a, 0xbe, 0xb0, 0x72, 0x97, 0x3e, 0xe5, 0xe5, 0x9a, 0x3c, 0x89, 0x78, 0xbd, 0xbe, 0x8c, 0x69, 0x68, 0xbd, 0xfa, 0xca, 0x14, 0x3e, 0xdd, 0x10, 0x4c, 0x3e, 0xa5, 0x82, 0x40, 0xbe, 0x49, 0x82, 0x6e, 0x3e, 0xc7, 0x29, 0x5d, 0xbe, 0xa5, 0x1c, 0x51, 0xbe, 0x85, 0x8a, 0x40, 0x3d, 0xf6, 0x0f, 0x62, 0xbe, 0xac, 0xd5, 0xb6, 0xbe, 0x8f, 0x0d, 0x0d, 0x3f, 0x00, 0x1e, 0x12, 0x3b, 0x1d, 0xb3, 0x12, 0x3f, 0xe9, 0xc7, 0x57, 0xbe, 0xcd, 0x91, 0xb5, 0x3c, 0xc2, 0x8a, 0x39, 0xbe, 0x8e, 0xf6, 0x84, 0x3e, 0xf5, 0x41, 0x82, 0xbe, 0x42, 0x65, 0x01, 0x3f, 0xa3, 0x6b, 0x05, 0x3e, 0x16, 0x72, 0x66, 0x3e, 0xfc, 0x9b, 0xce, 0x3e, 0xdc, 0x7b, 0x91, 0xbe, 0xd0, 0x02, 0xd8, 0x3e, 0x27, 0x3a, 0x9f, 0xbd, 0x6f, 0x20, 0xdb, 0xbe, 0x8c, 0x7c, 0xde, 0x3c, 0x92, 0x10, 0x78, 0x3e, 0x11, 0x91, 0xa2, 0x3e, 0x78, 0xae, 0xb6, 0xbe, 0xb3, 0x4e, 0xd0, 0xbe, 0xd9, 0x07, 0x4b, 0x3e, 0x7b, 0xf8, 0x7b, 0x3e, 0xd0, 0x0b, 0xa1, 0xbd, 0x8f, 0x7d, 0xec, 0x3d, 0xff, 0xb0, 0xb3, 0x3e, 0x78, 0x37, 0xec, 0x3e, 0x01, 0x65, 0x25, 0xbe, 0x80, 0x41, 0x7f, 0xbe, 0x1b, 0x25, 0xb2, 0x3e, 0x62, 0x0b, 0x4e, 0x3e, 0x0a, 0x4b, 0x58, 0x3d, 0x2e, 0x00, 0x17, 0xbe, 0x03, 0x4f, 0x8e, 0x3e, 0x36, 0x38, 0x36, 0xbe, 0x3e, 0x9f, 0x18, 0xbd, 0x01, 0x79, 0x6f, 0xbe, 0xb6, 0x62, 0x0d, 0x3e, 0xc9, 0x23, 0x6e, 0x3d, 0x4c, 0xab, 0x43, 0x3e, 0x7c, 0xd9, 0xd0, 0x3d, 0xcd, 0xf7, 0x8b, 0xbe, 0x61, 0xc9, 0x6c, 0xbc, 0x26, 0x06, 0xcc, 0xbd, 0x8e, 0xfc, 0xc5, 0xbd, 0x1c, 0x96, 0x25, 0xbe, 0xb5, 0xe7, 0x04, 0x3e, 0x0d, 0x05, 0x5d, 0xbe, 0x14, 0x11, 0xad, 0x3e, 0x92, 0xb2, 0x27, 0x3e, 0xd6, 0xfe, 0x62, 0x3e, 0x28, 0x7e, 0x33, 0x3d, 0x7d, 0xb0, 0xb2, 0x3e, 0xf8, 0x2d, 0x6c, 0xbd, 0xf2, 0x65, 0x87, 0x3e, 0x48, 0xf8, 0xab, 0xbe, 0x03, 0xbf, 0xa5, 0xbc, 0x90, 0x73, 0x27, 0xbd, 0x35, 0x95, 0x4b, 0xbd, 0x01, 0x66, 0x93, 0xbe, 0xa8, 0x3d, 0x4a, 0x3d, 0x32, 0x90, 0x11, 0xbe, 0x08, 0x8f, 0x9c, 0xbd, 0xdf, 0x46, 0x5c, 0x3e, 0xa8, 0x5e, 0x85, 0xbd, 0x57, 0x49, 0x31, 0xbe, 0x9e, 0x6a, 0x40, 0xbe, 0x79, 0x76, 0x5b, 0xbe, 0x3e, 0xe4, 0x44, 0xbe, 0x0f, 0x36, 0xa6, 0x3e, 0xf4, 0xe5, 0xa5, 0xbe, 0x63, 0xfb, 0x7a, 0x3e, 0x21, 0x7d, 0x93, 0xbe, 0xb0, 0x99, 0x22, 0x3e, 0xcb, 0x21, 0xfa, 0x3d, 0xb9, 0x34, 0x49, 0xbe, 0xb3, 0xd2, 0xe2, 0xbd, 0xfd, 0x40, 0x1a, 0x3e, 0x94, 0x9c, 0xca, 0x3d, 0x74, 0x78, 0x90, 0xbe, 0xca, 0xf4, 0x3b, 0xbd, 0xa2, 0x89, 0x04, 0x3e, 0x5d, 0xe0, 0xaa, 0x3e, 0x46, 0x27, 0xad, 0xbe, 0x14, 0x78, 0x97, 0xbd, 0xad, 0x35, 0xe7, 0xbd, 0xb1, 0x15, 0x61, 0x3e, 0xe3, 0x15, 0xa0, 0x3e, 0xca, 0xb2, 0x32, 0x3e, 0xad, 0xf0, 0xab, 0x3e, 0x1e, 0x32, 0x3b, 0xbd, 0x21, 0x5f, 0xa1, 0xbe, 0xc7, 0x28, 0x78, 0x3e, 0x36, 0x4c, 0x95, 0xbd, 0x3d, 0x87, 0x9b, 0x3e, 0x7a, 0x0f, 0xa7, 0x3e, 0x09, 0x62, 0xbd, 0xbe, 0x65, 0x6c, 0x8f, 0x3e, 0x24, 0x15, 0xc4, 0x3d, 0x7b, 0xd9, 0xba, 0xbe, 0x13, 0xad, 0xbf, 0xbe, 0x26, 0xd2, 0x4b, 0x3d, 0xa4, 0xcc, 0x8c, 0x3e, 0x2d, 0xf1, 0x80, 0x3e, 0x49, 0x14, 0xef, 0x3c, 0x67, 0x3d, 0x87, 0xbd, 0xbe, 0xdf, 0x6e, 0x3e, 0xd6, 0xa2, 0x8a, 0xbe, 0x3c, 0x25, 0x59, 0x3e, 0x20, 0x3c, 0x4d, 0x3e, 0x25, 0x34, 0x31, 0xbe, 0x34, 0x9e, 0x21, 0x3d, 0xec, 0xb4, 0x04, 0xbe, 0x7a, 0xae, 0x75, 0x3e, 0x2c, 0x81, 0xe1, 0x3d, 0x89, 0xe6, 0x84, 0xbe, 0x88, 0xea, 0x45, 0x3e, 0x39, 0x5d, 0x4f, 0xbe, 0xd7, 0x19, 0xea, 0x3e, 0x7f, 0xde, 0x95, 0xbe, 0x1d, 0x13, 0x02, 0xbe, 0xef, 0x26, 0x8b, 0xbe, 0xd3, 0x59, 0xcb, 0xbe, 0xa0, 0x3e, 0x1e, 0x3e, 0xa5, 0x64, 0xf3, 0xbd, 0xd3, 0xe4, 0xe7, 0xbe, 0x28, 0x2c, 0x8e, 0xbd, 0xc2, 0x48, 0x02, 0xbf, 0x11, 0x82, 0x36, 0xbe, 0x70, 0xbd, 0xb1, 0xbd, 0x72, 0x88, 0x8f, 0x3e, 0xa6, 0xc5, 0xbc, 0xbe, 0x31, 0x16, 0x8e, 0x3e, 0x96, 0xf3, 0x11, 0xbf, 0xd9, 0xaa, 0x70, 0xbe, 0x18, 0xfc, 0x0a, 0x3e, 0x64, 0x43, 0xd4, 0x3e, 0x91, 0x0e, 0x3b, 0x3c, 0xe2, 0xaa, 0x90, 0xbc, 0x1a, 0xd8, 0xdb, 0x3e, 0x97, 0xda, 0x16, 0x3e, 0xdb, 0x38, 0x80, 0x3e, 0x78, 0xd6, 0x89, 0xbe, 0xa8, 0x51, 0xd7, 0xbe, 0xa1, 0xf1, 0xb4, 0x3e, 0x45, 0x40, 0xa0, 0x3e, 0xbd, 0x42, 0x9f, 0xbe, 0x82, 0x3f, 0x45, 0xbe, 0xbf, 0xd9, 0xc0, 0x3d, 0x40, 0xa6, 0xc4, 0xbd, 0xc7, 0x56, 0xa0, 0xbe, 0xb6, 0xdc, 0x31, 0x3e, 0x71, 0xc1, 0xeb, 0x3e, 0xfd, 0x4a, 0x95, 0xbe, 0x01, 0xa4, 0xb0, 0x3e, 0x2d, 0x23, 0x18, 0xbe, 0x21, 0x31, 0x92, 0xbe, 0x5f, 0x42, 0x53, 0x3d, 0x22, 0xe5, 0x7f, 0xbe, 0x8b, 0xfa, 0x3c, 0x3e, 0x56, 0x8f, 0xdd, 0xbe, 0xf2, 0xc1, 0x57, 0x3e, 0xb8, 0xc7, 0x92, 0x3e, 0xe7, 0xd4, 0x01, 0x3f, 0x43, 0x8b, 0xb0, 0x3e, 0xee, 0x59, 0x7a, 0x3e, 0xaf, 0x41, 0x3a, 0x3e, 0xdb, 0x5a, 0xf7, 0xbd, 0x84, 0x08, 0x16, 0xbe, 0x77, 0xdd, 0x38, 0xbe, 0x0d, 0x15, 0xc3, 0x3e, 0x41, 0x42, 0x1d, 0x3e, 0x8c, 0xf0, 0xf6, 0xbb, 0x90, 0x0a, 0x4f, 0xbe, 0xd8, 0x44, 0x87, 0xbe, 0x8d, 0x9e, 0x14, 0x3d, 0xae, 0xa4, 0x19, 0x3e, 0x16, 0xe9, 0x5a, 0xbe, 0xe4, 0x99, 0xb5, 0x3d, 0xfb, 0xab, 0xcc, 0x3e, 0xe0, 0x92, 0x71, 0xbd, 0x9a, 0xa8, 0x5f, 0x3e, 0xd8, 0x73, 0x23, 0xbd, 0x6d, 0x17, 0x5a, 0xbe, 0xb7, 0xd7, 0x7c, 0xbe, 0x70, 0xa0, 0x78, 0xbd, 0x8a, 0x09, 0x72, 0x3e, 0x29, 0x8c, 0x6c, 0xbe, 0x50, 0xac, 0x06, 0x3d, 0xdf, 0xc2, 0x10, 0xbe, 0x3a, 0x8a, 0x05, 0xbe, 0xe0, 0x64, 0xde, 0xbc, 0x5d, 0xef, 0xb3, 0x3e, 0x8e, 0xb8, 0x91, 0xbe, 0xf8, 0xa6, 0xc2, 0xbd, 0x49, 0x35, 0xa0, 0xbe, 0xa1, 0x35, 0x70, 0xbe, 0x50, 0x0e, 0xe4, 0x3d, 0x7a, 0xe2, 0x6a, 0x3e, 0x10, 0xdd, 0x5e, 0xbe, 0xc2, 0x3b, 0x6a, 0xbe, 0x00, 0x53, 0x87, 0x3a, 0x70, 0xb6, 0x8b, 0xbd, 0xa2, 0x98, 0xfb, 0xbd, 0xea, 0xda, 0x64, 0x3e, 0xa0, 0xdc, 0x2e, 0x3d, 0x7d, 0xfb, 0x2c, 0xbe, 0x25, 0x80, 0x0a, 0xbe, 0x40, 0x33, 0xa7, 0xbe, 0xb9, 0x10, 0x89, 0x3e, 0xf8, 0x47, 0x2a, 0xbd, 0x4c, 0x25, 0xe9, 0x3d, 0xa5, 0xcf, 0x18, 0xbe, 0x7e, 0xe7, 0xd2, 0x3d, 0xa8, 0xf9, 0x50, 0xbe, 0xa1, 0x4a, 0x27, 0xbe, 0x03, 0x98, 0x4d, 0x3e, 0x9e, 0x07, 0xa5, 0xbe, 0xef, 0x19, 0xf8, 0xbc, 0x5e, 0x94, 0x74, 0x3e, 0x42, 0x60, 0x2c, 0x3e, 0xa0, 0x14, 0x9b, 0xbd, 0x00, 0xd1, 0xfd, 0xba, 0x2a, 0xdb, 0x09, 0x3e, 0x45, 0x93, 0x97, 0x3d, 0x60, 0x0c, 0x7c, 0xbd, 0xe8, 0x00, 0x0a, 0x3e, 0x5e, 0x02, 0xc0, 0xbe, 0x78, 0x3b, 0xa5, 0xbe, 0x12, 0xa2, 0x73, 0x3e, 0xf8, 0xa2, 0x70, 0xbe, 0xff, 0xcb, 0x1d, 0x3d, 0x19, 0xf9, 0x6f, 0xbe, 0x2a, 0x7e, 0xf7, 0xbd, 0xc4, 0x90, 0x67, 0xbe, 0x8a, 0xce, 0x02, 0x3d, 0xe1, 0xdb, 0x93, 0x3e, 0xbd, 0x29, 0x98, 0xbc, 0x03, 0x58, 0x93, 0x3e, 0xae, 0x8d, 0x93, 0x3e, 0x16, 0x5e, 0xa2, 0xbd, 0x56, 0xe0, 0xff, 0xbd, 0x7a, 0x4e, 0x85, 0xbe, 0xcf, 0xc1, 0xd0, 0x3d, 0xda, 0x50, 0xea, 0x3a, 0xb1, 0xbf, 0x8f, 0xbe, 0xc4, 0x82, 0xad, 0x3d, 0x15, 0xe1, 0x78, 0xbe, 0x76, 0xf6, 0x00, 0x3e, 0x20, 0xd1, 0xbc, 0x3c, 0x46, 0xe3, 0x18, 0x3e, 0x31, 0x89, 0xa4, 0xbe, 0x26, 0x0f, 0x76, 0xbe, 0x9a, 0x65, 0x83, 0xbe, 0x00, 0xf6, 0xaa, 0xbc, 0x06, 0x1c, 0x5b, 0x3e, 0xd6, 0x1e, 0x56, 0x3e, 0xc9, 0xd8, 0xb1, 0x3e, 0x52, 0xa6, 0x75, 0xbe, 0xa6, 0x04, 0x67, 0x3e, 0x68, 0xbc, 0x9b, 0xbd, 0x25, 0x85, 0x8b, 0xbe, 0x1b, 0x60, 0x73, 0xbe, 0x40, 0x52, 0x77, 0xbd, 0x92, 0x9f, 0x27, 0xbe, 0xcc, 0xc0, 0x7d, 0xbe, 0x9c, 0x32, 0x7f, 0xbe, 0x68, 0xd6, 0x56, 0xbd, 0x8e, 0xca, 0x31, 0x3e, 0xb4, 0x84, 0x9d, 0xbd, 0xea, 0x71, 0x3d, 0x3e, 0xd0, 0x78, 0xd4, 0x3d, 0x75, 0xd6, 0x83, 0x3e, 0x7e, 0x1f, 0x29, 0x3e, 0x01, 0xf6, 0x8c, 0x3e, 0xd9, 0xb3, 0x8b, 0xbe, 0xd4, 0x46, 0xa3, 0xbe, 0x32, 0xb6, 0x5e, 0x3e, 0x71, 0x08, 0xd5, 0x3d, 0x47, 0xc6, 0x78, 0xbe, 0x80, 0xf9, 0x19, 0x3d, 0x6f, 0x30, 0x92, 0xbe, 0x3e, 0xe3, 0xe5, 0x3e, 0x20, 0x35, 0x71, 0xbe, 0x76, 0xcc, 0x29, 0xbe, 0xa1, 0x49, 0x85, 0x3e, 0x0a, 0x92, 0x56, 0x3e, 0xfd, 0xdd, 0xe6, 0xbd, 0xe3, 0x09, 0xc3, 0x3d, 0xe8, 0x36, 0x36, 0xbe, 0x62, 0x35, 0xfe, 0xbe, 0x1c, 0xea, 0xc2, 0x3e, 0x74, 0x4e, 0xd7, 0x3e, 0x54, 0xdf, 0xda, 0x3e, 0xc9, 0x5f, 0x3a, 0x3e, 0x8c, 0x0b, 0x5b, 0xbe, 0xc9, 0xaf, 0xc6, 0xbe, 0x5e, 0x28, 0x9b, 0x3e, 0x70, 0xaa, 0x3c, 0x3e, 0xad, 0xbd, 0x80, 0x3e, 0x8a, 0xb3, 0x1f, 0x3c, 0xbc, 0xa6, 0xa4, 0x3e, 0xee, 0x4a, 0x32, 0x3e, 0xe0, 0xc2, 0x83, 0x3e, 0xbe, 0x65, 0x52, 0xbd, 0xb0, 0x59, 0x99, 0xbd, 0xd4, 0xa0, 0x1f, 0xbe, 0x40, 0x68, 0xe8, 0x3e, 0x5d, 0x0d, 0xe6, 0x3d, 0xee, 0xc8, 0x17, 0x3e, 0x39, 0x3a, 0xec, 0x3d, 0x08, 0x65, 0x75, 0xbd, 0x53, 0x67, 0xf2, 0x3e, 0x8c, 0x7c, 0x84, 0xbd, 0xb0, 0x88, 0xc8, 0x3e, 0x73, 0x3d, 0x17, 0xbe, 0x84, 0x71, 0xa6, 0xbe, 0xbe, 0x02, 0xfc, 0x3e, 0x54, 0x15, 0xc9, 0x3d, 0xf7, 0x8e, 0x0d, 0x3e, 0xf4, 0xe1, 0x15, 0x3e, 0x70, 0xf3, 0xbc, 0x3c, 0x84, 0xac, 0x08, 0xbe, 0x40, 0xc7, 0xa5, 0x3e, 0x7e, 0x57, 0xe0, 0xbd, 0xbf, 0x71, 0x99, 0x3e, 0xd3, 0x0c, 0xa2, 0x3e, 0x0e, 0xc6, 0x21, 0x3e, 0x88, 0x02, 0x15, 0x3e, 0x49, 0xf6, 0x86, 0x3e, 0x0f, 0xa8, 0x55, 0x3e, 0x39, 0x6e, 0xaa, 0xbe, 0x24, 0x2a, 0xd8, 0xbd, 0xc8, 0x15, 0x2f, 0x3e, 0x94, 0x46, 0x94, 0xbd, 0x11, 0xac, 0x47, 0xbe, 0xdf, 0xb1, 0x9f, 0x3d, 0xd2, 0x3d, 0x72, 0x3e, 0x89, 0x5a, 0x97, 0xbe, 0xbe, 0x42, 0x5f, 0x3e, 0x0f, 0x3f, 0xb6, 0x3e, 0x6b, 0x46, 0x3c, 0x3e, 0xfc, 0xa8, 0x0f, 0xbb, 0xf8, 0x8b, 0x81, 0xbe, 0x84, 0x75, 0xbb, 0x3e, 0x48, 0xe5, 0xa5, 0x3d, 0xac, 0x49, 0xc9, 0x3d, 0xcb, 0xa8, 0x89, 0xbe, 0x8b, 0x0a, 0x94, 0x3d, 0x2b, 0xcd, 0xfa, 0x3c, 0xe6, 0x80, 0x62, 0x3e, 0xce, 0xa2, 0x3f, 0x3e, 0x4e, 0x84, 0x80, 0xbd, 0xcd, 0xe7, 0x8c, 0x3e, 0x89, 0xfc, 0x18, 0xbe, 0xec, 0xb2, 0x06, 0x3e, 0x9c, 0x70, 0x35, 0x3e, 0xec, 0xb1, 0xac, 0x3e, 0xf1, 0x7a, 0xc8, 0x3e, 0x38, 0x0c, 0xaa, 0x3e, 0x60, 0x9d, 0x04, 0x3a, 0xe0, 0x05, 0xbe, 0x3e, 0xd2, 0xbd, 0xd1, 0x3e, 0xb4, 0x28, 0x77, 0xbe, 0x72, 0x89, 0x61, 0x3d, 0xbc, 0xba, 0xaa, 0xbe, 0x14, 0xec, 0x8b, 0xbd, 0x49, 0xdc, 0x02, 0x3e, 0x59, 0x11, 0x3f, 0x3e, 0xf6, 0xc2, 0xab, 0xbe, 0xd4, 0xf3, 0x81, 0xbd, 0x82, 0xa7, 0xbb, 0x3d, 0xa8, 0x59, 0x4e, 0x3d, 0x85, 0x2e, 0x85, 0x3e, 0x8a, 0x65, 0x8c, 0xbe, 0x31, 0xc8, 0xaa, 0xbe, 0xf1, 0x95, 0x65, 0xbe, 0x12, 0x87, 0x3b, 0xbe, 0xb4, 0x22, 0xf5, 0x3d, 0x00, 0x53, 0x5e, 0x3c, 0xd3, 0x33, 0x98, 0xbe, 0x71, 0x78, 0x3f, 0xbe, 0x9e, 0x75, 0x24, 0x3e, 0x10, 0xf7, 0xcb, 0x3c, 0x0b, 0x00, 0x8b, 0xbe, 0x39, 0xa8, 0xb4, 0x3e, 0xa6, 0x8c, 0x21, 0x3e, 0xe0, 0x57, 0x01, 0xbd, 0x66, 0x59, 0x36, 0xbe, 0x8a, 0x66, 0x85, 0xbe, 0x73, 0x99, 0x8a, 0x3e, 0x1c, 0xc3, 0xae, 0xbe, 0xae, 0xe8, 0x8b, 0xbe, 0xf2, 0x2c, 0x78, 0x3e, 0xfe, 0x15, 0x76, 0x3e, 0x3e, 0x6e, 0x1c, 0xbe, 0xdd, 0x51, 0x97, 0x3e, 0x22, 0xed, 0x51, 0xbe, 0xe0, 0x81, 0x7b, 0xbd, 0x36, 0xd7, 0x7f, 0xbe, 0xe0, 0x52, 0x2f, 0xbc, 0xcd, 0xa3, 0xa5, 0x3e, 0x6b, 0xa7, 0x72, 0xbe, 0xd9, 0x5f, 0x84, 0x3e, 0x80, 0xe6, 0xe5, 0x3b, 0x4e, 0x35, 0x9a, 0xbe, 0x75, 0x6c, 0xa3, 0xbe, 0xa4, 0x2b, 0xb9, 0x3d, 0xf6, 0x5a, 0x98, 0xbe, 0x48, 0x84, 0x4d, 0x3d, 0x17, 0x68, 0x65, 0xbe, 0x6e, 0x3b, 0x77, 0x3e, 0x15, 0xae, 0xb1, 0x3e, 0x81, 0xf0, 0x9a, 0x3e, 0x6a, 0xff, 0x71, 0xbe, 0xa0, 0xa3, 0xb7, 0x3c, 0x48, 0x51, 0x39, 0x3d, 0xf6, 0x7f, 0x35, 0x3e, 0x00, 0xfb, 0xb3, 0xbe, 0xe9, 0xbb, 0xa7, 0xbe, 0x82, 0xe9, 0x62, 0x3e, 0x11, 0x7b, 0x66, 0xbe, 0x6c, 0x80, 0x32, 0xbe, 0xb0, 0x91, 0xd3, 0x3d, 0xff, 0xb0, 0x0b, 0xbe, 0xfc, 0xc5, 0x9d, 0x3d, 0x51, 0x17, 0x30, 0xbe, 0x20, 0xf6, 0xa7, 0xbe, 0x36, 0x70, 0xb0, 0xbe, 0x60, 0x8b, 0xb2, 0xbc, 0xfb, 0x66, 0xad, 0xbe, 0xd0, 0x7d, 0x96, 0xbc, 0xa0, 0x36, 0x8f, 0xbc, 0xc7, 0x5d, 0x8f, 0x3e, 0x7c, 0x9b, 0xc3, 0xbd, 0x0a, 0x09, 0x20, 0x3e, 0x0e, 0x4b, 0x60, 0x3e, 0xe6, 0x24, 0x1d, 0xbe, 0x6d, 0x0b, 0xd5, 0x3e, 0x00, 0x60, 0xbb, 0x3c, 0x43, 0xfe, 0x86, 0xbd, 0x60, 0xec, 0x51, 0xbd, 0x0d, 0x96, 0x95, 0xbe, 0xee, 0xa1, 0x46, 0xbe, 0xb2, 0x73, 0xd5, 0x3d, 0xa0, 0xfe, 0xb6, 0xbd, 0xe6, 0xdb, 0xd4, 0xbd, 0x0d, 0x9e, 0xb3, 0xbe, 0x68, 0xde, 0x08, 0x3f, 0x02, 0xa9, 0x0d, 0x3e, 0x48, 0x67, 0x7b, 0x3e, 0x19, 0x3c, 0xbe, 0xbe, 0x4c, 0xf1, 0x92, 0xbd, 0x99, 0x5d, 0x2e, 0x3c, 0xa0, 0xa5, 0x10, 0x3b, 0x7e, 0x96, 0x8b, 0xbe, 0xd4, 0x30, 0x8e, 0x3e, 0x1f, 0x5d, 0x10, 0xbe, 0xa2, 0xf1, 0x22, 0x3e, 0x9b, 0x3d, 0xc4, 0x3e, 0xa3, 0xc2, 0x17, 0xbe, 0xeb, 0xc6, 0xf0, 0x3b, 0x01, 0x9b, 0xd6, 0x3b, 0x1f, 0xe1, 0x91, 0xbe, 0x38, 0xc2, 0xa9, 0x3e, 0x70, 0x84, 0x86, 0xbc, 0xd7, 0xdd, 0x81, 0xbe, 0x99, 0xbb, 0x62, 0x3d, 0x64, 0x98, 0x11, 0x3d, 0x9e, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xda, 0xd4, 0x8f, 0xbe, 0x2a, 0xee, 0x26, 0x3f, 0x15, 0xc0, 0xe3, 0xbe, 0x8c, 0x1a, 0x1a, 0x3d, 0xed, 0xad, 0x7f, 0x3d, 0x4c, 0x40, 0x48, 0x3f, 0xeb, 0x50, 0x2f, 0xbf, 0x80, 0x82, 0x75, 0xbd, 0x54, 0xb0, 0xfc, 0x3e, 0xe6, 0xa2, 0xa3, 0x3e, 0xb2, 0x8a, 0x36, 0xbf, 0x2b, 0xee, 0xc4, 0xbe, 0xf6, 0x08, 0x33, 0x3e, 0x78, 0x6a, 0x87, 0xbe, 0xd8, 0xf0, 0xb3, 0xbd, 0xda, 0x1d, 0x13, 0x3f, 0x64, 0x86, 0xc3, 0xbe, 0xef, 0x29, 0xf9, 0x3e, 0x98, 0xf4, 0xc5, 0x3d, 0xbc, 0xa2, 0xc2, 0xba, 0x07, 0x9e, 0x01, 0x3f, 0x12, 0x59, 0x40, 0xbf, 0x6f, 0xa5, 0x3d, 0x3e, 0x70, 0xde, 0x21, 0x3d, 0x98, 0x2e, 0x48, 0xbe, 0x18, 0x3c, 0x6c, 0x3e, 0x8d, 0xcc, 0xc6, 0xbe, 0x9d, 0x9c, 0xb5, 0x3e, 0x6d, 0x50, 0xca, 0xbd, 0x14, 0xbd, 0xb3, 0xbe, 0xc0, 0x1e, 0x8d, 0x3e, 0x8c, 0x9b, 0x46, 0x3d, 0xfa, 0x14, 0x42, 0x3e, 0x34, 0x3f, 0xd4, 0xbe, 0xa2, 0xae, 0x13, 0x3e, 0xc2, 0x9a, 0xbf, 0xbe, 0xd4, 0x16, 0xcd, 0x3c, 0xe0, 0xd4, 0xbe, 0xbe, 0x42, 0x5e, 0x94, 0xbd, 0x18, 0x04, 0xbb, 0x3d, 0x12, 0xd4, 0x92, 0xbd, 0xb6, 0xfb, 0x12, 0xbe, 0xb5, 0x89, 0xb8, 0x3d, 0x52, 0xe3, 0xe3, 0x3e, 0x22, 0x88, 0x11, 0x3f, 0x20, 0xdd, 0x15, 0x3e, 0xd1, 0x48, 0x06, 0x3f, 0xdb, 0x00, 0x65, 0xbe, 0x64, 0xfa, 0xff, 0xff, 0x68, 0xfa, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x2c, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x1a, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x2c, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0xa4, 0x03, 0x00, 0x00, 0x4c, 0x03, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0xb4, 0x02, 0x00, 0x00, 0x5c, 0x02, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x7c, 0x01, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x30, 0xfc, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x5f, 0x31, 0x3a, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x9e, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x88, 0xfc, 0xff, 0xff, 0x3c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1a, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x04, 0xfd, 0xff, 0xff, 0x58, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x5f, 0x32, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xb2, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x9c, 0xfd, 0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x96, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x1c, 0xfe, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xde, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x64, 0xfe, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x32, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0xb8, 0xfe, 0xff, 0xff, 0x2d, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x8a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x10, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x32, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xc2, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x48, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x31, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x9c, 0xff, 0xff, 0xff, 0x0e, 0x00, 0x00, 0x00, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x61, 0x73, 0x5f, 0x74, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x3a, 0x30, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09 };