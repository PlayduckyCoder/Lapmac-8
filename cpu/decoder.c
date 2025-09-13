// Lapmac 8 - CPU Decoder
#include <stdio.h>
#include "../memory/memory.h"
#include "registers.h"
#include "executor.h"

void run_cpu(CPU64 *cpu) {
    while (!cpu->halted) {
        uint8_t opcode = mem_read8(cpu->rip);
        cpu->rip++;

        execute_instruction(cpu, opcode);
    }
}
