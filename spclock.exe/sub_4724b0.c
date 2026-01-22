// 函数: sub_4724b0
// 地址: 0x4724b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t eax
int32_t ecx
eax, ecx = GetKeyState(0x12)

if (eax s>= 0)
    int16_t eax_1 = *(arg2 + 4)
    
    if (eax_1 == 9)
        if (GetKeyState(0x11) s>= 0)
            int16_t eax_4
            int32_t ecx_1
            eax_4, ecx_1 = GetKeyState(0x10)
            ecx_1.b = eax_4 s>= 0
            int32_t* eax_6 = sub_45fe58(ecx_1, *(arg1 + 0x268), 1)
            *(arg2 + 0xc) = 1
            return eax_6
    else if (eax_1 - 0x25 u< 4)
        void* eax_7 = *(arg1 + 0x268)
        
        if (eax_7 == 0)
            return eax_7
        
        int16_t edx_1 = *(arg2 + 4)
        
        if (edx_1 == 0x27 || edx_1 == 0x28)
            ecx.b = 1
        else
            ecx = 0
        
        *(eax_7 + 0x30)
        int32_t* eax_9 = sub_45fe58(ecx, eax_7, 0)
        *(arg2 + 0xc) = 1
        return eax_9

return sub_45ecd4()
