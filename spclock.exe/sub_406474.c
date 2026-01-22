// 函数: sub_406474
// 地址: 0x406474
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
int32_t var_8 = eax
int32_t* result = data_4aa03c

for (int32_t* i = result; i != 0; i = result)
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    int32_t (* var_20_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    i[1](ExceptionList, var_20_1, var_1c_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    result = *i

return result
