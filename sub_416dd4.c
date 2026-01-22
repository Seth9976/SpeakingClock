// 函数: sub_416dd4
// 地址: 0x416dd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx = *(arg2 + 4)
int32_t ecx_1 = edx & 0xff000000

if (ecx_1 == 0xff000000)
    return sub_406568(arg3, *((edx & 0xffffff) + arg1))

int32_t var_10_1

if (ecx_1 != 0xfe000000)
    var_10_1 = edx
else
    var_10_1 = *(*arg1 + sx.d(edx.w))

*(arg2 + 0x10)
return var_10_1(arg3, var_10_1, arg1)
