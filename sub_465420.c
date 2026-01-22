// 函数: sub_465420
// 地址: 0x465420
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg1
void* ebx = *(arg3 + 4)

if (ebx == 0)
    return arg3

if (arg4 != 0)
    *(ebx + 0x164) = 1
    *(ebx + 0x54) |= 0x4000

int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_45a500(*(arg3 + 4)) == 0 || *(*(arg3 + 4) + 0x30) == 0)
    (*(**(arg3 + 4) + 0x88))(arg5, arg6)
else
    *(arg3 + 0xc)
    (*(**(arg3 + 4) + 0x88))(arg5 - (*(arg3 + 0xc) + *(arg3 + 0x14)), 
        arg6 - (*(arg3 + 8) + *(arg3 + 0x10)))

void* const eax_14 = nullptr
fsbase->NtTib.ExceptionList = arg3
__return_addr = &data_465502

if (arg4 != 0)
    eax_14 = arg3
    void* ebx_3 = *(eax_14 + 4)
    *(ebx_3 + 0x164) = 0
    *(ebx_3 + 0x54) &= 0xbfff

return eax_14
