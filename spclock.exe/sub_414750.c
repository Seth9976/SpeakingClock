// 函数: sub_414750
// 地址: 0x414750
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int16_t pvarg
VariantInit(&pvarg)
int32_t* var_20_1 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_410ad8(&pvarg, arg2)
data_4b1988(ExceptionList, var_24, var_20_1)

if (pvarg != 0xd)
    sub_40ff78(0x101, 0xd)

int32_t* var_c
sub_406568(arg1, var_c)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4147c1
return sub_4107b0(&pvarg)
