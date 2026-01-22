// 函数: sub_45f65c
// 地址: 0x45f65c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HDC result
int32_t edx

if ((arg1[7].b & 0x10) == 0)
    result, edx = GetDC(sub_45f888(arg1))
else
    result, edx = GetDCEx(sub_45f888(arg1), nullptr, DCX_CACHE | DCX_CLIPSIBLINGS)

if (result == 0)
    edx.b = 1
    result = sub_40451c(sub_40cf6c(sub_4175f8+0x48, edx, data_4ac2d4))

*arg2 = arg1[0x6d]
return result
