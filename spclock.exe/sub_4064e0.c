// 函数: sub_4064e0
// 地址: 0x4064e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1]
sub_406474()
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_40654b
int32_t* i

if (arg1 != data_4aa038)
    for (i = data_4aa038; i != 0; i = *i)
        if (*i == arg1)
            *i = *arg1
            break
else
    i = *arg1
    data_4aa038 = i

return i
