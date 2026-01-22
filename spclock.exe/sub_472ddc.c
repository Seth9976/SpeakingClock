// 函数: sub_472ddc
// 地址: 0x472ddc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_9 = 0

if ((*(*arg1 + 0xf4))(ExceptionList, var_20, var_1c) != 0)
    var_9 = 1
    int32_t esi
    esi.w = 0xffad
    int32_t var_c
    sub_403e64(arg1, esi, &var_c:3)

if (var_9 u< 1)
    arg1[0xa5] = 0
else if (var_9 == 2)
    sub_472f50(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
