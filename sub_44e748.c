// 函数: sub_44e748
// 地址: 0x44e748
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x39) == 0)
    return 

if (*(arg1 + 0x44) != 0 || *(arg1 + 0xa8) == 0)
    int32_t* esi_1 = *(arg1 + 0x44)
    
    if (esi_1 != 0 && (*(*esi_1 + 0x78))().b == 0 && *(arg1 + 0xa8) != 0)
        sub_44e368(arg1, *(arg1 + 0x38) ^ 1)
else
    sub_44e368(arg1, *(arg1 + 0x38) ^ 1)

if (*(arg1 + 0x8a) == 0)
label_44e7c5:
    
    if ((*(arg1 + 0x1c) & 0x10) == 0 && *(arg1 + 0x44) != 0)
        (*(**(arg1 + 0x44) + 0x18))()
    else if (*(arg1 + 0x8a) != 0)
        *(arg1 + 0x8c)
        (*(arg1 + 0x88))()
else
    if (sub_44e478(arg1) == 0)
        goto label_44e7c5
    
    if (*(sub_44e478(arg1) + 0x40) == *(arg1 + 0x88))
        goto label_44e7c5
    
    *(arg1 + 0x8c)
    (*(arg1 + 0x88))()
