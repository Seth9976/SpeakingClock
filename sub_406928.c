// 函数: sub_406928
// 地址: 0x406928
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
PWSTR var_8 = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_405368(arg2)

if (arg1 != 0)
    BSTR ebx_1 = arg1
    BSTR eax_1 = ebx_1
    
    if (eax_1 != 0)
        eax_1 = *(eax_1 - 4)
    
    sub_4055c4(&var_8, eax_1)
    
    if (ebx_1 != 0)
        ebx_1 = *(ebx_1 - 4)
    
    int32_t eax_6 = sub_4054e8(var_8) + 1
    int32_t eax_11 = sub_40673c(sub_405018(arg1), eax_6, sub_4054d8(var_8), ebx_1)
    
    if (eax_11 s<= 0)
        sub_405368(&var_8)
    else
        sub_4055c4(&var_8, eax_11 - 1)
    
    sub_4053a4(arg2, var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4069da
PWSTR* result = &var_8
sub_405368(result)
return result
