// 函数: sub_44379c
// 地址: 0x44379c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0)
    arg1[0x14] |= 0x40
else
    arg1[0x14] &= 0xffffffbf

*(arg1 + 0x267) = 1
return sub_460cb4(arg1, arg2)
