// 函数: sub_419b14
// 地址: 0x419b14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = arg3
HMODULE ExceptionList_1 = arg2

if (ExceptionList_1 == 0)
    ExceptionList_1 = data_4af7f4

PSTR lpType = 0xa
PSTR lpName = sub_405018(arg1)
HMODULE ExceptionList = ExceptionList_1
HRSRC result
int32_t edx
result, edx = FindResourceA(ExceptionList, lpName, lpType)
result.b = result != 0

if (result.b == 0)
    return result

edx.b = 1
int32_t* eax_1 = sub_41d17c(ExceptionList_1, edx, sub_418024+0xc4, 0xa, arg1)
int32_t* var_18_1 = &var_4
int32_t (* var_1c_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg3
int32_t eax_3
void* ebp_1
eax_3, ebp_1 = sub_41cc04(eax_1)
*arg3 = eax_3
fsbase->NtTib.ExceptionList = eax_1
__return_addr = &data_419b8f
return sub_403c68(*(ebp_1 - 4))
