// 函数: sub_41320c
// 地址: 0x41320c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
wchar16* var_18 = nullptr
wchar16* var_8 = nullptr
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
sub_4141fc(&var_8, arg1, esi)
int32_t var_14
int32_t* var_c = &var_14
int32_t var_10 = 0
var_14 = 0x400
var_18 = var_8
uint32_t eax_4
int32_t ecx
eax_4, ecx = (*data_4ac450)(var_18, var_14, var_10, var_c)

if (eax_4 == 0x80020005)
    sub_404e10(ecx, var_8)
    
    if (sub_40ac0c(var_18, &var_14) == 0)
        sub_41040c(0x80020005, *arg1, 6)
else if (eax_4 != 0)
    ecx.w = 6
    sub_41040c(eax_4, *arg1, ecx.w)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4132bf
sub_404b88(&var_18)
int32_t* result = &var_8
sub_405368(result)
return result
