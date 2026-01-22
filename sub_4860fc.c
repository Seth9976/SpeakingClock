// 函数: sub_4860fc
// 地址: 0x4860fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_45b854(arg1, arg2, arg3)

if (arg3.b == 1 && arg2 == arg1[0x95])
    result = sub_45fc28(arg1)
    
    if (result != 0)
        SendMessageA(sub_45f888(arg1), 0x469, 0, 0)
        result = 0
        arg1[0x95] = 0

return result
