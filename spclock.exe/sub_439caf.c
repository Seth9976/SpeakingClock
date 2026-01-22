// 函数: sub_439caf
// 地址: 0x439caf
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg1 += arg2:1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t var_4 = 0
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
void* var_14 = arg4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = sub_4577d8(arg3, arg4 - 4)
*(arg2 + 4)
char eax_2
void* ebp
int32_t esi_1
eax_2, ebp, esi_1 = sub_46be60(ecx, *(arg4 - 4))
char eax_4

if (eax_2 != 0)
    esi_1.w = 0xffb6
    eax_4 = sub_403e64(arg1, esi_1)

if (eax_2 == 0 || eax_4 == 0)
    sub_45ecdc()
else
    sub_45fe84(arg1)
    *(arg2 + 0xc) = 1

int32_t entry_ebx
fsbase->NtTib.ExceptionList = entry_ebx
__return_addr = sub_439d31
sub_404b88(ebp - 4)
return ebp - 4
