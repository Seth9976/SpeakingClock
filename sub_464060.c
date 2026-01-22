// 函数: sub_464060
// 地址: 0x464060
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 != *(arg2 - 4) && *(*(arg1 + 0x14) + 0x10) == *(*(*(arg2 - 4) + 0x14) + 0x10)
        && sub_462098(arg1) s> sub_462098(*(arg2 - 4)))
    if (*(arg1 + 4) == 0)
    label_4640b3:
        int32_t esi_2 = *(arg2 - 8)
        int32_t eax_10 = sub_462098(arg1)
        
        if (eax_10 s> esi_2)
            eax_10 = esi_2
        
        *(arg2 - 8) = eax_10
    else
        void* esi_1 = *(arg1 + 4)
        
        if (esi_1 != 0 && *(esi_1 + 0x57) != 0)
            goto label_4640b3

if (*(arg1 + 0xc) != 0)
    sub_464060(arg2)

int32_t result = *(arg1 + 8)

if (result != 0)
    result = sub_464060(arg2)

return result
