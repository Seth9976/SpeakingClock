// 函数: sub_403744
// 地址: 0x403744
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 s< 0)
    int32_t eax_3 = neg.d(arg1)
    
    if (eax_3 s< 0x1400)
        *((eax_3 & 0x1f) * 0xa + sub_4037f7)
        uint32_t eax_4 = eax_3 u>> 5
        
        if (eax_4 != 0)
            int32_t edx_11 = eax_4 & 0xf
            
            if (edx_11 != 0)
                *(edx_11 * 0xa + 0x40392d)
            
            uint32_t eax_5 = eax_4 u>> 4
            
            if (eax_5 != 0)
                *(eax_5 * 0xa + 0x4039c3)
else if (arg1 != 0)
    if (arg1 s>= 0x1400)
        data_4037ed
    else
        *((arg1 & 0x1f) * 0xa + sub_4037f7)
        uint32_t eax = arg1 u>> 5
        
        if (eax != 0)
            int32_t edx_5 = eax & 0xf
            
            if (edx_5 != 0)
                *(edx_5 * 0xa + 0x40392d)
            
            uint32_t eax_1 = eax u>> 4
            
            if (eax_1 != 0)
                *(eax_1 * 0xa + 0x4039c3)
