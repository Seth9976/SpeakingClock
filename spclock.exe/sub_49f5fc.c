// 函数: sub_49f5fc
// 地址: 0x49f5fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ebx = arg2
arg1[0x38].b = ebx
*(arg1 + 0xe1) = 1

if ((arg1[7].b & 0x10) != 0)
    if (sub_43248c(arg1[0xd]) == 0 && (*(*arg1 + 0x30))() != 0)
        HICON eax_4 = LoadIconA(nullptr, 0x7f05)
        ebx = sub_432720(arg1[0xd], eax_4)
    
    sub_49f5ec(arg1, ebx)

*(arg1 + 0xe1) = 0
