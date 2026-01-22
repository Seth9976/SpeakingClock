// 函数: sub_4850bc
// 地址: 0x4850bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if ((*(arg1 + 0x55) & 0x20) == 0)
    return sub_43af8c(arg1)

char eax_2
int32_t ecx
eax_2, ecx = sub_43aa00(arg1)
*(arg1 + 0x2a9) = eax_2
int32_t* edx
edx.b = 1
arg1[0xa7] = sub_403c38(ecx, edx)
int32_t* var_c
var_c:3.b = sub_485538(arg1)
int32_t* eax_7
eax_7.b = (arg1[7].b & 0x10) != 0
var_c:2.b = eax_7.b
sub_485544(arg1, var_c:2.b | var_c:3.b)
arg1[0xb6] = (*(*arg1 + 0xdc))(arg1)
arg1[0xb7] = (*(*arg1 + 0xe0))()
sub_41cad8(arg1[0xa7], &var_c:2, 1)
var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xa7]
(*(*arg1[0xa6] + 0x78))(ExceptionList, var_10, var_c)
var_c = nullptr
sub_41c894(arg1[0xa7], 0, var_c)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_4851b5
return sub_485544(arg1, var_c:3.b)
