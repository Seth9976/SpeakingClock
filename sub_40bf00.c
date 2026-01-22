// 函数: sub_40bf00
// 地址: 0x40bf00
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t edi = 7
void* ebx = &data_4af8dc
int32_t* esi = &data_4af8f8

while (true)
    if (*ebx != 0)
        char* eax_1 = sub_405018(arg1)
        
        if (sub_40dce0(sub_405018(*ebx), eax_1) != 0)
            break
        
        esi = &esi[1]
        ebx += 4
        int32_t temp0_1 = edi
        edi -= 1
        
        if (temp0_1 != 1)
            continue
    
    return 0

return *esi
