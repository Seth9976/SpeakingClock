// 函数: sub_474c20
// 地址: 0x474c20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
int32_t edx
int32_t var_10 = edx
int32_t eax
int32_t var_14 = eax
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
char result
int32_t edx_1
result, edx_1 = sub_474bc8(var_18)

if (result == 0)
    return result

edx_1.b = 1
int32_t eax_2
void* edx_2
eax_2, edx_2 = sub_403c38(var_18, edx_1)
int32_t var_c = eax_2
__return_addr = &__saved_ebp
int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_c_1 = &__saved_ebp
int32_t* var_c_2 = &__saved_ebp
int32_t* var_c_3 = &__saved_ebp
int32_t* var_c_4 = &__saved_ebp
sub_474a78(5, sub_474a78(4, sub_474a78(3, sub_474a78(2, sub_474a78(1, edx_2)))))
fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = &data_474ca1
return sub_403c68(&__saved_ebp)
