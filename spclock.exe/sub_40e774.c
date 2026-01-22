// 函数: sub_40e774
// 地址: 0x40e774
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
char eax_1 = sub_40e758()
uint32_t eax_2 = GetCurrentThreadId()
int32_t* i

for (i = *(arg1 + (zx.d(eax_1) << 2) + 4); i != 0; i = *i)
    if (eax_2 == i[1])
        break

if (i == 0)
    i = sub_40e7fc(arg1)
    
    if (i == 0)
        i = sub_402e90(0x10)
        i[1] = eax_2
        i[2] = 0x7fffffff
        *i = i
        *i = sub_40e6f0(arg1 + (zx.d(eax_1) << 2) + 4, i)

*arg2 = i
return arg2
