// 函数: sub_455964
// 地址: 0x455964
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = *(data_4b1c68 + 8) != 0

if (*(arg1 - 1) != 0 && data_4b1c84 == 2)
    if ((*(*data_4b1c64 + 0x54))() != 0 || *(data_4b1c64 + 0x94) == 0)
        result.b = 1
    else
        int32_t* eax_6 = *(data_4b1c64 + 0x94)
        
        if (eax_6 != 0)
            int32_t esi
            esi.w = 0xffbd
            return sub_403e64(eax_6, esi, *(data_4b1c68 + 8), data_4b1c64)

return result
