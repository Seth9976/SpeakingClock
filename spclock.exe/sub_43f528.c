// 函数: sub_43f528
// 地址: 0x43f528
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int64_t* var_c = nullptr
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x1c))
    if (arg2 == 0)
        sub_406a30(data_4ac228, &var_c)
        sub_43efe8(var_c)
    else
        sub_406a30(data_4ac434, &var_8)
        sub_43efe8(var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_43f594
return sub_404bac(&var_c, 2)
