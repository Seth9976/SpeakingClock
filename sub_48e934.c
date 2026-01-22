// 函数: sub_48e934
// 地址: 0x48e934
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HPALETTE result = nullptr

if (arg1 != 0 && arg1[2] != 0)
    int32_t i_2 = arg1[2]
    int16_t* plpal = sub_402ea8(i_2 * 4 + 8)
    *plpal = 0x300
    plpal[1] = i_2.w
    
    if (i_2 - 1 s>= 0)
        int32_t i_1 = i_2
        int32_t edi_1 = 0
        int32_t i
        
        do
            int32_t eax_12 = sub_41a0f4(arg1, edi_1)
            plpal[edi_1 * 2 + 2].b = eax_12.b
            *(&plpal[edi_1 * 2] + 5) = sub_40799c(eax_12)
            plpal[edi_1 * 2 + 3].b = sub_4079a0(eax_12)
            *(&plpal[edi_1 * 2] + 7) = 4
            edi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = CreatePalette(plpal)
    sub_402ec4(plpal)

return result
