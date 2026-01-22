// 函数: sub_455fa0
// 地址: 0x455fa0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx

if (arg1[0x16] == 0)
    return arg1

if (arg1[0x17] != 0)
    sub_42c7c4(arg1, arg1[0x17])
    return sub_456094(arg1)

int32_t* eax_4 = sub_41a4bc(data_4b1c98)
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (eax_4[2] s>= 4)
    sub_455e0c()

arg1[0x17] = (*(*arg1[0x16] + 0x48))()
sub_419f9c(eax_4, arg1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_45602c
return sub_41a520(data_4b1c98)
