#pragma once
#include "types.h"

extern bool g_reios_dbg_enabled;

void reios_dbg_begin_op(const uint32_t pc, const uint32_t opcode);
void reios_dbg_end_op(const uint32_t pc, const uint32_t opcode);
const uint32_t reios_dbg_get_last_op();