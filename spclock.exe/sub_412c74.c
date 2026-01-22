// 函数: sub_412c74
// 地址: 0x412c74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t var_24 = 0
void* var_20 = nullptr
wchar16* var_8 = nullptr
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
sub_4141fc(&var_8, arg1, esi)
int32_t var_14
int32_t* var_c = &var_14
int32_t var_10 = 0
var_14 = 0x400
wchar16* eax_1 = var_8
uint32_t eax_4
int32_t ecx
eax_4, ecx = (*data_4ac0a8)(eax_1, var_14, var_10, var_c)

if (eax_4 == 0x80020005)
    char eax_6
    int32_t ecx_2
    eax_6, ecx_2 = sub_40c528(var_20, &var_14, sub_404e10(ecx, var_8))
    
    if (eax_6 == 0)
        sub_404e10(ecx_2, var_8)
        int32_t var_1c
        
        if (sub_40abb4(var_24, &var_1c) == 0)
            sub_41040c(0x80020005, *arg1, 7)
        else
            var_14 = var_1c
            wchar16* var_10_1 = eax_1
else if (eax_4 != 0)
    ecx.w = 7
    sub_41040c(eax_4, *arg1, ecx.w)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_412d57
sub_404bac(&var_24, 2)
int32_t* result = &var_8
sub_405368(result)
return result
