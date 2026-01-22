// 函数: sub_42630b
// 地址: 0x42630b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg6 -= 1
*arg3 += arg3.b
*(arg4 + 0x6f) += arg1
int32_t eflags
__outsb(arg2.w, *arg5, arg5, eflags)
int32_t esi_1 = *(arg6 + (arg4 << 1) + 0x72) * 0x6d6f7246
int32_t var_4 = arg2
int32_t eflags_1
int32_t gsbase
int16_t temp0
temp0, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg3 * 2 + 0x55), esi_1.w)
*(gsbase + arg3 * 2 + 0x55) = temp0
int32_t* ebp = &var_4
int32_t var_38 = esi_1
int32_t result

if (data_4b1a29 == 0)
    arg3.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    int32_t ebx_1
    eax, ebx_1, ebp = sub_426124(arg3.b, data_4b1a04, sub_42639f+5)
    data_4b1a04 = eax
    result = data_4b1a04(arg7, ebx_1)
else if ((arg8 & 3) == 0)
    var_14
    WINDOWPLACEMENT lpwndpl
    
    if (IsIconic(arg7) == 0)
        GetWindowRect(arg7, &var_14)
    else
        GetWindowPlacement(arg7, &lpwndpl)
    result = sub_426290(&var_14, arg8)
else
    result = 0x12340042

*ebp
return result
