// 函数: sub_449482
// 地址: 0x449482
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
arg1[0xffffffb6] += arg3
int16_t entry_ebx
*arg1 += entry_ebx:1.b
int32_t ecx
int16_t es
ecx, es = __les_gprz_memp(*(arg2 - 2))
*arg1 += arg1.b
*arg1 += arg1.b
uint64_t* edx
edx:1.b = 0x4a
arg1.b += entry_ebx.b
*edx = ror.d(*edx, 0)
*arg1 += arg1.b
*(arg4 - 0x75) += edx.b
int32_t eflags
arg1.b = __in_al_dx(edx.w, eflags)
void* var_3 = arg4
int32_t (* var_7)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1bb8
data_4b1bb8 += 1

if (temp1 == 0xffffffff)
    if (data_4ab528 != 0)
        GlobalDeleteAtom(data_4ab528)
    
    sub_405724(&data_4ab66c, sub_4010aa+0x16, 0xb)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
