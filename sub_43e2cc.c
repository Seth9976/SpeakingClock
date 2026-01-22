// 函数: sub_43e2cc
// 地址: 0x43e2cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg2 + 4) == 0xd && *(arg1 + 0x25a) != 0)
label_43e2f6:
    
    if (0 == sub_46bdd4(*(arg2 + 8)))
        int32_t esi
        esi.w = 0xffb6
        
        if (sub_403e64(arg1, esi, 0) != 0)
            esi.w = 0xffeb
            int32_t result = sub_403e64(arg1, esi)
            *(arg2 + 0xc) = 1
            return result
else if (*(arg2 + 4) == 0x1b && *(arg1 + 0x259) != 0)
    goto label_43e2f6

return sub_45ecd4()
