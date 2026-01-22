// 函数: sub_409efc
// 地址: 0x409efc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = arg3

if (ebx u> 0x1f)
    ebx = 0x1f

if (sub_40d8b0() == 1)
    ebx -= 1

int64_t var_34[0x4]
sub_409c90(&var_34, arg2)
*(&var_34 + ebx) = 0
int64_t (* var_14)[0x4] = &var_34
char var_10 = 6
return sub_408ba8((&data_4aa854)[arg1], &var_14, 0)
