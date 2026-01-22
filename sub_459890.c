// 函数: sub_459890
// 地址: 0x459890
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

(*(*arg1 - 0x10))()
char result = sub_457a30(arg1)

if (result == 0)
    arg1[0x15].w &= 0xfffe
else
    result = sub_457a40(arg1, 0)
    
    if ((arg1[0x15].b & 1) != 0)
        sub_458ac8(arg1, 0xffffffff)
        return 0

return result
