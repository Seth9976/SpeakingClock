// 函数: sub_4a835c
// 地址: 0x4a835c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t edx
edx.b = 1
int32_t* eax = sub_428a78(sub_42891c+0xa8, edx)
*(arg1 + 0x4fd) = 1
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_428b18(eax, 0x80000001)

if (sub_429318(eax) != 0)
    ebp_1 = sub_428b80(eax, "\Software\Lux Aeterna\Speaking Clock Lite", 0)
    ebp_1[-1]
    
    if (sub_429270() != 0)
        *(arg1 + 0x4fd) = 0

if (sub_429318(ebp_1[-1]) != 0)
    ebp_1 = sub_428b80(ebp_1[-1], "\Software\Lux Aeterna\Speaking Clock", 0)
    ebp_1[-1]
    
    if (sub_429270() != 0)
        *(arg1 + 0x4fd) = 0

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4a8421
return sub_4a8411(ebp_1) __tailcall
