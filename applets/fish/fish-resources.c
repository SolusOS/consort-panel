#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.fish"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2496]; const double alignment; void * const ptr;}  fish_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x08, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
  0x48, 0xe2, 0x75, 0x18, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x00, 0x0d, 0x00, 0x76, 0x00, 
  0x10, 0x01, 0x00, 0x00, 0x5f, 0x01, 0x00, 0x00, 
  0xb0, 0xb7, 0x24, 0x30, 0x03, 0x00, 0x00, 0x00, 
  0x5f, 0x01, 0x00, 0x00, 0x06, 0x00, 0x4c, 0x00, 
  0x68, 0x01, 0x00, 0x00, 0x6c, 0x01, 0x00, 0x00, 
  0x93, 0x1c, 0x9c, 0x02, 0x06, 0x00, 0x00, 0x00, 
  0x6c, 0x01, 0x00, 0x00, 0x07, 0x00, 0x76, 0x00, 
  0x78, 0x01, 0x00, 0x00, 0x87, 0x09, 0x00, 0x00, 
  0x4b, 0x50, 0x90, 0x0b, 0x04, 0x00, 0x00, 0x00, 
  0x87, 0x09, 0x00, 0x00, 0x04, 0x00, 0x4c, 0x00, 
  0x8c, 0x09, 0x00, 0x00, 0x90, 0x09, 0x00, 0x00, 
  0xd4, 0xb5, 0x02, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x90, 0x09, 0x00, 0x00, 0x01, 0x00, 0x4c, 0x00, 
  0x94, 0x09, 0x00, 0x00, 0x98, 0x09, 0x00, 0x00, 
  0x44, 0x9f, 0x99, 0xd8, 0x07, 0x00, 0x00, 0x00, 
  0x98, 0x09, 0x00, 0x00, 0x07, 0x00, 0x4c, 0x00, 
  0xa0, 0x09, 0x00, 0x00, 0xa4, 0x09, 0x00, 0x00, 
  0xbd, 0x17, 0x85, 0xaa, 0x05, 0x00, 0x00, 0x00, 
  0xa4, 0x09, 0x00, 0x00, 0x05, 0x00, 0x4c, 0x00, 
  0xac, 0x09, 0x00, 0x00, 0xb4, 0x09, 0x00, 0x00, 
  0x6f, 0xd8, 0xf6, 0x94, 0x01, 0x00, 0x00, 0x00, 
  0xb4, 0x09, 0x00, 0x00, 0x06, 0x00, 0x4c, 0x00, 
  0xbc, 0x09, 0x00, 0x00, 0xc0, 0x09, 0x00, 0x00, 
  0x66, 0x69, 0x73, 0x68, 0x2d, 0x6d, 0x65, 0x6e, 
  0x75, 0x2e, 0x78, 0x6d, 0x6c, 0x00, 0x00, 0x00, 
  0x42, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xb3, 0xc9, 0x4d, 0xcd, 0x2b, 0xcd, 
  0x2c, 0x49, 0xcd, 0x55, 0xc8, 0x4b, 0xcc, 0x4d, 
  0xb5, 0x55, 0x72, 0xcb, 0x2c, 0xce, 0x50, 0x08, 
  0x28, 0x4a, 0x4d, 0x4b, 0x2d, 0x4a, 0xcd, 0x4b, 
  0x4e, 0x2d, 0x56, 0xf0, 0x04, 0xca, 0x29, 0x29, 
  0x24, 0x26, 0x97, 0x64, 0xe6, 0xe7, 0x41, 0xa4, 
  0x91, 0x64, 0x95, 0xf4, 0xed, 0xb8, 0x00, 0x1e, 
  0x4a, 0x17, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x67, 
  0x6e, 0x6f, 0x6d, 0x65, 0x2f, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x00, 0x00, 0x66, 0x69, 0x73, 0x68, 
  0x2e, 0x75, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x6d, 0x40, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x5c, 0x5b, 0x73, 0xe2, 0x36, 
  0x14, 0x7e, 0xcf, 0xaf, 0x50, 0xd5, 0x99, 0xbe, 
  0x74, 0x08, 0x31, 0xdb, 0x24, 0xbb, 0x5b, 0xf0, 
  0xce, 0x6e, 0xda, 0xdd, 0x7d, 0xe8, 0x74, 0x76, 
  0xda, 0x4e, 0x5f, 0x3d, 0xc2, 0x3e, 0x80, 0x16, 
  0x21, 0xb9, 0x92, 0x0c, 0xe4, 0xdf, 0x57, 0xb6, 
  0x49, 0x30, 0x60, 0x63, 0xf9, 0x92, 0x84, 0x00, 
  0x79, 0x02, 0x5b, 0x47, 0x3e, 0xdf, 0x77, 0x6e, 
  0xf6, 0x39, 0x38, 0xfd, 0x0f, 0xcb, 0x19, 0x43, 
  0x73, 0x90, 0x8a, 0x0a, 0x3e, 0xc0, 0xce, 0xe5, 
  0x15, 0xfe, 0xe0, 0x5e, 0xf4, 0x29, 0xd7, 0x20, 
  0x47, 0xc4, 0x07, 0xf7, 0x02, 0xa1, 0xbe, 0x84, 
  0xff, 0x22, 0x2a, 0x41, 0x21, 0x46, 0x87, 0x03, 
  0x3c, 0xd6, 0xd3, 0x9f, 0xf1, 0x5a, 0xa4, 0x77, 
  0xe9, 0xdc, 0xe0, 0x6e, 0xb2, 0xee, 0x87, 0x4e, 
  0x07, 0x3d, 0x4a, 0x76, 0x38, 0x99, 0x51, 0x3e, 
  0xee, 0x84, 0x82, 0x51, 0xff, 0x1e, 0x69, 0x11, 
  0x32, 0x98, 0x03, 0xeb, 0xf8, 0xc2, 0xac, 0x58, 
  0xea, 0x88, 0x30, 0xd4, 0xe9, 0x24, 0x62, 0x62, 
  0xf8, 0x1d, 0x7c, 0x8d, 0x7c, 0x46, 0x94, 0x1a, 
  0xe0, 0x2f, 0x7a, 0xfa, 0x1b, 0x25, 0x4c, 0x8c, 
  0x31, 0xa2, 0xc1, 0x00, 0x8f, 0xa8, 0x9a, 0x78, 
  0xa1, 0x84, 0x11, 0x48, 0xe0, 0x3e, 0x28, 0x2f, 
  0x48, 0x4f, 0xc6, 0x92, 0x46, 0x36, 0x94, 0x22, 
  0x04, 0xa9, 0xef, 0x91, 0xb9, 0x1a, 0x0c, 0xf0, 
  0x50, 0xc8, 0x00, 0xa4, 0xb7, 0xa0, 0x81, 0x9e, 
  0x60, 0xf7, 0xba, 0xdf, 0x7d, 0x38, 0x9f, 0xbf, 
  0x5c, 0x53, 0xcd, 0x00, 0x23, 0x2d, 0x09, 0x57, 
  0x8c, 0x68, 0x32, 0x64, 0xe6, 0xe0, 0x3d, 0x28, 
  0xec, 0x7e, 0x36, 0x97, 0x45, 0xdf, 0xd6, 0x97, 
  0x2d, 0xdd, 0xe9, 0x3e, 0x04, 0x6f, 0x62, 0xc0, 
  0x63, 0x37, 0x55, 0x70, 0x47, 0xc0, 0x9f, 0x50, 
  0x16, 0xa4, 0xf4, 0x70, 0x62, 0x68, 0x88, 0xbf, 
  0x0e, 0xf0, 0x7c, 0x28, 0x96, 0x2b, 0x2c, 0x79, 
  0x4c, 0xfc, 0xfb, 0xc9, 0x9c, 0x4e, 0x78, 0x48, 
  0x77, 0xed, 0xc4, 0xeb, 0x7b, 0x8f, 0x02, 0xbb, 
  0x7a, 0xcc, 0xa9, 0xa2, 0x06, 0x05, 0x76, 0xff, 
  0x91, 0x11, 0x6c, 0xeb, 0x90, 0x27, 0x20, 0x24, 
  0x05, 0xae, 0x89, 0x36, 0xb6, 0xc4, 0xae, 0x31, 
  0xaa, 0xa6, 0x3e, 0x61, 0x36, 0x82, 0x2a, 0x24, 
  0xbe, 0xb1, 0x2f, 0x76, 0x7b, 0xb9, 0xab, 0x13, 
  0x7c, 0xeb, 0xef, 0xfb, 0xc1, 0xc5, 0xa8, 0xae, 
  0x71, 0x76, 0x75, 0x0d, 0x64, 0x35, 0xfc, 0xa1, 
  0x31, 0x29, 0x7b, 0x89, 0x71, 0xde, 0x16, 0x8a, 
  0xec, 0xb0, 0x63, 0xc3, 0xd0, 0x0d, 0xde, 0x96, 
  0xa8, 0xc9, 0x52, 0x63, 0xc8, 0x7b, 0x61, 0xdf, 
  0xec, 0x95, 0xca, 0x45, 0x9e, 0x8f, 0xfe, 0x0f, 
  0x32, 0x04, 0x96, 0xc2, 0x67, 0xf1, 0x47, 0xe7, 
  0x0d, 0xce, 0x13, 0x6c, 0x40, 0x42, 0x9e, 0xf0, 
  0x92, 0x30, 0x3a, 0x36, 0x1c, 0x5c, 0x55, 0x15, 
  0x64, 0xa9, 0xba, 0x39, 0xc9, 0xe4, 0x0b, 0x70, 
  0x90, 0xfb, 0xd9, 0x4c, 0x36, 0x24, 0x5a, 0x4b, 
  0x3a, 0x8c, 0x34, 0xa8, 0xfc, 0x05, 0xd9, 0x25, 
  0xab, 0x8b, 0x2e, 0x80, 0x8e, 0x27, 0xda, 0xa4, 
  0x63, 0xc2, 0xa2, 0xc4, 0xdf, 0x59, 0x90, 0x26, 
  0xe3, 0x1c, 0xd9, 0xee, 0xfe, 0xfd, 0xfb, 0xdd, 
  0xd4, 0x02, 0xb9, 0xe7, 0x8c, 0x71, 0xa7, 0xc6, 
  0xba, 0x76, 0x4c, 0xc0, 0x32, 0x24, 0x3c, 0x30, 
  0x49, 0x94, 0x30, 0x55, 0x99, 0xff, 0x11, 0x65, 
  0xac, 0xa6, 0x68, 0x28, 0x14, 0x4d, 0x1d, 0xb8, 
  0xc4, 0x78, 0xe6, 0x6c, 0x11, 0x9e, 0x7e, 0xb7, 
  0xc0, 0x43, 0xab, 0x78, 0xee, 0xd7, 0xc7, 0xb8, 
  0x9d, 0x14, 0xc4, 0x6d, 0x73, 0xb7, 0x2d, 0x54, 
  0xc7, 0x32, 0x98, 0x8a, 0xb4, 0x6a, 0xac, 0x59, 
  0x71, 0x6c, 0xb8, 0x2b, 0xee, 0x4b, 0xc4, 0xf7, 
  0x39, 0x62, 0xb9, 0x33, 0x36, 0x76, 0xc8, 0x86, 
  0x4e, 0xd9, 0xc8, 0x31, 0x4b, 0x9c, 0x73, 0xaf, 
  0x83, 0xd6, 0xf1, 0x8a, 0xcd, 0x02, 0x73, 0xfb, 
  0x9c, 0x2e, 0x51, 0xb9, 0xe0, 0x34, 0x2b, 0x3c, 
  0x76, 0x0c, 0x95, 0x85, 0x73, 0x7c, 0x45, 0x2f, 
  0x7b, 0xcb, 0xf6, 0x44, 0x64, 0xed, 0xbf, 0xaf, 
  0xe8, 0x59, 0x6f, 0x51, 0x0a, 0xb6, 0x34, 0x59, 
  0x24, 0x88, 0x57, 0xe1, 0x5b, 0xb2, 0x4f, 0x4b, 
  0xb8, 0x1b, 0x15, 0xe5, 0x7a, 0x05, 0xda, 0xfb, 
  0xd3, 0x2c, 0x40, 0x62, 0x84, 0xe2, 0xa7, 0x8d, 
  0xf7, 0x4d, 0xae, 0x11, 0x29, 0xf0, 0x66, 0x44, 
  0x4e, 0xa3, 0xb0, 0x39, 0xe8, 0x78, 0xaf, 0x88, 
  0x9b, 0xfb, 0x57, 0x46, 0x79, 0x0b, 0x1c, 0xce, 
  0x38, 0xcc, 0x04, 0xa7, 0x7e, 0x7c, 0x37, 0x3c, 
  0x06, 0xf3, 0xa0, 0x92, 0x98, 0xd6, 0xc4, 0xa0, 
  0xbc, 0xb7, 0xdf, 0xb6, 0x2c, 0x37, 0xdb, 0xe7, 
  0xe8, 0xd6, 0x72, 0x75, 0x4b, 0x39, 0xbb, 0x95, 
  0xdc, 0x6d, 0x99, 0xc3, 0xad, 0x72, 0x79, 0xd3, 
  0x20, 0xfe, 0x3d, 0xb6, 0x6c, 0x26, 0x88, 0x13, 
  0x4b, 0xbf, 0x64, 0x10, 0xfb, 0x84, 0x7b, 0x23, 
  0xe1, 0x47, 0xaa, 0xf9, 0x56, 0xc4, 0xd7, 0x74, 
  0x4e, 0x74, 0xdc, 0x0e, 0x80, 0x11, 0x89, 0x98, 
  0xae, 0xba, 0xe5, 0xd3, 0xfb, 0xf1, 0xda, 0x6f, 
  0x9c, 0x97, 0xf0, 0x1b, 0x1b, 0x80, 0x76, 0xe0, 
  0x1a, 0x07, 0x84, 0x05, 0xa8, 0x52, 0x40, 0xcd, 
  0xca, 0xb6, 0x2f, 0x66, 0x33, 0x93, 0x54, 0x4e, 
  0xab, 0x72, 0x3f, 0x80, 0x3e, 0xf6, 0xe2, 0x7d, 
  0x27, 0xbc, 0x04, 0x28, 0xd2, 0x02, 0xc9, 0x88, 
  0xa3, 0xc5, 0x04, 0xb8, 0x61, 0x84, 0xfa, 0x53, 
  0x08, 0xde, 0x1f, 0x72, 0xfd, 0x7d, 0x30, 0xd0, 
  0xb9, 0x04, 0x9f, 0x40, 0x09, 0xde, 0x30, 0xf6, 
  0xb9, 0x0a, 0x9f, 0xab, 0x70, 0x6b, 0x55, 0xd8, 
  0x79, 0xae, 0x2a, 0xdc, 0x7e, 0x5f, 0xa6, 0x12, 
  0x88, 0xfa, 0x7d, 0x91, 0xf6, 0x3a, 0x9b, 0xd6, 
  0x0a, 0x57, 0xef, 0x30, 0x16, 0x29, 0x59, 0xac, 
  0x60, 0xad, 0x34, 0x59, 0xa0, 0x58, 0xae, 0x52, 
  0xf5, 0xc6, 0x14, 0x6f, 0x4f, 0x7d, 0x4c, 0xd1, 
  0x7b, 0xa5, 0x63, 0x8a, 0x8f, 0x9c, 0xce, 0x12, 
  0x66, 0xcf, 0x83, 0x8a, 0xd3, 0x1c, 0x54, 0xdc, 
  0x1e, 0xe4, 0xa0, 0xe2, 0xf6, 0xf9, 0x07, 0x15, 
  0x79, 0xd1, 0x71, 0x9e, 0x5d, 0x1c, 0xf4, 0xec, 
  0xe2, 0xdd, 0x79, 0x76, 0x51, 0x12, 0xe1, 0x2a, 
  0x04, 0x38, 0xb1, 0x16, 0x48, 0x0a, 0xf9, 0xe8, 
  0xa7, 0x17, 0xdf, 0x48, 0xa4, 0x00, 0x99, 0xc5, 
  0x68, 0x24, 0xcd, 0xda, 0x83, 0x6e, 0x7a, 0xa4, 
  0x26, 0x51, 0x21, 0xe5, 0xe7, 0x8e, 0xc7, 0x11, 
  0x76, 0x3c, 0xfe, 0x36, 0x86, 0xfd, 0x14, 0x69, 
  0x6d, 0x54, 0xcf, 0x44, 0x60, 0x6c, 0xee, 0x23, 
  0xe9, 0x79, 0x50, 0xbe, 0xd2, 0xca, 0xf3, 0x27, 
  0x44, 0x62, 0xf7, 0xa7, 0x1f, 0x97, 0xbd, 0xeb, 
  0xbb, 0xcf, 0xbf, 0x36, 0xea, 0xa3, 0x04, 0xdf, 
  0x23, 0xa5, 0x67, 0x10, 0xff, 0x7a, 0x70, 0xfd, 
  0xb9, 0xd7, 0x08, 0x31, 0xa3, 0xb3, 0xa1, 0x27, 
  0x89, 0x36, 0xec, 0x5d, 0x5d, 0x3a, 0x57, 0xe9, 
  0x9f, 0xf3, 0xcb, 0xbb, 0x26, 0x9b, 0x06, 0x74, 
  0x4c, 0xb5, 0xaa, 0xd4, 0x4a, 0xd9, 0xdd, 0x84, 
  0x47, 0x33, 0x90, 0xd4, 0x3f, 0xbc, 0x56, 0xd1, 
  0xe1, 0xe6, 0x00, 0xe7, 0x75, 0xe5, 0x80, 0x9d, 
  0x02, 0x6c, 0x90, 0xe8, 0xa3, 0xaf, 0xc2, 0x0a, 
  0x7c, 0xc1, 0x03, 0x75, 0x98, 0xcd, 0xcf, 0xde, 
  0x71, 0x35, 0x3f, 0x6b, 0x85, 0x6a, 0x0b, 0x61, 
  0x7a, 0x00, 0x4d, 0xd8, 0x7a, 0x4f, 0x01, 0x77, 
  0x13, 0xf0, 0xa7, 0xd9, 0xba, 0x2c, 0x85, 0x79, 
  0x7c, 0x01, 0x4f, 0x8b, 0xf1, 0x38, 0x8e, 0xad, 
  0x8b, 0x76, 0x62, 0xc0, 0xfb, 0x2b, 0xd9, 0x16, 
  0x09, 0x8e, 0x1e, 0x9e, 0x8a, 0x90, 0xb1, 0x14, 
  0x30, 0x55, 0x97, 0xe1, 0x56, 0x1e, 0x3e, 0x6a, 
  0x96, 0xff, 0xed, 0x6d, 0x24, 0xf8, 0x40, 0xe7, 
  0xd9, 0x69, 0x47, 0x23, 0xe7, 0x69, 0x70, 0xa7, 
  0xbd, 0x53, 0x98, 0x25, 0x59, 0x78, 0x94, 0x07, 
  0x86, 0x70, 0x2d, 0x64, 0x95, 0xbd, 0x4e, 0x29, 
  0x46, 0xdf, 0x9c, 0x07, 0x25, 0xe7, 0x41, 0x89, 
  0xb5, 0x72, 0xf6, 0x83, 0x92, 0x3c, 0x85, 0xf2, 
  0x95, 0xa9, 0xac, 0x48, 0x8e, 0x12, 0x3b, 0x0a, 
  0x14, 0xbc, 0x59, 0x14, 0x0f, 0x67, 0x05, 0xf7, 
  0x88, 0x04, 0x82, 0xf7, 0xbf, 0x87, 0xf3, 0x35, 
  0x2d, 0x0c, 0xdb, 0xaf, 0x1a, 0x65, 0x36, 0xe8, 
  0xb5, 0xf2, 0x6e, 0x8e, 0xe5, 0x34, 0x29, 0x5b, 
  0xa6, 0x26, 0xc0, 0x42, 0x6f, 0x98, 0x1e, 0x28, 
  0xb7, 0xeb, 0xea, 0x16, 0x73, 0xac, 0xa7, 0x9d, 
  0x58, 0xb0, 0xca, 0x58, 0xa8, 0xf6, 0x40, 0xaa, 
  0x42, 0x6d, 0xc9, 0x13, 0xb5, 0x1e, 0x9c, 0xb7, 
  0x50, 0x8c, 0xf2, 0x0a, 0x90, 0xd2, 0xc2, 0x9f, 
  0x96, 0x5d, 0xbd, 0x79, 0xc4, 0x59, 0x17, 0x83, 
  0x9a, 0x05, 0xe0, 0x60, 0x46, 0xa1, 0x59, 0xe7, 
  0x0d, 0x04, 0x87, 0x5a, 0xce, 0xeb, 0x33, 0x51, 
  0x0d, 0xee, 0xab, 0xf3, 0xde, 0x09, 0x51, 0x67, 
  0xd7, 0x7f, 0x6a, 0xd7, 0x7f, 0xe1, 0xe2, 0x66, 
  0x05, 0xbc, 0x06, 0xe8, 0x1d, 0xc0, 0x46, 0x19, 
  0x2f, 0x7e, 0xff, 0x16, 0xbb, 0xc0, 0x03, 0x6b, 
  0xa9, 0xb2, 0x0c, 0x51, 0x5e, 0x7a, 0x37, 0xa9, 
  0xd9, 0x38, 0xd9, 0x4f, 0x8b, 0x67, 0x27, 0xed, 
  0x7a, 0x3f, 0x4e, 0xb1, 0x37, 0x0f, 0x23, 0x09, 
  0x2a, 0x14, 0x5c, 0x19, 0x6d, 0x3a, 0x8e, 0x83, 
  0xdd, 0x4c, 0xb1, 0xeb, 0x77, 0x37, 0x56, 0x96, 
  0xcb, 0x5f, 0x63, 0x37, 0x93, 0x6e, 0x72, 0xc5, 
  0xb7, 0x0e, 0x26, 0x4a, 0x65, 0x21, 0xec, 0x26, 
  0xb3, 0x8f, 0xeb, 0xbe, 0x64, 0x92, 0xd0, 0xd6, 
  0xbd, 0x49, 0xa7, 0xe0, 0xfd, 0x6b, 0x26, 0x16, 
  0x20, 0x73, 0x3c, 0x6f, 0x27, 0xfe, 0xc2, 0x30, 
  0x5e, 0xd7, 0xbb, 0x2e, 0x7d, 0x45, 0x3b, 0xf9, 
  0xbd, 0x40, 0xce, 0xbd, 0xfb, 0xce, 0x80, 0x49, 
  0x43, 0x68, 0x1e, 0x81, 0x7c, 0x09, 0x69, 0x1f, 
  0xb5, 0x54, 0x85, 0x90, 0x8c, 0x21, 0x2b, 0xb0, 
  0xa5, 0x49, 0x5d, 0x66, 0x7a, 0xfb, 0x99, 0x59, 
  0xf7, 0x62, 0x1f, 0xfe, 0x6c, 0xb9, 0x72, 0xae, 
  0x2c, 0xa9, 0x72, 0xaa, 0x52, 0x55, 0x43, 0xa7, 
  0x6d, 0xf2, 0x9c, 0x22, 0xf2, 0xfa, 0xdd, 0xcc, 
  0xbf, 0x12, 0xf8, 0x1f, 0xe0, 0x76, 0xb0, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x6f, 
  0x72, 0x67, 0x2f, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x2f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x61, 0x70, 0x70, 0x6c, 0x65, 0x74, 0x2f, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x66, 0x69, 0x73, 0x68, 
  0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x70, 0x61, 0x6e, 0x65, 
  0x6c, 0x2f, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { fish_resource_data.data, sizeof (fish_resource_data.data) };
extern GResource *fish_get_resource (void);
GResource *fish_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif


#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
