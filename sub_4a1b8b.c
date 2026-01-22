// 函数: sub_4a1b8b
// 地址: 0x4a1b8b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg1 += arg2:1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2, eflags)
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t var_c = 0
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
void* var_1c = arg4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x368)
int32_t ecx = sub_4577d8(0, arg4 - 4)
*(arg4 - 8) = *(arg4 - 4)
int32_t eax_2 = *(arg4 - 8)

if (eax_2 != 0)
    eax_2 = *(eax_2 - 4)

if (eax_2 == 1)
    void* esi_1 = *(arg1 + 0x368)
    sub_4577d8(ecx, arg4 - 0x10)
    sub_404ea0(arg4 - 0xc, sub_4a1c33+5, *(arg4 - 0x10))
    arg4 = sub_457808(esi_1, *(arg4 - 0xc))
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a1c29
sub_404b88(arg4 - 0x10)
sub_404b88(arg4 - 0xc)
sub_404b88(arg4 - 4)
return arg4 - 4
