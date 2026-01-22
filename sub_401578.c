// 函数: sub_401578
// 地址: 0x401578
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = arg1 + arg3 - 4
int32_t edx = arg2 + arg3 - 4
int32_t ecx = neg.d(arg3 - 4)
int32_t temp0_1

do
    *(ecx + edx) = int.q(float.t(*(ecx + eax)))
    temp0_1 = ecx
    ecx += 8
while (temp0_1 + 8 s< 0)
int32_t result = *(ecx + eax)
*(ecx + edx) = result
return result
