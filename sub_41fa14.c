// 函数: sub_41fa14
// 地址: 0x41fa14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
wchar16* var_c = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_1
int32_t ecx
eax_1, ecx = sub_41e028(arg1)
char temp1_1

if (eax_1 != 0x12)
    temp1_1 = eax_1 - 0x12

if (eax_1 != 0x12 && temp1_1 != 2)
    char* var_8 = nullptr
    char eax_5 = sub_41fbb4(ecx)
    
    if (eax_5 == 6)
        sub_41e04c(arg1, &var_8, 1)
    else if (eax_5 == 0xc)
        sub_41e04c(arg1, &var_8, 4)
    else
        sub_41da5c()
    
    sub_4052a8(arg2, var_8)
    sub_41e04c(arg1, *arg2, var_8)
else
    sub_404e10(sub_41fad0(arg1, &var_c), var_c)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_41fac8
wchar16** result = &var_c
sub_405368(result)
return result
