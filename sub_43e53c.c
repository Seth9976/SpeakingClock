// 函数: sub_43e53c
// 地址: 0x43e53c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char edx = *(arg1 + 0x25a)

if (edx u< 1)
    if (*(arg1 + 0x259) == 0)
        sub_43e5c4(arg1, 1)
        return 
    
    sub_43e5c4(arg1, 2)
else
    if (edx == 1)
        sub_43e5c4(arg1, 0)
        return 
    
    if (edx == 2)
        sub_43e5c4(arg1, 1)
