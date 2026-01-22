// 函数: sub_4303a8
// 地址: 0x4303a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 != 0)
    uint32_t var_410 = 0
    
    if (GetObjectA(arg1, 4, &var_410) != 0 && var_410 != 0)
        LOGPALETTE plpal
        plpal.palVersion = 0x300
        plpal.palNumEntries = var_410.w
        var_408
        GetPaletteEntries(arg1, 0, var_410, &var_408)
        return CreatePalette(&plpal)

return nullptr
