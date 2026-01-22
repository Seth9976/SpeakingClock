// 函数: sub_416d38
// 地址: 0x416d38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = *(arg2 + 8)
char temp0 = *(arg2 + 0xb)

if (temp0 u> 0xfe)
    int32_t* result = arg1 + (ebx & 0xffffff)
    int32_t ebx_4 = arg3[1]
    *result = *arg3
    result[1] = ebx_4
    return result

*(arg2 + 0x10)
int32_t var_8 = arg3[1]
int32_t var_c = *arg3

if (temp0 u< 0xfe)
    return ebx(var_c, var_8)

return (*(sx.d(ebx.w) + *arg1))(var_c, var_8)
