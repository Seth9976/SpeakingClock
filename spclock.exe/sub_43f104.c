// 函数: sub_43f104
// 地址: 0x43f104
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
char* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx
sub_404d80(ecx, ecx)
int32_t eax_1
int32_t ecx_1
eax_1, ecx_1 = sub_404fb0(*(arg1 + 8), var_8)
int32_t temp0_1 = *(arg1 + 0xc)

if (temp0_1 != 0)
    sub_404d80(ecx_1, arg2)
    sub_404fb0(*(arg1 + 0xc), var_c)

if (temp0_1 == 0 || temp0_1 == 0)
    eax_1.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_43f17e
return sub_404bac(&var_c, 2)
