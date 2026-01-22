// 函数: sub_46e20c
// 地址: 0x46e20c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result

if (*data_4ac1d0 == 0)
    result = sub_46b8c0(sub_45f888(arg1))
    
    if (result != 0)
        return (*(*arg1 + 0x80))()
else
    result = sub_45fc28(arg1)
    
    if (result.b != 0 && *(arg1 + 0x271) != 3)
        HICON lParam = sub_4713f8(arg1)
        return SendMessageA(sub_45f888(arg1), 0x80, 1, lParam)

return result
