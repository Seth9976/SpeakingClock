// 函数: sub_45e580
// 地址: 0x45e580
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if ((*(*arg1 + 0x58))() != sub_403b40(arg1))
    return sub_459d28(arg1, arg2)

int32_t var_c
var_c:3.b = *(arg1 + 0x57)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
esi.w = 0xffcc
sub_403e64(arg1, esi, 0, *(arg2 + 8) + 0x4c, ExceptionList, var_1c, var_18)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_45e5fc

if (var_c:3.b == 0)
    return 0

return sub_457a68(arg1)
