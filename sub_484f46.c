// 函数: sub_484f46
// 地址: 0x484f46
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
int32_t var_4 = arg2
*arg2
*(arg1 - 1) += (arg1 - 1).b
*(arg1 - 1) += (arg1 - 1).b
int32_t var_8 = arg2
void* var_b = &var_8:1
*(arg1 - 2) += (arg1 - 2).b
*(arg1 - 2) += (arg1 - 2).b
int32_t var_f = arg4 + 2
char var_16 = sub_43aa00(arg1 - 2)
void* ebp_2 = sub_43aea4(arg1 - 2)

if (*(data_4ac4e0 + 0xc) != 0 && *(data_4ac4e0 + 4) != 0x11)
    char eax_7 = sub_4328bc()
    sub_42b6bc(*(*(ebp_2 - 4) + 0x68), eax_7)

LPARAM lParam = 0x2c0001
WPARAM wParam = 0
uint32_t ExceptionList = 0x445
SendMessageA(sub_45f888(*(ebp_2 - 4)), ExceptionList, wParam, lParam)
LPARAM lParam_1 = sub_42ad8c(*(*(ebp_2 - 4) + 0x70))
WPARAM wParam_1 = 0
ExceptionList = 0x443
SendMessageA(sub_45f888(*(ebp_2 - 4)), ExceptionList, wParam_1, lParam_1)

if (*(*(ebp_2 - 4) + 0x29c) == 0)
    return sub_43aa38(*(ebp_2 - 4), *(ebp_2 - 7))

*(ebp_2 - 5) = sub_485538(*(ebp_2 - 4))
sub_41caa0(*(*(ebp_2 - 4) + 0x29c), ebp_2 - 6, 1)
sub_485544(*(ebp_2 - 4), *(ebp_2 - 6) | *(ebp_2 - 5))
int32_t (* var_1f)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(*(ebp_2 - 4) + 0x29c)
(*(**(*(ebp_2 - 4) + 0x298) + 0x6c))(ExceptionList, var_1f, ebp_2)
sub_403c68(*(*(ebp_2 - 4) + 0x29c))
*(*(ebp_2 - 4) + 0x29c) = 0
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_485082
return sub_485544(*(ebp_2 - 4), *(ebp_2 - 5))
