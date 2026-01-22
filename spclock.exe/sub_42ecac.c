// 函数: sub_42ecac
// 地址: 0x42ecac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = *(arg1 + 0x28)

if (eax != 0 && *(eax + 8) != 0)
    if (*(eax + 0x14) != 0)
        return *(*(arg1 + 0x28) + 0x14)
    
    uint32_t nNumEntries = GetEnhMetaFilePaletteEntries(*(eax + 8), 0, nullptr)
    
    if (nNumEntries != 0)
        if (nNumEntries s> 0x100)
            nNumEntries &= 0xff
        
        sub_42a41c(*(*(arg1 + 0x28) + 0x14))
        LOGPALETTE plpal
        plpal.palVersion = 0x300
        plpal.palNumEntries = nNumEntries.w
        var_40c
        GetEnhMetaFilePaletteEntries(*(*(arg1 + 0x28) + 8), nNumEntries, &var_40c)
        *(*(arg1 + 0x28) + 0x14) = CreatePalette(&plpal)
        return *(*(arg1 + 0x28) + 0x14)

return 0
