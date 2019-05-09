#ifndef EQUISCRYPTHASH_H
#define EQUISCRYPTHASH_H

#include <stdint.h>

// miner nonce "cursor" unique for each thread
#define EQNONCE_OFFSET 30 /* 27:34 */

#define WK 5
#define WN 96
//#define CONFIG_MODE_1 9, 1248, 12, 640, packer_cantor /* eqcuda.hpp */

extern "C" {
	void equiscrypt_hash(const void* input, void* output, int len);
	int  equiscrypt_verify_sol(void* const hdr, void* const soln);
	bool equiscrypt_verify(uint8_t* const hdr, uint8_t* const soln);
}

#endif
