// 函数: sub_46e2a0
// 地址: 0x46e2a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_46f7c4(arg1) != 0)
    char eax_2 = *(arg1 + 0x271)
    char temp1_1
    
    if (eax_2 != 2)
        temp1_1 = eax_2 - 2
    
    if (eax_2 == 2 || temp1_1 == 3)
        eax_2 = 1
    else
        eax_2 = 0
    
    if (eax_2 == *(arg1 + 0x258))
        return 1

return 0
