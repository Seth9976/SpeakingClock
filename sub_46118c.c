// 函数: sub_46118c
// 地址: 0x46118c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
uint8_t* lpchText = nullptr
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_24, var_20)
RECT var_14
var_14.left += 2
var_14.top += 2
int32_t ecx_1 = sub_42b2b0(*(arg1[0x94] + 0xc), *(*(*data_4ac4b8 + 0x80) + 0x18))
var_14.right = sub_45a1d8(arg1) | 0x810
var_14.top = &var_14
var_14.left = 0xffffffff
sub_4577d8(ecx_1, &lpchText)
lpchText = sub_405018(lpchText)
DrawTextA(sub_42c73c(arg1[0x94]), lpchText, var_14.left, var_14.top, var_14.right)
fsbase->NtTib.ExceptionList = var_14.bottom
__return_addr = sub_46122c
uint8_t** result = &lpchText
sub_404b88(result)
return result
