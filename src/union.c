#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Union: a data type that stores all fields at the same memory location.
// Only the largest member determines the union's size. Accessing one field
// affects others since they share the same underlying bytes.
//
// Endianness affects how multi-byte values map to smaller fields:
// - Little-endian: least significant byte first (Intel, ARM, most modern systems)
// - Big-endian: most significant byte first (older systems, network protocols)
//
// Example with 0x23451898 on little-endian:
//   Memory: [98][18][45][23] (bytes in order)
//   u.c (char):   0x98 (first byte)
//   u.s (short):  0x1898 (first two bytes)
//   u.x (int):    0x23451898 (all four bytes)

typedef union {
    int x;
    char c;
    short s;
} myunion_t;

// Detect endianness at runtime
int is_little_endian(void) {
    uint32_t test = 0x01;
    return ((uint8_t *)&test)[0] == 0x01;
}

int main(void) {
    myunion_t u;
    u.x = 0x23451898;

    // Production-grade output with endianness awareness
    printf("System is %s-endian\n",
           is_little_endian() ? "little" : "big");
    printf("Union contents:\n");
    printf("  u.x (int):   0x%08x\n", u.x);
    printf("  u.s (short): 0x%04hx\n", (unsigned short)u.s);
    printf("  u.c (char):  0x%02hhx\n", (unsigned char)u.c);

    return 0;
}
