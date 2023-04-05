/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.io/license.html
 */

/*
 * This font is copyright Andrew Hannam and has been donated to uGFX as a default font.
 * It is licensed as per the rest of the uGFX library.
 * Other fonts are licensed as per their own licenses.
 *
 * UI1 contains a full character set from 0 to 255
 * UI2 contains just the printable characters (space to tilda) and is therefore much smaller
 *
 * UI1 and UI2 support the normal size, Narrow (double height), Double (double sized) versions.
 *
 */

#ifndef MF_RLEFONT_INTERNALS
#define MF_RLEFONT_INTERNALS
#endif
#include "mf_rlefont.h"

#ifndef MF_RLEFONT_VERSION_4_SUPPORTED
#error The font file is not compatible with this version of mcufont.
#endif

static const gU8 mf_rlefont_UI1_dictionary_data[283] = {
    0x03, 0x80, 0x05, 0x84, 0x04, 0x03, 0x82, 0x08, 0x07, 0x81, 0x24, 0x0b, 0x05, 0x80, 0x02, 0x02, 
    0x81, 0x80, 0x0f, 0x83, 0x06, 0x01, 0x80, 0x05, 0x80, 0x03, 0x37, 0x22, 0x03, 0x83, 0x20, 0x06, 
    0x80, 0x01, 0x80, 0x85, 0x04, 0x80, 0x01, 0x80, 0x06, 0x12, 0x05, 0x82, 0x07, 0x80, 0x07, 0x15, 
    0x0c, 0x81, 0x0d, 0x06, 0x82, 0x1d, 0x09, 0x80, 0x0e, 0x0a, 0x03, 0x02, 0x80, 0x06, 0x80, 0x01, 
    0x80, 0x03, 0x80, 0x03, 0x01, 0x80, 0x07, 0x01, 0x80, 0x01, 0x80, 0x02, 0x04, 0x80, 0x03, 0x80, 
    0x06, 0x80, 0x03, 0x80, 0x04, 0x81, 0x80, 0x04, 0x04, 0x80, 0x02, 0x03, 0x80, 0x03, 0x09, 0x80, 
    0x07, 0x80, 0x02, 0x80, 0x82, 0x08, 0x80, 0x01, 0x06, 0x80, 0x0a, 0x80, 0x08, 0x01, 0x81, 0x0b, 
    0x80, 0x07, 0x08, 0x80, 0x09, 0x02, 0x80, 0x01, 0xc0, 0xde, 0x40, 0x22, 0x22, 0x39, 0x94, 0x18, 
    0x8c, 0x86, 0xfe, 0x86, 0x2a, 0xa6, 0x27, 0x19, 0x22, 0x39, 0x38, 0x86, 0x45, 0xc8, 0x2d, 0xbc, 
    0x44, 0x32, 0x34, 0x44, 0x38, 0x93, 0x1e, 0x44, 0x86, 0x21, 0x3c, 0xfc, 0x95, 0x38, 0xeb, 0x27, 
    0x2e, 0x49, 0x20, 0x85, 0x1e, 0x48, 0x0f, 0x34, 0x96, 0x3f, 0x33, 0x3e, 0x1e, 0xfc, 0xa4, 0x18, 
    0x37, 0x39, 0x44, 0x38, 0x18, 0xe5, 0xa4, 0x38, 0x30, 0x86, 0x45, 0x49, 0x41, 0x8c, 0x0f, 0x3f, 
    0xfe, 0x87, 0xcc, 0x41, 0x30, 0xcb, 0xa4, 0x8c, 0x18, 0xa5, 0x1e, 0x43, 0x27, 0x37, 0x47, 0x21, 
    0x3c, 0x25, 0x3a, 0x27, 0xf8, 0xa4, 0x94, 0x35, 0x1e, 0x48, 0x28, 0x27, 0x49, 0x44, 0x35, 0x3c, 
    0xfc, 0x1b, 0x36, 0x18, 0x37, 0x86, 0xac, 0x20, 0x44, 0x38, 0xe2, 0x42, 0x27, 0x39, 0x20, 0xac, 
    0x27, 0x98, 0x44, 0x41, 0x00, 0xbc, 0x3a, 0x94, 0xb4, 0x8c, 0x86, 0x1a, 0x1d, 0x21, 0x37, 0x32, 
    0x34, 0xfc, 0xa4, 0x8c, 0x18, 0xa5, 0x1e, 0x00, 0x95, 0xf8, 0x1d, 0x20, 0x3f, 0x44, 0x27, 0x2c, 
    0x26, 0x37, 0x2f, 0x3e, 0xec, 0x86, 0x00, 0x85, 0x88, 0x27, 0x86, 
};

static const gU16 mf_rlefont_UI1_dictionary_offsets[108] = {
    0x0000, 0x0003, 0x0005, 0x0008, 0x000a, 0x000b, 0x000c, 0x000f, 
    0x0011, 0x0013, 0x0015, 0x001a, 0x001b, 0x001c, 0x001e, 0x001f, 
    0x0020, 0x0023, 0x0024, 0x0029, 0x002a, 0x002c, 0x002f, 0x0030, 
    0x0032, 0x0033, 0x0036, 0x0038, 0x0039, 0x003a, 0x003b, 0x003f, 
    0x0044, 0x0047, 0x004a, 0x004c, 0x004d, 0x0055, 0x0056, 0x0058, 
    0x005b, 0x005e, 0x0061, 0x0064, 0x0065, 0x0068, 0x006d, 0x006f, 
    0x0072, 0x0075, 0x0078, 0x0079, 0x007a, 0x0080, 0x0082, 0x0089, 
    0x008b, 0x008e, 0x0093, 0x0099, 0x009d, 0x00a0, 0x00a3, 0x00a6, 
    0x00a8, 0x00a9, 0x00ab, 0x00ad, 0x00b1, 0x00b3, 0x00b5, 0x00b8, 
    0x00be, 0x00c0, 0x00c2, 0x00c4, 0x00cb, 0x00ce, 0x00d2, 0x00d4, 
    0x00d7, 0x00da, 0x00dc, 0x00de, 0x00e1, 0x00e5, 0x00e8, 0x00ea, 
    0x00eb, 0x00ed, 0x00ef, 0x00f4, 0x00f6, 0x00f8, 0x00f9, 0x00fc, 
    0x00ff, 0x0101, 0x0107, 0x0109, 0x010c, 0x010e, 0x0110, 0x0112, 
    0x0114, 0x0116, 0x0118, 0x011b, 
};

static const gU8 mf_rlefont_UI1_glyph_data_0[3] = {
    0x03, 0x00, 0x10, 
};

static const gU16 mf_rlefont_UI1_glyph_offsets_0[1] = {
    0x0000, 
};

static const gU8 mf_rlefont_UI1_glyph_data_1[786] = {
    0x03, 0x00, 0x10, 0x03, 0x56, 0x50, 0x34, 0x32, 0x10, 0x05, 0xfd, 0x5e, 0xee, 0x10, 0x08, 0xc4, 
    0x44, 0x5e, 0x19, 0x80, 0xac, 0x1b, 0x8b, 0x2a, 0xd8, 0x10, 0x07, 0x35, 0x66, 0x64, 0x35, 0x57, 
    0x8a, 0x48, 0x88, 0x76, 0x0f, 0x10, 0x0b, 0x2f, 0xd4, 0x8c, 0x8d, 0xa8, 0x81, 0x9a, 0x32, 0x8a, 
    0xac, 0x88, 0x96, 0xa6, 0xb4, 0x10, 0x09, 0x1f, 0x6e, 0x70, 0xd0, 0x1b, 0x8c, 0xa8, 0x88, 0xa6, 
    0x85, 0xb5, 0x27, 0xab, 0x10, 0x03, 0x56, 0x10, 0x04, 0x5d, 0x7c, 0x78, 0x56, 0xc6, 0x68, 0x04, 
    0xfd, 0x78, 0x50, 0x68, 0x5c, 0x78, 0x07, 0x2e, 0x18, 0xac, 0x54, 0xd9, 0x44, 0x10, 0x07, 0x30, 
    0x47, 0x62, 0xc2, 0x68, 0xfe, 0x10, 0x04, 0x26, 0x23, 0x82, 0xa4, 0x10, 0x05, 0x23, 0x43, 0x10, 
    0x03, 0x26, 0x23, 0xfe, 0x10, 0x07, 0x7c, 0x68, 0x56, 0x66, 0x6a, 0x78, 0x07, 0x7f, 0x8c, 0x87, 
    0x98, 0x74, 0x69, 0xe9, 0x74, 0x69, 0x97, 0x31, 0x07, 0x2f, 0x44, 0x56, 0x38, 0x62, 0xc2, 0x10, 
    0x07, 0x7f, 0x4d, 0x45, 0x5c, 0x48, 0xe3, 0x10, 0x07, 0x7f, 0x4d, 0xc4, 0x54, 0x7c, 0x1e, 0x54, 
    0x10, 0x07, 0x34, 0x3f, 0x1b, 0x44, 0x5e, 0x70, 0xc2, 0x41, 0xec, 0x10, 0x07, 0x7d, 0xc7, 0x62, 
    0x25, 0x47, 0x40, 0x76, 0x10, 0x07, 0x7f, 0x62, 0x25, 0x5b, 0x76, 0x10, 0x07, 0x7d, 0xe7, 0x44, 
    0x68, 0x66, 0x6a, 0x32, 0x10, 0x07, 0x7f, 0x6b, 0xf2, 0x5b, 0x76, 0x10, 0x07, 0x7f, 0x6b, 0x3a, 
    0x38, 0x21, 0x7c, 0x31, 0x03, 0x26, 0x38, 0x1c, 0x47, 0x10, 0x04, 0x24, 0x57, 0x1c, 0x68, 0x57, 
    0x07, 0x1c, 0x38, 0xca, 0xa4, 0x57, 0xca, 0x32, 0x10, 0x07, 0x26, 0xfe, 0x21, 0x2e, 0xc2, 0x10, 
    0x07, 0x26, 0xfe, 0x1d, 0x87, 0x1b, 0x1b, 0x44, 0x10, 0x06, 0x46, 0x6e, 0x62, 0x8a, 0x45, 0x3b, 
    0x32, 0x10, 0x0a, 0xfc, 0x19, 0x86, 0x7a, 0xb2, 0xac, 0x98, 0x98, 0x8e, 0xae, 0x89, 0xad, 0x85, 
    0x57, 0xc2, 0x10, 0x09, 0xfc, 0x27, 0x45, 0x4e, 0x22, 0x10, 0x07, 0x7d, 0x6e, 0x70, 0xe2, 0x5b, 
    0x4d, 0xc0, 0x10, 0x08, 0x30, 0x64, 0x82, 0x45, 0x76, 0x10, 0x08, 0x77, 0x4c, 0x0f, 0x40, 0x25, 
    0x10, 0x06, 0x7d, 0x3e, 0x40, 0x51, 0x66, 0xc0, 0x10, 0x06, 0x7d, 0x3e, 0x40, 0x51, 0xfd, 0x32, 
    0x10, 0x08, 0x30, 0x64, 0x49, 0x78, 0xbd, 0x1e, 0x88, 0x76, 0x10, 0x08, 0x1d, 0xa5, 0x1e, 0x67, 
    0xb4, 0x93, 0x4c, 0x10, 0x03, 0x1d, 0x56, 0x50, 0x44, 0x10, 0x05, 0xc4, 0x68, 0x50, 0x44, 0x1b, 
    0x10, 0x07, 0x34, 0xc6, 0x74, 0x81, 0x98, 0x1b, 0x27, 0xac, 0x6e, 0x70, 0xa6, 0x10, 0x06, 0x47, 
    0x62, 0x62, 0x62, 0x25, 0x10, 0x0b, 0x47, 0xfd, 0x8a, 0x90, 0x89, 0xa9, 0x7a, 0x8d, 0xa9, 0xa8, 
    0x96, 0x37, 0x8d, 0xa6, 0x10, 0x08, 0x1d, 0x60, 0xdc, 0x40, 0x98, 0x81, 0xa9, 0x1e, 0x89, 0xa8, 
    0x86, 0xa6, 0x85, 0xa5, 0x10, 0x09, 0x63, 0x67, 0x3f, 0x76, 0x10, 0x07, 0x77, 0x6b, 0x21, 0x5d, 
    0xa4, 0x10, 0x0a, 0x63, 0x67, 0x3f, 0x4d, 0xdc, 0x87, 0x1b, 0x10, 0x07, 0x77, 0x6b, 0x21, 0xd6, 
    0x5b, 0x10, 0x06, 0x2f, 0x6e, 0x66, 0x8c, 0x32, 0x47, 0xcd, 0x1b, 0x10, 0x07, 0x34, 0xc2, 0x68, 
    0x50, 0x44, 0x10, 0x08, 0x1d, 0x60, 0x4c, 0x60, 0xcc, 0x40, 0x25, 0x10, 0x09, 0x34, 0x81, 0x60, 
    0x18, 0x3c, 0x72, 0x10, 0x0d, 0x1d, 0xa5, 0xb4, 0x94, 0xac, 0x98, 0x96, 0x8e, 0xad, 0xac, 0x98, 
    0x98, 0x67, 0xd4, 0x10, 0x09, 0x34, 0x22, 0xf8, 0x18, 0x98, 0x68, 0x69, 0xa6, 0xa4, 0xa4, 0x10, 
    0x07, 0x1d, 0x3c, 0x72, 0x62, 0x10, 0x08, 0x7d, 0xcb, 0x48, 0x5a, 0x2d, 0xf8, 0x78, 0x29, 0x10, 
    0x04, 0xf7, 0x68, 0x50, 0x68, 0xc6, 0x1b, 0x10, 0x07, 0x57, 0x85, 0x45, 0x62, 0x40, 0x68, 0x82, 
    0x10, 0x04, 0xe7, 0x44, 0x78, 0x56, 0x50, 0x1b, 0x10, 0x07, 0x6a, 0x5e, 0x3c, 0x10, 0x08, 0x23, 
    0x23, 0x29, 0x10, 0x04, 0x3a, 0x32, 0x10, 0x07, 0x26, 0xe0, 0x65, 0x10, 0x07, 0x56, 0xe2, 0x5b, 
    0x6b, 0xf3, 0x10, 0x06, 0x24, 0xcb, 0x1e, 0x48, 0x5d, 0x31, 0x07, 0x7c, 0x41, 0x53, 0xfc, 0x4d, 
    0x25, 0x10, 0x06, 0x26, 0x1f, 0x52, 0xb4, 0x10, 0x06, 0x90, 0x45, 0xe2, 0x48, 0x50, 0x10, 0x07, 
    0x24, 0x53, 0x27, 0x93, 0x48, 0x54, 0x07, 0x56, 0xde, 0x6c, 0x6b, 0x10, 0x03, 0x47, 0x5f, 0x10, 
    0x04, 0x00, 0x47, 0x5f, 0x48, 0x57, 0x06, 0x56, 0x4f, 0x69, 0xd0, 0x44, 0x5e, 0xd6, 0x10, 0x03, 
    0x56, 0x50, 0x68, 0x10, 0x0a, 0x26, 0xee, 0x91, 0x90, 0x8d, 0x7a, 0x37, 0x8d, 0x7a, 0x7a, 0xa8, 
    0x10, 0x07, 0x26, 0xde, 0x6c, 0x6b, 0x10, 0x07, 0x24, 0x64, 0x6b, 0x95, 0x31, 0x07, 0x26, 0xe2, 
    0x5b, 0x6b, 0x21, 0x5d, 0x10, 0x07, 0x24, 0x53, 0x1e, 0x38, 0x21, 0x7c, 0x10, 0x06, 0x26, 0xde, 
    0x1b, 0x78, 0x56, 0x10, 0x06, 0x24, 0x8b, 0x94, 0x32, 0x66, 0x9c, 0x41, 0x43, 0x10, 0x06, 0x3b, 
    0x68, 0x93, 0x45, 0x82, 0x1b, 0x10, 0x07, 0x7e, 0x4d, 0xfc, 0x3c, 0xa8, 0x85, 0xb0, 0x10, 0x07, 
    0x7e, 0x4d, 0x72, 0x10, 0x0b, 0x7e, 0x8d, 0x7a, 0x98, 0x89, 0xae, 0x81, 0x3c, 0x10, 0x07, 0x7e, 
    0x94, 0x66, 0x5d, 0x2a, 0xa6, 0x10, 0x07, 0x7e, 0x4d, 0x72, 0x82, 0x10, 0x05, 0x26, 0x92, 0x44, 
    0x68, 0x85, 0x2c, 0x10, 0x05, 0xf8, 0x78, 0x56, 0x57, 0x50, 0x32, 0x10, 0x03, 0x56, 0x50, 0x68, 
    0x5d, 0x10, 0x05, 0x57, 0x50, 0x32, 0x78, 0x56, 0x57, 0x07, 0x2f, 0x86, 0xb8, 0x10, 0x00, 0x09, 
    0x33, 0x64, 0xc2, 0x2d, 0x00, 0xc2, 0x2d, 0x3f, 0x54, 0x10, 0x06, 0x90, 0x45, 0xd2, 0x68, 0x50, 
    0x1b, 0x10, 
};

static const gU16 mf_rlefont_UI1_glyph_offsets_1[100] = {
    0x0000, 0x0003, 0x0009, 0x000e, 0x001a, 0x0026, 0x0036, 0x0045, 
    0x0048, 0x004f, 0x0056, 0x005e, 0x0066, 0x006c, 0x0070, 0x0075, 
    0x007c, 0x0088, 0x0090, 0x0098, 0x00a1, 0x00ac, 0x00b5, 0x00bc, 
    0x00c5, 0x00cc, 0x00d4, 0x00da, 0x00e0, 0x00e9, 0x00f0, 0x00f9, 
    0x0102, 0x0113, 0x011a, 0x0123, 0x012a, 0x0131, 0x0139, 0x0141, 
    0x014b, 0x0154, 0x015a, 0x0161, 0x016e, 0x0175, 0x0185, 0x0195, 
    0x019b, 0x01a2, 0x01ab, 0x01b2, 0x01bc, 0x01c3, 0x01cc, 0x01d4, 
    0x01e4, 0x01f0, 0x01f6, 0x0200, 0x0208, 0x0211, 0x0219, 0x021e, 
    0x0223, 0x0227, 0x022c, 0x0233, 0x023a, 0x0242, 0x0248, 0x024f, 
    0x0256, 0x025c, 0x0260, 0x0266, 0x026f, 0x0274, 0x0281, 0x0287, 
    0x028d, 0x0295, 0x029d, 0x02a4, 0x02ae, 0x02b6, 0x02bf, 0x02c4, 
    0x02ce, 0x02d6, 0x02dc, 0x02e4, 0x02ec, 0x02f2, 0x02f9, 0x02fe, 
    0x02ff, 0x02fe, 0x02fe, 0x030a, 
};

static const gU8 mf_rlefont_UI1_glyph_data_2[786] = {
    0x06, 0x26, 0xf8, 0x66, 0x21, 0xa2, 0x1b, 0x10, 0x08, 0x23, 0x29, 0x10, 0x0c, 0x23, 0x43, 0x83, 
    0x10, 0x00, 0x0b, 0x7d, 0x37, 0xdd, 0x8a, 0xad, 0x7a, 0xae, 0x10, 0x03, 0x1d, 0x47, 0x5f, 0x10, 
    0x06, 0x34, 0x8c, 0x1b, 0x6e, 0xfd, 0x78, 0x70, 0xd0, 0x32, 0x10, 0x07, 0x00, 0x2f, 0x6e, 0x3e, 
    0x2c, 0x66, 0x56, 0xe3, 0x10, 0x09, 0x34, 0x22, 0xd8, 0x86, 0xac, 0x5b, 0x2a, 0xae, 0xa4, 0xa4, 
    0x10, 0x07, 0x1d, 0x3c, 0xac, 0x41, 0xc2, 0x44, 0x1b, 0x8b, 0xa4, 0x10, 0x03, 0x47, 0x62, 0x2e, 
    0x7c, 0x32, 0x10, 0x07, 0x1f, 0x6e, 0x57, 0x5c, 0x3e, 0x4d, 0xac, 0x32, 0x47, 0xcd, 0x1b, 0x10, 
    0x05, 0x34, 0xee, 0x10, 0x0a, 0x30, 0x21, 0x3e, 0x60, 0x97, 0x98, 0x40, 0x89, 0x7a, 0xaa, 0x94, 
    0x40, 0x25, 0x10, 0x06, 0x46, 0x47, 0xf2, 0x27, 0x96, 0x1b, 0x20, 0x25, 0x10, 0x08, 0x26, 0x8c, 
    0x74, 0x86, 0xa8, 0x6e, 0xd6, 0x10, 0x07, 0x23, 0x19, 0x45, 0x10, 0x05, 0x23, 0x43, 0x10, 0x09, 
    0x30, 0x64, 0xb8, 0x89, 0xae, 0x86, 0x91, 0xa5, 0xae, 0x1e, 0x54, 0x10, 0x05, 0x7d, 0x10, 0x06, 
    0x46, 0x6e, 0xcd, 0x1b, 0x10, 0x07, 0x34, 0x62, 0xc2, 0x68, 0x34, 0xe3, 0x10, 0x05, 0xc7, 0x48, 
    0x66, 0x81, 0x2c, 0x10, 0x05, 0x3d, 0x47, 0x8a, 0x44, 0x1b, 0x10, 0x04, 0x5c, 0x10, 0x08, 0x7e, 
    0x6b, 0x3c, 0xf8, 0x9b, 0x7c, 0x10, 0x07, 0x2f, 0xe7, 0xb4, 0x69, 0x9b, 0x2c, 0x81, 0xb0, 0x44, 
    0x5e, 0xee, 0x10, 0x03, 0x1c, 0x44, 0x10, 0x05, 0x33, 0x23, 0x48, 0x88, 0x44, 0x1b, 0x10, 0x04, 
    0xfe, 0x32, 0x56, 0xfe, 0x10, 0x05, 0x1d, 0x81, 0x2a, 0x98, 0x48, 0x7d, 0x10, 0x08, 0x26, 0xd6, 
    0x6e, 0xe6, 0x74, 0x86, 0xa8, 0x10, 0x0a, 0x3b, 0x44, 0x40, 0x8a, 0x74, 0x81, 0x98, 0x32, 0x8a, 
    0xac, 0x86, 0xb6, 0xa7, 0xa4, 0x10, 0x0a, 0x34, 0x88, 0x86, 0xa7, 0x27, 0x8d, 0xa4, 0x4f, 0x99, 
    0x94, 0x40, 0x86, 0xa5, 0x73, 0x10, 0x0b, 0xc7, 0x44, 0x40, 0x86, 0x74, 0x81, 0x97, 0x32, 0x8a, 
    0xac, 0x86, 0xb6, 0xa7, 0xa4, 0x10, 0x07, 0x30, 0x20, 0x45, 0xea, 0x2d, 0x76, 0x10, 0x09, 0x7b, 
    0x27, 0x66, 0x4e, 0x10, 0x09, 0xd4, 0x32, 0x2e, 0x66, 0x4e, 0x10, 0x09, 0x18, 0x2a, 0x33, 0x66, 
    0x4e, 0x10, 0x09, 0x1f, 0x6d, 0x3b, 0x66, 0x4e, 0x10, 0x09, 0x30, 0xc9, 0x2b, 0x66, 0x4e, 0x10, 
    0x09, 0x1f, 0x5e, 0x61, 0xc4, 0x66, 0x4e, 0x10, 0x09, 0x33, 0x7d, 0x74, 0x5e, 0xdd, 0x27, 0x70, 
    0xa3, 0xa4, 0xbc, 0x10, 0x08, 0x30, 0x64, 0x82, 0x45, 0x76, 0x49, 0x1b, 0x10, 0x06, 0x38, 0x59, 
    0x25, 0x51, 0xf3, 0x10, 0x06, 0x6a, 0x2b, 0xe2, 0x51, 0xf3, 0x10, 0x06, 0x6a, 0x20, 0x25, 0x51, 
    0xf3, 0x10, 0x06, 0x1d, 0x71, 0x25, 0x51, 0xf3, 0x10, 0x04, 0x0f, 0x47, 0x5f, 0x10, 0x04, 0xfe, 
    0x41, 0x5f, 0x10, 0x05, 0x81, 0x2a, 0x5f, 0x10, 0x05, 0x1d, 0x69, 0x5f, 0x10, 0x08, 0x2f, 0x66, 
    0x70, 0xa6, 0x2c, 0x88, 0x6b, 0xcd, 0x31, 0x07, 0x46, 0x6d, 0x49, 0x36, 0x70, 0xe9, 0x74, 0x69, 
    0x42, 0x85, 0xa6, 0x10, 0x09, 0xf8, 0x47, 0x63, 0x76, 0x10, 0x09, 0xd4, 0x41, 0x63, 0x76, 0x10, 
    0x09, 0x18, 0x2a, 0x63, 0x76, 0x10, 0x09, 0x46, 0x6d, 0x73, 0x79, 0x76, 0x10, 0x09, 0xfc, 0x69, 
    0x63, 0xf8, 0x1e, 0x76, 0x10, 0x07, 0x7e, 0x2a, 0x18, 0x2a, 0xa6, 0x10, 0x09, 0x3b, 0x36, 0x8b, 
    0x4d, 0x7a, 0xa5, 0xa8, 0x94, 0x96, 0xac, 0x8c, 0x4d, 0xbe, 0x10, 0x08, 0x7b, 0x4c, 0x96, 0x1b, 
    0x10, 0x08, 0x18, 0x59, 0x4c, 0x96, 0x1b, 0x10, 0x08, 0x6a, 0x20, 0x4c, 0x96, 0x1b, 0x10, 0x08, 
    0xee, 0x2b, 0x60, 0x4c, 0x96, 0x1b, 0x10, 0x07, 0x18, 0x59, 0x6b, 0xce, 0x68, 0xfe, 0x10, 0x06, 
    0x2e, 0x81, 0x2c, 0x6e, 0x70, 0x4f, 0x8b, 0xa4, 0x10, 0x07, 0x46, 0x6e, 0x70, 0x4f, 0x69, 0xa8, 
    0x5b, 0x25, 0x10, 0x07, 0xc6, 0x48, 0x7d, 0x65, 0x10, 0x07, 0xcc, 0x48, 0x7d, 0x65, 0x10, 0x07, 
    0x6a, 0x66, 0x7d, 0x65, 0x10, 0x07, 0x3d, 0x6d, 0x73, 0x65, 0x10, 0x07, 0x1d, 0x71, 0x73, 0x65, 
    0x10, 0x07, 0x46, 0x32, 0x20, 0x2c, 0x65, 0x10, 0x0a, 0x26, 0xd0, 0x64, 0xf2, 0x93, 0x4f, 0x8d, 
    0x86, 0xbf, 0x10, 0x06, 0x26, 0xa0, 0x45, 0x49, 0x78, 0x92, 0x44, 0x1b, 0x10, 0x06, 0x38, 0x59, 
    0xb4, 0x52, 0xb4, 0x10, 0x06, 0x49, 0x48, 0x2f, 0x52, 0xb4, 0x10, 0x06, 0x6a, 0x20, 0xb4, 0x52, 
    0xb4, 0x10, 0x06, 0x1d, 0x71, 0xb4, 0x52, 0xb4, 0x10, 0x04, 0x47, 0x3f, 0x2b, 0x50, 0x44, 0x10, 
    0x04, 0x34, 0x6a, 0x2b, 0x82, 0x45, 0xf8, 0x10, 0x05, 0x00, 0x47, 0x98, 0x2b, 0x50, 0x44, 0x10, 
    0x05, 0x2e, 0xce, 0x2b, 0x50, 0x44, 0x10, 0x07, 0x34, 0xac, 0x1b, 0x57, 0x66, 0x53, 0x31, 0x07, 
    0x2f, 0x6d, 0xb8, 0x6c, 0x4d, 0x10, 0x07, 0x34, 0x7b, 0x2c, 0x5b, 0x76, 0x10, 0x07, 0x33, 0x5a, 
    0x2b, 0x64, 0x6b, 0xf2, 0x10, 0x07, 0x1d, 0x6a, 0x66, 0x7d, 0x5b, 0x76, 0x10, 0x07, 0x2f, 0x6d, 
    0xbc, 0x5b, 0x76, 0x10, 0x07, 0x55, 0x73, 0x5b, 0x76, 0x10, 0x07, 0x34, 0x2e, 0x59, 0x25, 0x57, 
    0x32, 0x10, 0x07, 0x1c, 0x54, 0x9d, 0xa4, 0x8e, 0xb4, 0x88, 0x25, 0x10, 0x07, 0x00, 0x47, 0x59, 
    0x6b, 0x3c, 0xbc, 0x10, 0x07, 0x1d, 0x18, 0x59, 0x6b, 0x3c, 0xbc, 0x10, 0x07, 0x30, 0x66, 0x71, 
    0x6b, 0x3c, 0xbc, 0x10, 0x07, 0x55, 0x6b, 0x3c, 0xbc, 0x10, 0x07, 0x1d, 0x18, 0x59, 0x4d, 0x72, 
    0x82, 0x10, 0x07, 0x34, 0x5d, 0x2c, 0x6e, 0x70, 0x39, 0x54, 0x5d, 0x10, 0x07, 0x55, 0x4d, 0x72, 
    0x82, 0x10, 
};

static const gU16 mf_rlefont_UI1_glyph_offsets_2[107] = {
    0x0000, 0x0008, 0x000c, 0x0011, 0x0012, 0x0011, 0x0011, 0x0011, 
    0x0011, 0x0011, 0x0011, 0x0011, 0x001b, 0x0020, 0x002b, 0x0035, 
    0x0041, 0x004c, 0x0053, 0x0060, 0x0064, 0x0073, 0x007d, 0x0086, 
    0x008b, 0x008f, 0x009c, 0x009f, 0x00a5, 0x00ad, 0x00b4, 0x00bb, 
    0x00be, 0x00c6, 0x00d3, 0x00d7, 0x00df, 0x00e5, 0x00ed, 0x00f6, 
    0x0106, 0x0116, 0x0126, 0x012e, 0x0134, 0x013b, 0x0142, 0x0149, 
    0x0150, 0x0158, 0x0164, 0x016d, 0x0174, 0x017b, 0x0182, 0x0189, 
    0x018e, 0x0193, 0x0198, 0x019d, 0x01a7, 0x01b4, 0x01ba, 0x01c0, 
    0x01c6, 0x01cd, 0x01d5, 0x01dc, 0x01eb, 0x01f1, 0x01f8, 0x01ff, 
    0x0207, 0x020f, 0x0219, 0x0223, 0x0229, 0x022f, 0x0235, 0x023b, 
    0x0241, 0x0248, 0x0253, 0x025d, 0x0264, 0x026b, 0x0272, 0x0279, 
    0x0280, 0x0288, 0x0290, 0x0297, 0x029f, 0x02a6, 0x02ad, 0x02b5, 
    0x02bd, 0x02c4, 0x02ca, 0x02d2, 0x02dc, 0x02e4, 0x02ec, 0x02f4, 
    0x02fa, 0x0302, 0x030c, 
};

static const struct mf_rlefont_char_range_s mf_rlefont_UI1_char_ranges[] = {
    {0, 1, mf_rlefont_UI1_glyph_offsets_0, mf_rlefont_UI1_glyph_data_0},
    {32, 100, mf_rlefont_UI1_glyph_offsets_1, mf_rlefont_UI1_glyph_data_1},
    {149, 107, mf_rlefont_UI1_glyph_offsets_2, mf_rlefont_UI1_glyph_data_2},
};

const struct mf_rlefont_s mf_rlefont_UI1 = {
    {
    "UI1",
    "UI1",
    11, /* width */
    11, /* height */
    3, /* min x advance */
    13, /* max x advance */
    0, /* baseline x */
    9, /* baseline y */
    11, /* line height */
    2, /* flags */
    32, /* fallback character */
    &mf_rlefont_character_width,
    &mf_rlefont_render_character,
    },
    4, /* version */
    mf_rlefont_UI1_dictionary_data,
    mf_rlefont_UI1_dictionary_offsets,
    50, /* rle dict count */
    107, /* total dict count */
    3, /* char range count */
    mf_rlefont_UI1_char_ranges,
};

#ifndef MF_SCALEDFONT_INTERNALS
#define MF_SCALEDFONT_INTERNALS
#endif
#include "mf_scaledfont.h"

const struct mf_scaledfont_s mf_rlefont_UI1_Narrow = {
	    {
			"UI1 Narrow",
			"UI1 Narrow",
			11, /* width */
			22, /* height */
			3, /* min x advance */
			13, /* max x advance */
			0, /* baseline x */
			18, /* baseline y */
			22, /* line height */
			2, /* flags */
			32, /* fallback character */
			&mf_scaled_character_width,
			&mf_scaled_render_character,
	    },
	    (struct mf_font_s*)&mf_rlefont_UI1,
		1, 2,
};

const struct mf_scaledfont_s mf_rlefont_UI1_Double = {
	    {
			"UI1 Double",
			"UI1 Double",
			22, /* width */
			22, /* height */
			6, /* min x advance */
			26, /* max x advance */
			0, /* baseline x */
			18, /* baseline y */
			22, /* line height */
			2, /* flags */
			32, /* fallback character */
			&mf_scaled_character_width,
			&mf_scaled_render_character,
	    },
	    (struct mf_font_s*)&mf_rlefont_UI1,
		2, 2,
};

#ifdef MF_INCLUDED_FONTS
/* List entry for searching fonts by name. */
static const struct mf_font_list_s mf_rlefont_UI1_Double_listentry = {
    MF_INCLUDED_FONTS,
    (struct mf_font_s*)&mf_rlefont_UI1_Double
};
static const struct mf_font_list_s mf_rlefont_UI1_Narrow_listentry = {
	&mf_rlefont_UI1_Double_listentry,
    (struct mf_font_s*)&mf_rlefont_UI1_Narrow
};
static const struct mf_font_list_s mf_rlefont_UI1_listentry = {
	&mf_rlefont_UI1_Narrow_listentry,
    (struct mf_font_s*)&mf_rlefont_UI1
};
#undef MF_INCLUDED_FONTS
#define MF_INCLUDED_FONTS (&mf_rlefont_UI1_listentry)
#endif
