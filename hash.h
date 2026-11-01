#pragma once
#include <stdint.h>

static inline uint64_t fnv1a_64(const char *data) {
    uint64_t hash = 0xcbf29ce484222325ull; // offset_basis
    for (const char *c=data; *c!='\0'; c++) {
        hash ^= (uint8_t)*c;
        hash *= 0x100000001b3ull; // prime
    }
    return hash;
}

static inline uint32_t fnv1a_32(const char *data) {
    uint32_t hash = 0x811c9dc5u; // offset_basis
    for (const char *c=data; *c!='\0'; c++) {
        hash ^= (uint8_t)*c;
        hash *= 0x01000193u; // prime
    }
    return hash;
}