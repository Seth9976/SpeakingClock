// 函数: sub_477834
// 地址: 0x477834
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx

if (*data_4ac1d0 == 0)
    BOOL eax_6
    eax_6, ecx = sub_46b8c0(*(arg1 + 0x30))
    
    if (eax_6 != 0)
        ecx = InvalidateRect(*(arg1 + 0x30), nullptr, 0xffffffff)
else
    HICON lParam = sub_47634c(arg1)
    SendMessageA(*(arg1 + 0x30), 0x80, 1, lParam)
    HICON dwNewLong = sub_47634c(arg1)
    ecx = SetClassLongA(*(arg1 + 0x30), 0xfffffff2, dwNewLong)

return sub_4777f8(ecx, 0xb01d)
