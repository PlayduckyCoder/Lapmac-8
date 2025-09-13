// Lapmac 8 - CPU Executor
#include <stdio.h>
#include "registers.h"
#include "../memory/memory.h"

void execute_instruction(CPU64 *cpu, uint8_t opcode) {
    switch (opcode) {
        case 0x90: // NOP
            break;
        case 0xF4: // HLT
            cpu->halted = true;
            printf("[CPU] Halted at RIP=%llx\n", cpu->rip);
            break;
        case 0x01: // INC RAX
            cpu->rax++;
            printf("[CPU] RAX=%llu\n", cpu->rax);
            break;
        case 0x02: // DEC RAX
            cpu->rax--;
            printf("[CPU] RAX=%llu\n", cpu->rax);
            break;
        case 0x03: // JMP forward 1 byte
            cpu->rip += 1;
            break;
        default:
            printf("[CPU] Unknown opcode: 0x%02X at %llx\n", opcode, cpu->rip-1);
            cpu->halted = true;
            break;
    }
}
