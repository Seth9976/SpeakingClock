// 函数: sub_416d98
// 地址: 0x416d98
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = *(arg2 + 0xb)
int32_t ecx = *(arg2 + 8)

if (temp1 u> 0xfe)
    int32_t* result = arg3 + (ecx & 0xffffff)
    *result = arg4
    result[1] = arg5
    return result

*(arg2 + 0x10)

if (temp1 u< 0xfe)
    return ecx(arg4, arg5)

return (*(sx.d(ecx.w) + *arg3))(arg4, arg5)
