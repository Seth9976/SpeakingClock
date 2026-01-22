// 函数: sub_43e339
// 地址: 0x43e339
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*(arg3 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t var_4 = 0
void* var_14 = arg3
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t ecx_1 = sub_4577d8(ecx, arg3 - 4)
*(arg2 + 4)
char eax_2
void* ebp
int32_t esi
eax_2, ebp, esi = sub_46be60(ecx_1, *(arg3 - 4))
char eax_4

if (eax_2 != 0)
    esi.w = 0xffb6
    eax_4 = sub_403e64(arg1, esi)

if (eax_2 == 0 || eax_4 == 0)
    sub_45ecdc()
else
    esi.w = 0xffeb
    sub_403e64(arg1, esi)
    *(arg2 + 0xc) = 1

int32_t entry_ebx
fsbase->NtTib.ExceptionList = entry_ebx
__return_addr = sub_43e3b9
return sub_43e3a9(ebp) __tailcall
