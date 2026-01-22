// 函数: sub_409038
// 地址: 0x409038
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
int32_t var_14 = ecx
int32_t edi = 7
void* ebx = &data_414750
int32_t* esi = &data_41476c

while (true)
    if (*ebx != 0)
        char* eax_1 = sub_403e88(arg1)
        
        if (sub_40aa78(sub_403e88(*ebx), eax_1) != 0)
            break
        
        esi = &esi[1]
        ebx += 4
        int32_t temp0_1 = edi
        edi -= 1
        
        if (temp0_1 != 1)
            continue
    
    return 0

return *esi
