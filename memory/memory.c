// Lapmac 8 - Memory system
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "memory.h"

unsigned char memory[MEM_SIZE];

void init_memory() {
    memset(memory, 0, MEM_SIZE);
}

void load_program(const unsigned char *prog, size_t size) {
    if (size > MEM_SIZE) {
        printf("[MEM] Program too big!\n");
        return;
    }
    memcpy(memory, prog, size);
}

uint8_t mem_read8(uint64_t addr) {
    if (addr >= MEM_SIZE) return 0;
    return memory[addr];
}

void mem_write8(uint64_t addr, uint8_t value) {
    if (addr < MEM_SIZE) memory[addr] = value;
}
