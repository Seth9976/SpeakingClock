// 函数: sub_430dc4
// 地址: 0x430dc4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t eax = arg1[0xd]
COLORREF eax_3

if (eax != 0x20000000)
    eax_3 = sub_42ad8c(eax)
else if (sub_430ca8(arg1) == 0)
    int32_t eax_6 = (*(*arg1 + 0x20))() - 1
    eax_3 = sub_42c6a0(sub_430bec(arg1), 0, eax_6)
else
    eax_3 = 0xffffff

return eax_3 | 0x2000000
