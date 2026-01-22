// 函数: sub_4328bc
// 地址: 0x4328bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t tmCharSet
tmCharSet.b = 1
HDC eax = GetDC(nullptr)

if (eax != 0)
    TEXTMETRICA lptm
    
    if (SelectObject(eax, data_4b1a5c) != 0 && GetTextMetricsA(eax, &lptm) != 0)
        tmCharSet = zx.d(lptm.tmCharSet)
    
    ReleaseDC(nullptr, eax)

return tmCharSet
