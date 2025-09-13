#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <stddef.h>

#define MEM_SIZE (64 * 1024 * 1024) // 64 MB RAM

extern unsigned char memory[MEM_SIZE];

void init_memory();
void load_program(const unsigned char *prog, size_t size);
uint8_t mem_read8(uint64_t addr);
void mem_write8(uint64_t addr, uint8_t value);

#endif
