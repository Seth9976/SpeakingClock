// 函数: sub_427174
// 地址: 0x427174
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
int32_t __saved_ecx = 0
int64_t* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = (**arg1)(&var_8, 0, ExceptionList, var_20, var_1c)
char* eax_1 = var_8

if (eax_1 != 0)
    eax_1 = *(eax_1 - 4)

char* eax_3

if (eax_1 s<= 2)
    eax_3 = nullptr
else
    eax_3.b = *var_8 == 0x30

if (eax_3.b != 0)
    char eax_5 = var_8[1]
    
    if (eax_5 == 0x58 || eax_5 == 0x78)
        sub_405080(0x7fffffff, 3, var_8, &var_10)
        ecx = sub_404ea0(&var_8, sub_42723b+5, var_10)

sub_4094b8(ecx, arg2)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_42722e
sub_404b88(&var_10)
char** result = &var_8
sub_404b88(result)
return result
