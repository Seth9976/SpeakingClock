// 函数: sub_412590
// 地址: 0x412590
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_2c = ebx
int32_t var_28 = 0
wchar16* var_8 = nullptr
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
sub_4141fc(&var_8, arg1, esi)
int32_t var_14
int32_t* var_c = &var_14
int32_t var_10 = 0
var_14 = 0x400
uint32_t eax_4
int32_t ecx
eax_4, ecx = (*data_4ac290)(var_8, var_14, var_10, var_c)

if (eax_4 == 0x80020005)
    sub_404e10(ecx, var_8)
    long double var_24
    
    if (sub_40ab98(var_28, &var_24) == 0)
        sub_41040c(0x80020005, *arg1, 5)
    else
        var_14.q = fconvert.d(var_24)
else if (eax_4 != 0)
    ecx.w = 5
    sub_41040c(eax_4, *arg1, ecx.w)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41264c
sub_404b88(&var_28)
int32_t* result = &var_8
sub_405368(result)
return result
