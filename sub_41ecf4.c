// 函数: sub_41ecf4
// 地址: 0x41ecf4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 = 0
uint32_t result
int32_t ecx
result, ecx = sub_41e028(arg1)
result.b &= 0xf0

if (result.b == 0xf0)
    result.b = sub_41fbb4(ecx).b & 0xf
    *arg2 = result.b
    
    if ((*arg2 & 2) != 0)
        result = sub_41ec34(arg1)
        *arg3 = result

return result
