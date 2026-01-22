// 函数: sub_41207c
// 地址: 0x41207c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
wchar16* var_8 = nullptr
int32_t* var_c = nullptr
int32_t var_10 = 0
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
var_10 = 0
uint32_t eax_4
int32_t ecx
eax_4, ecx = (*data_4ac224)(var_8, 0x400, var_10, var_c)

if (eax_4 == 0x80020005)
    sub_404e10(ecx, var_8)
    
    if (sub_409624(var_10, &var_c:3) == 0)
        sub_41040c(0x80020005, *arg1, 0xb)
else if (eax_4 != 0)
    ecx.w = 0xb
    sub_41040c(eax_4, *arg1, ecx.w)
else
    var_c:3.b = (sbb.d(eax_4, eax_4, var_c.w u< 1)).b + 1

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_412135
sub_404b88(&var_10)
int32_t* result = &var_8
sub_405368(result)
return result
