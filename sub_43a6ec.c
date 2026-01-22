// 函数: sub_43a6ec
// 地址: 0x43a6ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_43a6ac(arg1)

if (arg2 != result)
    if (arg2 == 0)
        arg1[0x14] |= 0x40
    else
        arg1[0x14] &= 0xffffffbf
    
    result = (*(*arg1 + 0x80))()

*(arg1 + 0x1a1) = 1
return result
