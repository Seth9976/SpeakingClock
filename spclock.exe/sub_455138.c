// 函数: sub_455138
// 地址: 0x455138
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg3 == 0)
    return 0

int32_t lParam = *arg4
int32_t var_18_1 = arg4[1]
int32_t var_10_1 = arg5
int32_t var_14_1 = arg1
int32_t ecx_3
ecx_3.b = data_4b1c84 == 2
char var_c_1 = ecx_3.b
return SendMessageA(arg3, 0xb02f, arg2 & 0x7f, &lParam)
