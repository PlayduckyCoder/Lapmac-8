#include <stdio.h>
#include "cpu/registers.h"
#include "memory/memory.h"
#include "cpu/decoder.c"  // include runner

int main() {
    printf("Lapmac 8 Emulator starting...\n");

    CPU64 cpu = {0};
    init_memory();

    // Example program: INC RAX, INC RAX, DEC RAX, HLT
    unsigned char prog[] = {0x01, 0x01, 0x02, 0xF4};
    load_program(prog, sizeof(prog));

    run_cpu(&cpu);

    printf("Final RAX=%llu\n", cpu.rax);
    return 0;
}
