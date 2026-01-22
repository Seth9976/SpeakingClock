// 函数: sub_4248bf
// 地址: 0x4248bf
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*0x57000000 += 1
void arg_68
void* esp_1 = *(&arg_68 + (arg3 << 1)) * 0x55000000
int32_t entry_ebx
*(esp_1 - 0xc) = entry_ebx
*(esp_1 - 0x10) = arg3
*(esp_1 - 0x14) = arg4
*(esp_1 - 0x18) = *(esp_1 + 0xc)
*(esp_1 - 0x1c) = *(esp_1 + 8)
void* result = arg1

if (arg1 == arg2)
    result = sub_423974(arg1) - 1
    
    if (result s>= 0)
        *(esp_1 - 8) = result + 1
        *(esp_1 - 4) = 0
        int32_t i
        
        do
            int32_t esi
            esi.w = 0xfff1
            result = sub_403e64(sub_423948(arg1, *(esp_1 - 4)), esi)
            
            if (result.b == 0)
                *(esp_1 + 0xc)
                result = (*(esp_1 + 8))()
            
            *(esp_1 - 4) += 1
            i = *(esp_1 - 8)
            *(esp_1 - 8) -= 1
        while (i != 1)

*(esp_1 - 0x14)
*(esp_1 - 0x10)
*(esp_1 - 0xc)
*(esp_1 - 4)
*esp_1
return result
