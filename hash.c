#include "hash.h"

static const uint64_t FNV_offset_basis = 0xcbf29ce484222325ULL;
static const uint64_t FNV_prime = 0x100000001b3ULL;

uint64_t FNV_1a(const uint8_t *str)
{
    uint64_t hash = FNV_offset_basis;
    for (const uint8_t *c = str; *c!='\0'; c++) {
        hash ^= *c;
        hash *= FNV_prime;
    }
    return hash;
}

uint64_t FNV_1a_Mask(const uint8_t *data, uint64_t mask)
{
    return (FNV_1a(data) & mask);
}