// 函数: sub_42c45d
// 地址: 0x42c45d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2
int32_t result = 0

if ((arg3[0x54] & 0x80) != 0)
    POINT lppoint
    GetWindowOrgEx(sub_42c73c(arg3), &lppoint)
    
    if (lppoint.x != 0)
        result.b = 1

return result
