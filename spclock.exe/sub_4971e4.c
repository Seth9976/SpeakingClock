// 函数: sub_4971e4
// 地址: 0x4971e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t var_c = 0
int64_t* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = sub_404b88(arg3)
int32_t esi_1 = 0

while (*arg3 == 0)
    sub_409340(ecx, &var_10)
    sub_404ea0(&var_8, arg2, var_10)
    int32_t eax_4
    eax_4, ecx = (*(**(arg1 + 0x30) + 0x54))()
    
    if (eax_4 s<= 0xffffffff)
        ecx = sub_404bdc(arg3, var_8)
    else
        esi_1 += 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_49726d
sub_404b88(&var_10)
int64_t** result = &var_8
sub_404b88(result)
return result
