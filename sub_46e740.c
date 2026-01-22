// 函数: sub_46e740
// 地址: 0x46e740
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
HWND result = *arg2

if (result s> 0x112)
    if (result - 0x31e u< 2)
        sub_4786ec(arg1)
    else
        int32_t esi
        
        if (result == 0xb01a)
            if (arg1[0x25] != 0)
                esi.w = 0xffb0
                sub_403e64(arg1, esi)
        else if (result != 0xb01b)
            void* __offset(HWND__, -0xb047) edx_10 = result - 0xb047
            
            if (result == 0xb047)
                HWND hWnd_1 = arg2[1]
                HANDLE edi_1 = nullptr
                HWND hWnd_2
                
                for (; hWnd_1 != 0; hWnd_1 = hWnd_2)
                    if (edi_1 != 0)
                        break
                    
                    uint32_t ecx
                    edi_1 = sub_454230(hWnd_1, edx_10, ecx)
                    hWnd_2, ecx, edx_10 = GetParent(hWnd_1)
                
                if (edi_1 != 0)
                    edx_10.b = 1
                    int32_t* eax_23 = sub_46bf14(edi_1)
                    
                    if ((edi_1 != arg1[0x9a] || edi_1 != *(data_4b1ce4 + 0x64)) && eax_23 != 0
                            && (eax_23 == arg1 || eax_23 != *(data_4b1ce4 + 0x68)))
                        void* eax_27 = eax_23[0x9a]
                        
                        if (eax_27 != 0 && edi_1 != eax_27)
                            sub_458ac8(eax_27, 0)
                        
                        (*(*eax_23 + 0xf8))()
            else
            label_46ec20:
                
                if (result == data_4b1cec)
                    sub_458ac8(arg1, 0)
                    sub_458ac8(arg1, 0)
                    sub_458ac8(arg1, 0)
                    sub_458ac8(arg1, 0)
                    sub_458ac8(arg1, 0)
                    sub_458ac8(arg1, 0)
        else if (arg1[0x25] != 0)
            esi.w = 0xffae
            sub_403e64(arg1, esi)
else if (result == 0x112)
    if ((arg2[1] & 0xfff0) == 0xf120)
        sub_45c95c(arg1, arg2)
        return sub_478b10(data_4b1ce0)
    
    int32_t eax_3
    eax_3.b = (arg2[1] & 0xfff0) == 0xf030
    eax_3.b &= data_4b1cf0
    
    if (eax_3.b != 0 && *(data_4b1ce0 + 0x44) == arg1)
        data_4b1ce0
        
        if (sub_478b08() != 0)
            sub_45c95c(arg1, arg2)
            return sub_478b10(data_4b1ce0)
else if (result - 6 u< 3)
    if (data_4aba2c == 0)
        return result
    
    if (*arg2 == 7 && (arg1[7].b & 0x10) == 0)
        HWND hWnd = nullptr
        
        if (*(arg1 + 0x277) != 2)
            int32_t* eax_18 = arg1[0x9a]
            
            if (eax_18 != 0 && eax_18 != arg1)
                hWnd = sub_45f888(eax_18)
        else if (sub_46f610(arg1) != 0)
            hWnd = sub_45f888(sub_46f610(arg1))
        
        if (hWnd != 0)
            return SetFocus(hWnd)
else if (result == 0x2b)
    int32_t* eax_45 = arg2[2]
    
    if (*eax_45 == 1 && arg1[0xa4] != 0)
        eax_45[2]
        sub_44f914(arg1[0xa4])
else if (result == 0x2c)
    int32_t* esi_2 = arg2[2]
    
    if (*esi_2 == 1 && arg1[0xa4] != 0)
        esi_2[2]
        sub_44f914(arg1[0xa4])
else
    if (result != 0x46)
        goto label_46ec20
    
    if (1 == (arg1[7].w & 0x11))
        if (arg1[0x9e].b - 1 u< 2 && *(arg1 + 0x273) != 2)
            void* eax_39 = arg2[2]
            *(eax_39 + 0x18) |= 2
        
        char eax_41 = arg1[0x9e].b
        char temp11_1
        
        if (eax_41 != 1)
            temp11_1 = eax_41 - 1
        
        if (eax_41 == 1 || temp11_1 == 2)
            char eax_43 = *(arg1 + 0x271)
            char temp12_1
            
            if (eax_43 != 2)
                temp12_1 = eax_43 - 2
            
            if (eax_43 == 2 || temp12_1 == 3)
                void* eax_44 = arg2[2]
                *(eax_44 + 0x18) |= 1

return sub_45c95c(arg1, arg2)
