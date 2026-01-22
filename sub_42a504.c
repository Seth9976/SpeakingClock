// 函数: sub_42a504
// 地址: 0x42a504
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_1 = arg2
char* edx = arg1
int16_t result = 0
int32_t i

do
    result.b = rol.w(result, 5).b ^ *edx
    edx = &edx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
