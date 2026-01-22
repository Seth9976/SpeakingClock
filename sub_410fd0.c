// 函数: sub_410fd0
// 地址: 0x410fd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
wchar16* var_8 = nullptr
int32_t* var_c = nullptr
char* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
sub_4141fc(&var_8, arg1, esi)
var_c = &var_c
var_10 = nullptr
uint32_t eax_4
int32_t ecx
eax_4, ecx = (*data_4ac48c)(var_8, 0x400, var_10, var_c)

if (eax_4 == 0x80020005)
    int32_t ecx_1 = sub_404e10(ecx, var_8)
    char eax_6
    int32_t ecx_2
    int32_t edx_6
    eax_6, ecx_2, edx_6 = sub_4094d0(var_10, &var_c, ecx_1)
    
    if (eax_6 == 0)
        var_c = sub_412230(arg1, edx_6, ecx_2) & 0x7f
else if (eax_4 != 0)
    ecx.w = 3
    sub_41040c(eax_4, *arg1, ecx.w)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41107a
sub_404b88(&var_10)
int32_t* result = &var_8
sub_405368(result)
return result
