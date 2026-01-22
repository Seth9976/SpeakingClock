// 函数: sub_416cf8
// 地址: 0x416cf8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg2 + 0x10)
int32_t ebx = *(arg2 + 4)
char temp0 = *(arg2 + 7)

if (temp0 u> 0xfe)
    int32_t* result = arg1 + (ebx & 0xffffff)
    int32_t ebx_4 = result[1]
    *arg3 = *result
    arg3[1] = ebx_4
    return result

if (temp0 u< 0xfe)
    return ebx()

return (*(sx.d(ebx.w) + *arg1))()
