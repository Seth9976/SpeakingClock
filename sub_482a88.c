// 函数: sub_482a88
// 地址: 0x482a88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_24 = *arg2
int32_t var_20 = arg2[1]
void* const result = nullptr

if (arg1[0x77].b != 0)
    int32_t var_1c = var_24
    int32_t var_18_1 = var_20
    int32_t* lParam = &var_1c
    LRESULT eax_4
    int32_t ecx_1
    eax_4, ecx_1 = SendMessageA(sub_45f888(arg1), 0x130d, 0, lParam)
    
    if (eax_4 s>= 0)
        void* esi_3 = nullptr
        
        if (eax_4 s>= 0)
            int32_t i_1 = eax_4 + 1
            int32_t i
            
            do
                lParam = 1
                ecx_1.b = 1
                void* eax_6
                eax_6, ecx_1 = sub_482258(ecx_1, arg1, lParam.b)
                esi_3 = eax_6
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (esi_3 != 0 && sub_45b7f4(esi_3) s> 0)
            result = sub_45b7b8(esi_3, 0)
            
            if (arg1 != *(result + 0x94))
                return nullptr

return result
