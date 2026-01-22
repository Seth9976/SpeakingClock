// 函数: sub_49a0ad
// 地址: 0x49a0ad
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg3.b
*arg1 += arg1.b
*arg4 += arg1.b
*arg3 += arg3.b
void* var_3 = &__return_addr:1
*arg1 += arg1.b
*arg1 += arg1.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2.b
struct _EXCEPTION_REGISTRATION_RECORD** result
void* ebx_1
void* esi_1
result, ebx_1, esi_1 = sub_45b980(arg1, arg2)
*(esi_1 + 4) |= 0x2000000

if (*(ebx_1 + 0x263) != 0 && *(ebx_1 + 0x2b0) == 1)
    *(esi_1 + 8) |= 0x20

*(esi_1 + 0x24) &= 0xfffffffc
return result
