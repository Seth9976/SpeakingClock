// 函数: sub_401548
// 地址: 0x401548
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = arg1 + arg3 - 0xc
int32_t edx = arg2 + arg3 - 0xc
int32_t ecx = neg.d(arg3 - 0xc)

if (ecx s< 0)
    int32_t temp0_1
    
    do
        long double x87_r7_1 = float.t(*(ecx + eax))
        *(ecx + edx + 8) = int.q(float.t(*(ecx + eax + 8)))
        *(ecx + edx) = int.q(x87_r7_1)
        temp0_1 = ecx
        ecx += 0x10
    while (temp0_1 + 0x10 s< 0)

*(ecx + edx) = int.q(float.t(*(ecx + eax)))
int32_t result = *(ecx + eax + 8)
*(ecx + edx + 8) = result
return result
