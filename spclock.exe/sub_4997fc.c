// 函数: sub_4997fc
// 地址: 0x4997fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 u>= 1)
    if (arg2 != 1)
        goto label_49982e
    
    if (arg3 != arg1[0x9c] && arg3 s>= 0)
        arg1[0x9c] = arg3
        goto label_49982e
else if (arg3 != arg1[0x9b] && arg3 s>= 0)
    arg1[0x9b] = arg3
label_49982e:
    
    if (arg1[0x9a] != 0)
        (*(*arg1 + 0x168))()
