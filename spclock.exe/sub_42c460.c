// 函数: sub_42c460
// 地址: 0x42c460
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0

if ((arg1[0x15].b & 0x80) != 0)
    POINT lppoint
    GetWindowOrgEx(sub_42c73c(arg1), &lppoint)
    
    if (lppoint.x != 0)
        result.b = 1

return result
