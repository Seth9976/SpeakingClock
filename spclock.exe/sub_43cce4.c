// 函数: sub_43cce4
// 地址: 0x43cce4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_45baac(arg1)
SendMessageA(sub_45f888(arg1), 0x141, arg1[0x95], 0)
arg1[0xa2] = 0
arg1[0xa3] = 0
char result = sub_40d704(5, 1)

if (result != 0)
    result = sub_465ac4(sub_4659bc())
    
    if (result != 0)
        return SendMessageA(sub_45f888(arg1), 0x1701, arg1[0x96], 0)

return result
