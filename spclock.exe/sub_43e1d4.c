// 函数: sub_43e1d4
// 地址: 0x43e1d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT result = sub_45fc28(arg1)

if (result.b != 0)
    int32_t esi
    
    if (arg2 == 0)
        esi = 0
    else
        esi.w = 1
    
    result = GetWindowLongA(sub_45f888(arg1), 0xfffffff0) & 0xf
    uint32_t wParam = zx.d(esi.w)
    
    if (result != wParam)
        return SendMessageA(sub_45f888(arg1), 0xf4, wParam, 1)

return result
