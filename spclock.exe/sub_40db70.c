// 函数: sub_40db70
// 地址: 0x40db70
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax

if (arg2 s<= 0)
    eax = 0
else
    eax = arg1
    
    if (eax != 0)
        eax = *(eax - 4)
    
    eax.b = eax s>= arg2

if (eax.b == 0)
    eax = 0
else
    eax.b = *(arg1 + arg2 - 1) == 0x5c

if (eax.b == 0)
    return 0

return sub_40d88c(arg1, arg2) == 0
