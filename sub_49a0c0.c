// 函数: sub_49a0c0
// 地址: 0x49a0c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** result
void* ebx_1
void* esi_1
result, ebx_1, esi_1 = sub_45b980(arg1, arg2)
*(esi_1 + 4) |= 0x2000000

if (*(ebx_1 + 0x263) != 0 && *(ebx_1 + 0x2b0) == 1)
    *(esi_1 + 8) |= 0x20

*(esi_1 + 0x24) &= 0xfffffffc
return result
