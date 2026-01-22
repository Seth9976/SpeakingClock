// 函数: sub_440d03
// 地址: 0x440d03
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 -= 1
*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x6c) += arg3:1.b
int32_t gsbase
__bound_gprv_mema32(arg3, *(gsbase + arg2 + 0x6c))
int16_t* ebx = arg5
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
int16_t ExceptionList_1 = ExceptionList.w
int32_t eflags
int16_t temp0
temp0, eflags = __arpl_memw_gpr16(*ebx, arg4.w)
*ebx = temp0
*(arg4 - 0x75) += ExceptionList_1.b
void* const eax
eax.b = __in_al_dx(ExceptionList_1, eflags)
arg7 = arg4
arg6 = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1ba0
data_4b1ba0 += 1

if (temp1 == 0xffffffff)
    if (data_4b1ba8 != 0 && data_4b1ba4 != 0)
        FreeLibrary(data_4b1ba4)
    
    sub_405724(0x4ab0ac, sub_418968+0xb4, 0x8a)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
