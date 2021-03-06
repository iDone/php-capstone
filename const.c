/* Generated by `genconst.php` */
#include "php_capstone.h"

#define REGISTER_CAPSTONE_CONSTANT(__c) REGISTER_LONG_CONSTANT(#__c, __c, CONST_CS | CONST_PERSISTENT)

void php_capstone_register_constants(int module_number)
{
// {{{ cs_arch
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_ARM);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_ARM64);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_MIPS);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_X86);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_PPC);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_SPARC);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_SYSZ);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_XCORE);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_M68K);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_TMS320C64X);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_MAX);
REGISTER_CAPSTONE_CONSTANT(CS_ARCH_ALL);
// }}} cs_arch

// {{{ cs_mode
REGISTER_CAPSTONE_CONSTANT(CS_MODE_LITTLE_ENDIAN);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_ARM);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_16);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_32);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_64);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_THUMB);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MCLASS);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_V8);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MICRO);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MIPS3);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MIPS32R6);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MIPS2);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_V9);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_QPX);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_M68K_000);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_M68K_010);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_M68K_020);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_M68K_030);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_M68K_040);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_M68K_060);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_BIG_ENDIAN);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MIPS32);
REGISTER_CAPSTONE_CONSTANT(CS_MODE_MIPS64);
// }}} cs_mode

// {{{ cs_opt_type
REGISTER_CAPSTONE_CONSTANT(CS_OPT_INVALID);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SYNTAX);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_DETAIL);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_MODE);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_MEM);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SKIPDATA);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SKIPDATA_SETUP);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_MNEMONIC);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_UNSIGNED);
// }}} cs_opt_type

// {{{ cs_opt_value
REGISTER_CAPSTONE_CONSTANT(CS_OPT_OFF);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_ON);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SYNTAX_DEFAULT);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SYNTAX_INTEL);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SYNTAX_ATT);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SYNTAX_NOREGNAME);
REGISTER_CAPSTONE_CONSTANT(CS_OPT_SYNTAX_MASM);
// }}} cs_opt_value

// {{{ cs_op_type
REGISTER_CAPSTONE_CONSTANT(CS_OP_INVALID);
REGISTER_CAPSTONE_CONSTANT(CS_OP_REG);
REGISTER_CAPSTONE_CONSTANT(CS_OP_IMM);
REGISTER_CAPSTONE_CONSTANT(CS_OP_MEM);
REGISTER_CAPSTONE_CONSTANT(CS_OP_FP);
// }}} cs_op_type

// {{{ cs_ac_type
REGISTER_CAPSTONE_CONSTANT(CS_AC_INVALID);
REGISTER_CAPSTONE_CONSTANT(CS_AC_READ);
REGISTER_CAPSTONE_CONSTANT(CS_AC_WRITE);
// }}} cs_ac_type

// {{{ cs_group_type
REGISTER_CAPSTONE_CONSTANT(CS_GRP_INVALID);
REGISTER_CAPSTONE_CONSTANT(CS_GRP_JUMP);
REGISTER_CAPSTONE_CONSTANT(CS_GRP_CALL);
REGISTER_CAPSTONE_CONSTANT(CS_GRP_RET);
REGISTER_CAPSTONE_CONSTANT(CS_GRP_INT);
REGISTER_CAPSTONE_CONSTANT(CS_GRP_IRET);
REGISTER_CAPSTONE_CONSTANT(CS_GRP_PRIVILEGE);
// }}} cs_group_type

// {{{ cs_err
REGISTER_CAPSTONE_CONSTANT(CS_ERR_OK);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_MEM);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_ARCH);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_HANDLE);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_CSH);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_MODE);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_OPTION);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_DETAIL);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_MEMSETUP);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_VERSION);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_DIET);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_SKIPDATA);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_X86_ATT);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_X86_INTEL);
REGISTER_CAPSTONE_CONSTANT(CS_ERR_X86_MASM);
// }}} cs_err

}

const char *php_capstone_x86_reg_name(x86_reg id) {
switch (id) {
case X86_REG_AH: return "ah"; break;
case X86_REG_AL: return "al"; break;
case X86_REG_AX: return "ax"; break;
case X86_REG_BH: return "bh"; break;
case X86_REG_BL: return "bl"; break;
case X86_REG_BP: return "bp"; break;
case X86_REG_BPL: return "bpl"; break;
case X86_REG_BX: return "bx"; break;
case X86_REG_CH: return "ch"; break;
case X86_REG_CL: return "cl"; break;
case X86_REG_CS: return "cs"; break;
case X86_REG_CX: return "cx"; break;
case X86_REG_DH: return "dh"; break;
case X86_REG_DI: return "di"; break;
case X86_REG_DIL: return "dil"; break;
case X86_REG_DL: return "dl"; break;
case X86_REG_DS: return "ds"; break;
case X86_REG_DX: return "dx"; break;
case X86_REG_EAX: return "eax"; break;
case X86_REG_EBP: return "ebp"; break;
case X86_REG_EBX: return "ebx"; break;
case X86_REG_ECX: return "ecx"; break;
case X86_REG_EDI: return "edi"; break;
case X86_REG_EDX: return "edx"; break;
case X86_REG_EFLAGS: return "eflags"; break;
case X86_REG_EIP: return "eip"; break;
case X86_REG_EIZ: return "eiz"; break;
case X86_REG_ES: return "es"; break;
case X86_REG_ESI: return "esi"; break;
case X86_REG_ESP: return "esp"; break;
case X86_REG_FPSW: return "fpsw"; break;
case X86_REG_FS: return "fs"; break;
case X86_REG_GS: return "gs"; break;
case X86_REG_IP: return "ip"; break;
case X86_REG_RAX: return "rax"; break;
case X86_REG_RBP: return "rbp"; break;
case X86_REG_RBX: return "rbx"; break;
case X86_REG_RCX: return "rcx"; break;
case X86_REG_RDI: return "rdi"; break;
case X86_REG_RDX: return "rdx"; break;
case X86_REG_RIP: return "rip"; break;
case X86_REG_RIZ: return "riz"; break;
case X86_REG_RSI: return "rsi"; break;
case X86_REG_RSP: return "rsp"; break;
case X86_REG_SI: return "si"; break;
case X86_REG_SIL: return "sil"; break;
case X86_REG_SP: return "sp"; break;
case X86_REG_SPL: return "spl"; break;
case X86_REG_SS: return "ss"; break;
case X86_REG_CR0: return "cr0"; break;
case X86_REG_CR1: return "cr1"; break;
case X86_REG_CR2: return "cr2"; break;
case X86_REG_CR3: return "cr3"; break;
case X86_REG_CR4: return "cr4"; break;
case X86_REG_CR5: return "cr5"; break;
case X86_REG_CR6: return "cr6"; break;
case X86_REG_CR7: return "cr7"; break;
case X86_REG_CR8: return "cr8"; break;
case X86_REG_CR9: return "cr9"; break;
case X86_REG_CR10: return "cr10"; break;
case X86_REG_CR11: return "cr11"; break;
case X86_REG_CR12: return "cr12"; break;
case X86_REG_CR13: return "cr13"; break;
case X86_REG_CR14: return "cr14"; break;
case X86_REG_CR15: return "cr15"; break;
case X86_REG_DR0: return "dr0"; break;
case X86_REG_DR1: return "dr1"; break;
case X86_REG_DR2: return "dr2"; break;
case X86_REG_DR3: return "dr3"; break;
case X86_REG_DR4: return "dr4"; break;
case X86_REG_DR5: return "dr5"; break;
case X86_REG_DR6: return "dr6"; break;
case X86_REG_DR7: return "dr7"; break;
case X86_REG_DR8: return "dr8"; break;
case X86_REG_DR9: return "dr9"; break;
case X86_REG_DR10: return "dr10"; break;
case X86_REG_DR11: return "dr11"; break;
case X86_REG_DR12: return "dr12"; break;
case X86_REG_DR13: return "dr13"; break;
case X86_REG_DR14: return "dr14"; break;
case X86_REG_DR15: return "dr15"; break;
case X86_REG_FP0: return "fp0"; break;
case X86_REG_FP1: return "fp1"; break;
case X86_REG_FP2: return "fp2"; break;
case X86_REG_FP3: return "fp3"; break;
case X86_REG_FP4: return "fp4"; break;
case X86_REG_FP5: return "fp5"; break;
case X86_REG_FP6: return "fp6"; break;
case X86_REG_FP7: return "fp7"; break;
case X86_REG_K0: return "k0"; break;
case X86_REG_K1: return "k1"; break;
case X86_REG_K2: return "k2"; break;
case X86_REG_K3: return "k3"; break;
case X86_REG_K4: return "k4"; break;
case X86_REG_K5: return "k5"; break;
case X86_REG_K6: return "k6"; break;
case X86_REG_K7: return "k7"; break;
case X86_REG_MM0: return "mm0"; break;
case X86_REG_MM1: return "mm1"; break;
case X86_REG_MM2: return "mm2"; break;
case X86_REG_MM3: return "mm3"; break;
case X86_REG_MM4: return "mm4"; break;
case X86_REG_MM5: return "mm5"; break;
case X86_REG_MM6: return "mm6"; break;
case X86_REG_MM7: return "mm7"; break;
case X86_REG_R8: return "r8"; break;
case X86_REG_R9: return "r9"; break;
case X86_REG_R10: return "r10"; break;
case X86_REG_R11: return "r11"; break;
case X86_REG_R12: return "r12"; break;
case X86_REG_R13: return "r13"; break;
case X86_REG_R14: return "r14"; break;
case X86_REG_R15: return "r15"; break;
case X86_REG_ST0: return "st0"; break;
case X86_REG_ST1: return "st1"; break;
case X86_REG_ST2: return "st2"; break;
case X86_REG_ST3: return "st3"; break;
case X86_REG_ST4: return "st4"; break;
case X86_REG_ST5: return "st5"; break;
case X86_REG_ST6: return "st6"; break;
case X86_REG_ST7: return "st7"; break;
case X86_REG_XMM0: return "xmm0"; break;
case X86_REG_XMM1: return "xmm1"; break;
case X86_REG_XMM2: return "xmm2"; break;
case X86_REG_XMM3: return "xmm3"; break;
case X86_REG_XMM4: return "xmm4"; break;
case X86_REG_XMM5: return "xmm5"; break;
case X86_REG_XMM6: return "xmm6"; break;
case X86_REG_XMM7: return "xmm7"; break;
case X86_REG_XMM8: return "xmm8"; break;
case X86_REG_XMM9: return "xmm9"; break;
case X86_REG_XMM10: return "xmm10"; break;
case X86_REG_XMM11: return "xmm11"; break;
case X86_REG_XMM12: return "xmm12"; break;
case X86_REG_XMM13: return "xmm13"; break;
case X86_REG_XMM14: return "xmm14"; break;
case X86_REG_XMM15: return "xmm15"; break;
case X86_REG_XMM16: return "xmm16"; break;
case X86_REG_XMM17: return "xmm17"; break;
case X86_REG_XMM18: return "xmm18"; break;
case X86_REG_XMM19: return "xmm19"; break;
case X86_REG_XMM20: return "xmm20"; break;
case X86_REG_XMM21: return "xmm21"; break;
case X86_REG_XMM22: return "xmm22"; break;
case X86_REG_XMM23: return "xmm23"; break;
case X86_REG_XMM24: return "xmm24"; break;
case X86_REG_XMM25: return "xmm25"; break;
case X86_REG_XMM26: return "xmm26"; break;
case X86_REG_XMM27: return "xmm27"; break;
case X86_REG_XMM28: return "xmm28"; break;
case X86_REG_XMM29: return "xmm29"; break;
case X86_REG_XMM30: return "xmm30"; break;
case X86_REG_XMM31: return "xmm31"; break;
case X86_REG_YMM0: return "ymm0"; break;
case X86_REG_YMM1: return "ymm1"; break;
case X86_REG_YMM2: return "ymm2"; break;
case X86_REG_YMM3: return "ymm3"; break;
case X86_REG_YMM4: return "ymm4"; break;
case X86_REG_YMM5: return "ymm5"; break;
case X86_REG_YMM6: return "ymm6"; break;
case X86_REG_YMM7: return "ymm7"; break;
case X86_REG_YMM8: return "ymm8"; break;
case X86_REG_YMM9: return "ymm9"; break;
case X86_REG_YMM10: return "ymm10"; break;
case X86_REG_YMM11: return "ymm11"; break;
case X86_REG_YMM12: return "ymm12"; break;
case X86_REG_YMM13: return "ymm13"; break;
case X86_REG_YMM14: return "ymm14"; break;
case X86_REG_YMM15: return "ymm15"; break;
case X86_REG_YMM16: return "ymm16"; break;
case X86_REG_YMM17: return "ymm17"; break;
case X86_REG_YMM18: return "ymm18"; break;
case X86_REG_YMM19: return "ymm19"; break;
case X86_REG_YMM20: return "ymm20"; break;
case X86_REG_YMM21: return "ymm21"; break;
case X86_REG_YMM22: return "ymm22"; break;
case X86_REG_YMM23: return "ymm23"; break;
case X86_REG_YMM24: return "ymm24"; break;
case X86_REG_YMM25: return "ymm25"; break;
case X86_REG_YMM26: return "ymm26"; break;
case X86_REG_YMM27: return "ymm27"; break;
case X86_REG_YMM28: return "ymm28"; break;
case X86_REG_YMM29: return "ymm29"; break;
case X86_REG_YMM30: return "ymm30"; break;
case X86_REG_YMM31: return "ymm31"; break;
case X86_REG_ZMM0: return "zmm0"; break;
case X86_REG_ZMM1: return "zmm1"; break;
case X86_REG_ZMM2: return "zmm2"; break;
case X86_REG_ZMM3: return "zmm3"; break;
case X86_REG_ZMM4: return "zmm4"; break;
case X86_REG_ZMM5: return "zmm5"; break;
case X86_REG_ZMM6: return "zmm6"; break;
case X86_REG_ZMM7: return "zmm7"; break;
case X86_REG_ZMM8: return "zmm8"; break;
case X86_REG_ZMM9: return "zmm9"; break;
case X86_REG_ZMM10: return "zmm10"; break;
case X86_REG_ZMM11: return "zmm11"; break;
case X86_REG_ZMM12: return "zmm12"; break;
case X86_REG_ZMM13: return "zmm13"; break;
case X86_REG_ZMM14: return "zmm14"; break;
case X86_REG_ZMM15: return "zmm15"; break;
case X86_REG_ZMM16: return "zmm16"; break;
case X86_REG_ZMM17: return "zmm17"; break;
case X86_REG_ZMM18: return "zmm18"; break;
case X86_REG_ZMM19: return "zmm19"; break;
case X86_REG_ZMM20: return "zmm20"; break;
case X86_REG_ZMM21: return "zmm21"; break;
case X86_REG_ZMM22: return "zmm22"; break;
case X86_REG_ZMM23: return "zmm23"; break;
case X86_REG_ZMM24: return "zmm24"; break;
case X86_REG_ZMM25: return "zmm25"; break;
case X86_REG_ZMM26: return "zmm26"; break;
case X86_REG_ZMM27: return "zmm27"; break;
case X86_REG_ZMM28: return "zmm28"; break;
case X86_REG_ZMM29: return "zmm29"; break;
case X86_REG_ZMM30: return "zmm30"; break;
case X86_REG_ZMM31: return "zmm31"; break;
case X86_REG_R8B: return "r8b"; break;
case X86_REG_R9B: return "r9b"; break;
case X86_REG_R10B: return "r10b"; break;
case X86_REG_R11B: return "r11b"; break;
case X86_REG_R12B: return "r12b"; break;
case X86_REG_R13B: return "r13b"; break;
case X86_REG_R14B: return "r14b"; break;
case X86_REG_R15B: return "r15b"; break;
case X86_REG_R8D: return "r8d"; break;
case X86_REG_R9D: return "r9d"; break;
case X86_REG_R10D: return "r10d"; break;
case X86_REG_R11D: return "r11d"; break;
case X86_REG_R12D: return "r12d"; break;
case X86_REG_R13D: return "r13d"; break;
case X86_REG_R14D: return "r14d"; break;
case X86_REG_R15D: return "r15d"; break;
case X86_REG_R8W: return "r8w"; break;
case X86_REG_R9W: return "r9w"; break;
case X86_REG_R10W: return "r10w"; break;
case X86_REG_R11W: return "r11w"; break;
case X86_REG_R12W: return "r12w"; break;
case X86_REG_R13W: return "r13w"; break;
case X86_REG_R14W: return "r14w"; break;
case X86_REG_R15W: return "r15w"; break;
case X86_REG_ENDING: return "ending"; break;
default: break;
} // switch
return NULL;
} // x86_reg

const char *php_capstone_x86_op_type_name(x86_op_type id) {
switch (id) {
case X86_OP_REG: return "reg"; break;
case X86_OP_IMM: return "imm"; break;
case X86_OP_MEM: return "mem"; break;
default: break;
} // switch
return NULL;
} // x86_op_type

const char *php_capstone_x86_xop_cc_name(x86_xop_cc id) {
switch (id) {
case X86_XOP_CC_LT: return "lt"; break;
case X86_XOP_CC_LE: return "le"; break;
case X86_XOP_CC_GT: return "gt"; break;
case X86_XOP_CC_GE: return "ge"; break;
case X86_XOP_CC_EQ: return "eq"; break;
case X86_XOP_CC_NEQ: return "neq"; break;
case X86_XOP_CC_FALSE: return "false"; break;
case X86_XOP_CC_TRUE: return "true"; break;
default: break;
} // switch
return NULL;
} // x86_xop_cc

const char *php_capstone_x86_avx_bcast_name(x86_avx_bcast id) {
switch (id) {
case X86_AVX_BCAST_2: return "2"; break;
case X86_AVX_BCAST_4: return "4"; break;
case X86_AVX_BCAST_8: return "8"; break;
case X86_AVX_BCAST_16: return "16"; break;
default: break;
} // switch
return NULL;
} // x86_avx_bcast

const char *php_capstone_x86_sse_cc_name(x86_sse_cc id) {
switch (id) {
case X86_SSE_CC_EQ: return "eq"; break;
case X86_SSE_CC_LT: return "lt"; break;
case X86_SSE_CC_LE: return "le"; break;
case X86_SSE_CC_UNORD: return "unord"; break;
case X86_SSE_CC_NEQ: return "neq"; break;
case X86_SSE_CC_NLT: return "nlt"; break;
case X86_SSE_CC_NLE: return "nle"; break;
case X86_SSE_CC_ORD: return "ord"; break;
default: break;
} // switch
return NULL;
} // x86_sse_cc

const char *php_capstone_x86_avx_cc_name(x86_avx_cc id) {
switch (id) {
case X86_AVX_CC_EQ: return "eq"; break;
case X86_AVX_CC_LT: return "lt"; break;
case X86_AVX_CC_LE: return "le"; break;
case X86_AVX_CC_UNORD: return "unord"; break;
case X86_AVX_CC_NEQ: return "neq"; break;
case X86_AVX_CC_NLT: return "nlt"; break;
case X86_AVX_CC_NLE: return "nle"; break;
case X86_AVX_CC_ORD: return "ord"; break;
case X86_AVX_CC_EQ_UQ: return "eq/uq"; break;
case X86_AVX_CC_NGE: return "nge"; break;
case X86_AVX_CC_NGT: return "ngt"; break;
case X86_AVX_CC_FALSE: return "false"; break;
case X86_AVX_CC_NEQ_OQ: return "neq/oq"; break;
case X86_AVX_CC_GE: return "ge"; break;
case X86_AVX_CC_GT: return "gt"; break;
case X86_AVX_CC_TRUE: return "true"; break;
case X86_AVX_CC_EQ_OS: return "eq/os"; break;
case X86_AVX_CC_LT_OQ: return "lt/oq"; break;
case X86_AVX_CC_LE_OQ: return "le/oq"; break;
case X86_AVX_CC_UNORD_S: return "unord/s"; break;
case X86_AVX_CC_NEQ_US: return "neq/us"; break;
case X86_AVX_CC_NLT_UQ: return "nlt/uq"; break;
case X86_AVX_CC_NLE_UQ: return "nle/uq"; break;
case X86_AVX_CC_ORD_S: return "ord/s"; break;
case X86_AVX_CC_EQ_US: return "eq/us"; break;
case X86_AVX_CC_NGE_UQ: return "nge/uq"; break;
case X86_AVX_CC_NGT_UQ: return "ngt/uq"; break;
case X86_AVX_CC_FALSE_OS: return "false/os"; break;
case X86_AVX_CC_NEQ_OS: return "neq/os"; break;
case X86_AVX_CC_GE_OQ: return "ge/oq"; break;
case X86_AVX_CC_GT_OQ: return "gt/oq"; break;
case X86_AVX_CC_TRUE_US: return "true/us"; break;
default: break;
} // switch
return NULL;
} // x86_avx_cc

const char *php_capstone_x86_avx_rm_name(x86_avx_rm id) {
switch (id) {
case X86_AVX_RM_RN: return "rn"; break;
case X86_AVX_RM_RD: return "rd"; break;
case X86_AVX_RM_RU: return "ru"; break;
case X86_AVX_RM_RZ: return "rz"; break;
default: break;
} // switch
return NULL;
} // x86_avx_rm

const char *php_capstone_x86_prefix_name(x86_prefix id) {
switch (id) {
case X86_PREFIX_LOCK: return "lock"; break;
case X86_PREFIX_REP: return "rep"; break;
case X86_PREFIX_REPNE: return "repne"; break;
case X86_PREFIX_CS: return "cs"; break;
case X86_PREFIX_SS: return "ss"; break;
case X86_PREFIX_DS: return "ds"; break;
case X86_PREFIX_ES: return "es"; break;
case X86_PREFIX_FS: return "fs"; break;
case X86_PREFIX_GS: return "gs"; break;
case X86_PREFIX_OPSIZE: return "opsize"; break;
case X86_PREFIX_ADDRSIZE: return "addrsize"; break;
default: break;
} // switch
return NULL;
} // x86_prefix

void php_capstone_x86_eflags(zval *peflagsob, uint64_t eflags)
{
    zval statesar[6];
    array_init(&statesar[0]); // modify
    array_init(&statesar[1]); // prior
    array_init(&statesar[2]); // reset
    array_init(&statesar[3]); // set
    array_init(&statesar[4]); // test
    array_init(&statesar[5]); // undefined
    if (eflags & X86_EFLAGS_MODIFY_AF) add_next_index_string(&statesar[0], "af");
    if (eflags & X86_EFLAGS_MODIFY_CF) add_next_index_string(&statesar[0], "cf");
    if (eflags & X86_EFLAGS_MODIFY_SF) add_next_index_string(&statesar[0], "sf");
    if (eflags & X86_EFLAGS_MODIFY_ZF) add_next_index_string(&statesar[0], "zf");
    if (eflags & X86_EFLAGS_MODIFY_PF) add_next_index_string(&statesar[0], "pf");
    if (eflags & X86_EFLAGS_MODIFY_OF) add_next_index_string(&statesar[0], "of");
    if (eflags & X86_EFLAGS_MODIFY_TF) add_next_index_string(&statesar[0], "tf");
    if (eflags & X86_EFLAGS_MODIFY_IF) add_next_index_string(&statesar[0], "if");
    if (eflags & X86_EFLAGS_MODIFY_DF) add_next_index_string(&statesar[0], "df");
    if (eflags & X86_EFLAGS_MODIFY_NT) add_next_index_string(&statesar[0], "nt");
    if (eflags & X86_EFLAGS_MODIFY_RF) add_next_index_string(&statesar[0], "rf");
    if (eflags & X86_EFLAGS_PRIOR_OF) add_next_index_string(&statesar[1], "of");
    if (eflags & X86_EFLAGS_PRIOR_SF) add_next_index_string(&statesar[1], "sf");
    if (eflags & X86_EFLAGS_PRIOR_ZF) add_next_index_string(&statesar[1], "zf");
    if (eflags & X86_EFLAGS_PRIOR_AF) add_next_index_string(&statesar[1], "af");
    if (eflags & X86_EFLAGS_PRIOR_PF) add_next_index_string(&statesar[1], "pf");
    if (eflags & X86_EFLAGS_PRIOR_CF) add_next_index_string(&statesar[1], "cf");
    if (eflags & X86_EFLAGS_PRIOR_TF) add_next_index_string(&statesar[1], "tf");
    if (eflags & X86_EFLAGS_PRIOR_IF) add_next_index_string(&statesar[1], "if");
    if (eflags & X86_EFLAGS_PRIOR_DF) add_next_index_string(&statesar[1], "df");
    if (eflags & X86_EFLAGS_PRIOR_NT) add_next_index_string(&statesar[1], "nt");
    if (eflags & X86_EFLAGS_RESET_OF) add_next_index_string(&statesar[2], "of");
    if (eflags & X86_EFLAGS_RESET_CF) add_next_index_string(&statesar[2], "cf");
    if (eflags & X86_EFLAGS_RESET_DF) add_next_index_string(&statesar[2], "df");
    if (eflags & X86_EFLAGS_RESET_IF) add_next_index_string(&statesar[2], "if");
    if (eflags & X86_EFLAGS_RESET_SF) add_next_index_string(&statesar[2], "sf");
    if (eflags & X86_EFLAGS_RESET_AF) add_next_index_string(&statesar[2], "af");
    if (eflags & X86_EFLAGS_RESET_TF) add_next_index_string(&statesar[2], "tf");
    if (eflags & X86_EFLAGS_RESET_NT) add_next_index_string(&statesar[2], "nt");
    if (eflags & X86_EFLAGS_RESET_PF) add_next_index_string(&statesar[2], "pf");
    if (eflags & X86_EFLAGS_SET_CF) add_next_index_string(&statesar[3], "cf");
    if (eflags & X86_EFLAGS_SET_DF) add_next_index_string(&statesar[3], "df");
    if (eflags & X86_EFLAGS_SET_IF) add_next_index_string(&statesar[3], "if");
    if (eflags & X86_EFLAGS_TEST_OF) add_next_index_string(&statesar[4], "of");
    if (eflags & X86_EFLAGS_TEST_SF) add_next_index_string(&statesar[4], "sf");
    if (eflags & X86_EFLAGS_TEST_ZF) add_next_index_string(&statesar[4], "zf");
    if (eflags & X86_EFLAGS_TEST_PF) add_next_index_string(&statesar[4], "pf");
    if (eflags & X86_EFLAGS_TEST_CF) add_next_index_string(&statesar[4], "cf");
    if (eflags & X86_EFLAGS_TEST_NT) add_next_index_string(&statesar[4], "nt");
    if (eflags & X86_EFLAGS_TEST_DF) add_next_index_string(&statesar[4], "df");
    if (eflags & X86_EFLAGS_UNDEFINED_OF) add_next_index_string(&statesar[5], "of");
    if (eflags & X86_EFLAGS_UNDEFINED_SF) add_next_index_string(&statesar[5], "sf");
    if (eflags & X86_EFLAGS_UNDEFINED_ZF) add_next_index_string(&statesar[5], "zf");
    if (eflags & X86_EFLAGS_UNDEFINED_PF) add_next_index_string(&statesar[5], "pf");
    if (eflags & X86_EFLAGS_UNDEFINED_AF) add_next_index_string(&statesar[5], "af");
    if (eflags & X86_EFLAGS_UNDEFINED_CF) add_next_index_string(&statesar[5], "cf");
    if (eflags & X86_EFLAGS_RESET_RF) add_next_index_string(&statesar[2], "rf");
    if (eflags & X86_EFLAGS_TEST_RF) add_next_index_string(&statesar[4], "rf");
    if (eflags & X86_EFLAGS_TEST_IF) add_next_index_string(&statesar[4], "if");
    if (eflags & X86_EFLAGS_TEST_TF) add_next_index_string(&statesar[4], "tf");
    if (eflags & X86_EFLAGS_TEST_AF) add_next_index_string(&statesar[4], "af");
    if (eflags & X86_EFLAGS_RESET_ZF) add_next_index_string(&statesar[2], "zf");
    if (eflags & X86_EFLAGS_SET_OF) add_next_index_string(&statesar[3], "of");
    if (eflags & X86_EFLAGS_SET_SF) add_next_index_string(&statesar[3], "sf");
    if (eflags & X86_EFLAGS_SET_ZF) add_next_index_string(&statesar[3], "zf");
    if (eflags & X86_EFLAGS_SET_AF) add_next_index_string(&statesar[3], "af");
    if (eflags & X86_EFLAGS_SET_PF) add_next_index_string(&statesar[3], "pf");
    if (eflags & X86_EFLAGS_RESET_AC) add_next_index_string(&statesar[2], "ac");
    add_property_zval(peflagsob, "modify", &statesar[0]);
    zval_ptr_dtor(&statesar[0]);
    add_property_zval(peflagsob, "prior", &statesar[1]);
    zval_ptr_dtor(&statesar[1]);
    add_property_zval(peflagsob, "reset", &statesar[2]);
    zval_ptr_dtor(&statesar[2]);
    add_property_zval(peflagsob, "set", &statesar[3]);
    zval_ptr_dtor(&statesar[3]);
    add_property_zval(peflagsob, "test", &statesar[4]);
    zval_ptr_dtor(&statesar[4]);
    add_property_zval(peflagsob, "undefined", &statesar[5]);
    zval_ptr_dtor(&statesar[5]);
}
