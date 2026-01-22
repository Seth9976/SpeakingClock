// 函数: sub_4786ec
// 地址: 0x4786ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
char result = sub_433cec(ecx)

if (result != 0)
    result = sub_45fc28(arg1)
    
    if (result != 0)
        void* eax_2 = sub_478638(arg1)
        int32_t var_14
        
        if (*(eax_2 + 8) == 0)
            sub_403578(&var_14, 0x10, 0)
        else if (*(eax_2 + 0x28) != 0)
            var_14 = 0xffffffff
            int32_t var_10_2 = 0xffffffff
            int32_t var_c_2 = 0xffffffff
            int32_t var_8_2 = 0xffffffff
        else
            var_14 = *(eax_2 + 0xc)
            int32_t var_10_1 = *(eax_2 + 0x14)
            int32_t var_c_1 = *(eax_2 + 0x10)
            int32_t var_8_1 = *(eax_2 + 0x18)
        
        if ((arg1[7].b & 0x10) != 0)
            return InvalidateRect(sub_45f888(arg1), nullptr, 0xffffffff)
        
        sub_433bc0(sub_45f888(arg1), &var_14)
        return (*(*arg1 + 0x80))()

if ((arg1[7].b & 0x10) == 0)
    return result

return InvalidateRect(sub_45f888(arg1), nullptr, 0xffffffff)
