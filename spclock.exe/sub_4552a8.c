// 函数: sub_4552a8
// 地址: 0x4552a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* esi = *(data_4b1c68 + 8)

if (esi != 0 && *(esi + 0x1db) != 0 && *(esi + 0x1ac) != 0 && sub_45e23c(esi) != 0)
    int32_t eax_4 = sub_45e23c(esi)
    int32_t eax_7
    
    if (eax_4 == 1)
        eax_7 = sub_41a0f4(*(esi + 0x1ac), 0)
    
    if (eax_4 != 1 || eax_7 != *(data_4b1c68 + 0x40))
        for (HANDLE i = sub_455d48(data_4b1c68 + 0x10, 0); i != 0; i = *(i + 0x30))
            if (esi == i)
                break
            
            int32_t eax_12 = sub_41a150(*(esi + 0x1ac), i)
            
            if (eax_12 != 0xffffffff)
                return sub_45e250(esi, eax_12)

return 0
