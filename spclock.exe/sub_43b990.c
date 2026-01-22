// 函数: sub_43b990
// 地址: 0x43b990
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(data_4ac4e0 + 0xc) == 0 || *data_4ac4d0 == 2 || (*(arg2 + 5) & 8) == 0)
    HWND eax_21 = sub_4079ac(sub_43ba59+3, &arg2[0x13], arg2[2], arg2[8], data_4af7f4, nullptr, 
        arg2[7], arg2[6], arg2[5], arg2[4], arg2[3], arg2[1])
    *(arg1 + 0x1b4) = eax_21
else
    HWND hWnd = sub_4079ac(sub_43ba59+3, &arg2[0x13], arg2[2], arg2[8], data_4af7f4, nullptr, 
        arg2[7], arg2[6], arg2[5], arg2[4], arg2[3], arg2[1] & 0xfffff7ff)
    *(arg1 + 0x1b4) = hWnd
    
    if (hWnd != 0)
        SendMessageA(hWnd, 0xcf, 1, 0)

return SendMessageA(*(arg1 + 0x1b4), 0xc, 0, *arg2)
