#include "blake2b.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "sha3/sph_blake2b.h"


void blake2b_hash(const char* input, char* hash, uint32_t len)
{
    blake2b_ctx ctx;

    blake2b_init(&ctx, 32, NULL, 0);
    blake2b_update(&ctx, data, len);
    blake2b_final(&ctx, hash);
}

