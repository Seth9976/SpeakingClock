// 函数: sub_43f620
// 地址: 0x43f620
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_43f528(arg1, 1)
EndPage(*(arg1 + 0x20))

if (*(arg1 + 0x1d) == 0)
    EndDoc(*(arg1 + 0x20))

*(arg1 + 0x1c) = 0
*(arg1 + 0x1d) = 0
*(arg1 + 0xc) = 0
return 0
