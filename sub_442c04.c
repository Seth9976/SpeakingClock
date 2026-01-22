// 函数: sub_442c04
// 地址: 0x442c04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int32_t* esi = *(arg1[0x66] + 0xc)

if (*(arg1 + 0x57) != 0 && (arg1[7].b & 1) == 0 && esi != 0 && *(esi + 0x22) != 0)
    int32_t eax_2
    int32_t edx_2
    eax_2, edx_2 = (*(*esi + 0x24))()
    
    if (eax_2 != 0)
        edx_2.b = 1
        int32_t* eax_4 = sub_46bf14(arg1)
        
        if (eax_4 != 0 && *(eax_4 + 0x276) != 0 && sub_45fc28(eax_4) != 0)
            if (arg1[0x6b].b == 0)
                PostMessageA(sub_45f888(eax_4), 0x30f, 0, 0)
            else
                sub_458ac8(eax_4, 0)
            
            result.b = 1
            *(esi + 0x22) = 0
    else
        *(esi + 0x22) = 0

return result
