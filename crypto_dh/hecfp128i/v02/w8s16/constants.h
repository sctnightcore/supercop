#define CONSTANTS static const unsigned char cn[16*1+16*2] = { \
    0xAD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
	\
    0xAD, 0x2C, 0x8D, 0xDC, 0xBB, 0x3B, 0x60, 0x88, 0xA5, 0x11, 0x61, 0x1A, 0xD7, 0x4E, 0x6E, 0xEF, \
    0x96, 0x26, 0x45, 0x67, 0x39, 0x0F, 0x23, 0x55, 0x0E, 0x88, 0x23, 0xF1, 0x89, 0xCC, 0xB5, 0x38 \
}
/**
 * c for the prime 2^128-c,
 * [a3, a2] in y^2 = a5*x^5 + a4*x^4 + a3*x^3 + a2*x^2 + a1*x + a0
 **/