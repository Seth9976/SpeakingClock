// 函数: sub_416e54
// 地址: 0x416e54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx = *(arg2 + 8)
int32_t ebx_1 = ecx & 0xff000000

if (ebx_1 == 0xff000000)
    return sub_406568((ecx & 0xffffff) + arg1, arg3)

int32_t var_10

if (ebx_1 != 0xfe000000)
    var_10 = ecx
else
    var_10 = *(*arg1 + sx.d(ecx.w))

*(arg2 + 0x10)
return var_10(var_10, arg1)
