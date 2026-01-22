// 函数: sub_495a04
// 地址: 0x495a04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = arg3
var_8 = arg1
sub_405008(var_8)
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (**(arg4 - 4) != 0)
    int32_t var_18_1 = **(arg4 - 4)
    void* const var_1c_1 = &data_495a84
    int64_t* var_20_1 = var_8
    sub_404f1c(*(arg4 - 4), 3)
    esp = &var_8
else
    sub_404bdc(*(arg4 - 4), var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_495a79
int64_t** result = &var_8
sub_404b88(result)
return result
