// 函数: sub_477068
// 地址: 0x477068
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_110 = ebx
int32_t esi
int32_t var_114 = esi
int32_t var_10c = 0
int32_t var_8 = 0
int32_t* var_118 = &var_4
int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404c20(&var_8, *(arg2 + 4))
int32_t temp0 = var_8

if (temp0 != 0)
    sub_4099cc(var_8)
    sub_4036e8()
    char var_108[0x100]
    sub_403484(&var_108, 0x477130)
    
    if (temp0 u> 0)
        sub_404e54(&var_8, 0x47713c)

int32_t var_124 = 0x10
sub_4765cc(arg1, &var_10c)
enum MESSAGEBOX_STYLE eax_7 = sub_405018(var_10c)
sub_476eec(arg1, sub_405018(var_8), eax_7)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_47712a
sub_404b88(&var_10c)
int32_t* result = &var_8
sub_404b88(result)
return result
