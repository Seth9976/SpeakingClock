// 函数: sub_43ee88
// 地址: 0x43ee88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_43eec8(arg1)

if (arg2 == result)
    return result

if (arg2 == 0)
    arg1[0x14] |= 0x40
else
    arg1[0x14] &= 0xffffffbf

return (*(*arg1 + 0x80))()
