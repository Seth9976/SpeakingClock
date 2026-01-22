// 函数: sub_446894
// 地址: 0x446894
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*data_4ac1d0 == 0 || *(arg1 + 0x3c) == 0)
    return sub_404bdc(arg2, *(arg1 + 0x80))

char lParam[0x108]
SendMessageA(GetParent(*(arg1 + 0x3c)), 0x465, 0x105, &lParam)
return sub_409e8c(&lParam, arg2)
