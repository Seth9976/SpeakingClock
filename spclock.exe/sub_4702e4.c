// 函数: sub_4702e4
// 地址: 0x4702e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t* esi
int32_t* var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t ebp
int32_t var_10 = ebp
int32_t* esp = &var_10
int32_t ecx
sub_46cbf8(ecx, arg2)
uint32_t result = arg1
sub_4738a8(result, arg2)
void* var_14

if (arg1[0xc] == 0 && arg1[0x71] == 0)
    esi = nullptr
    
    if ((arg1[7].b & 0x10) != 0)
        result.b = 2
    else if ((arg1[0xd6].b & 8) != 0 && arg1[0xcc].b == 0)
        result.b = 1
    else if (*(arg1 + 0x277) != 0)
        result = 0
    else
        result = zx.d(arg1[0xcc].b)
    
    int32_t* ebp_1 = arg1[0xd0]
    
    if (ebp_1 != 0 || arg1[0xd1] != 0)
        int32_t eax_71 = arg1[0xd1]
        
        if (eax_71 == 0)
            esi = ebp_1
            arg2[7] = sub_45f888(ebp_1)
        else
            arg2[7] = eax_71
    else
        char temp4_1 = result.b
        result.b -= 1
        
        if (temp4_1 u< 1)
            data_4b1ce0
            
            if (sub_478b08() == 0)
                arg2[7] = *(data_4b1ce0 + 0x30)
            else
                uint32_t eax_3
                eax_3.w = arg1[0x15].w & 0x8000
                
                if (eax_3.w != 0x8000)
                    eax_3.b = arg1 == *(data_4b1ce0 + 0x44)
                else
                    eax_3.b = 1
                
                if (eax_3.b == 0)
                    void* ebp_2 = *(data_4b1ce0 + 0x44)
                    char eax_6
                    
                    if (ebp_2 != 0)
                        eax_6 = sub_45fc28(ebp_2)
                    
                    if (ebp_2 == 0 || eax_6 == 0)
                        arg2[7] = *(data_4b1ce0 + 0x30)
                    else
                        int32_t eax_8 = sub_478428(data_4b1ce0)
                        arg2[7] = eax_8
                        
                        if (eax_8 == sub_45f888(*(data_4b1ce0 + 0x44)))
                            if (sub_41a150(sub_46fc6c(*(data_4b1ce0 + 0x44)), arg1) s< 0)
                                sub_419f9c(sub_46fc6c(*(data_4b1ce0 + 0x44)), arg1)
                            
                            sub_423408(arg1, *(data_4b1ce0 + 0x44))
                else
                    arg2[7] = 0
        else if (temp4_1 == 1)
            arg2[7] = sub_4783e0(data_4b1ce0)
            
            if (arg2[7] != 0)
                if (sub_46b8c0(arg2[7]) != 0)
                    arg2[7] = 0
                else
                    var_14 = arg2[7]
                    esp = &var_10
                    
                    if (IsWindowVisible(var_14) == 0)
                        arg2[7] = 0
                    else
                        var_14 = arg2[7]
                        esp = &var_10
                        
                        if (IsWindowEnabled(var_14) == 0)
                            arg2[7] = 0
            
            HWND hWnd = arg2[7]
            
            if (hWnd != 0)
                var_14 = 0xffffffec
                esp = &var_10
                
                if ((GetWindowLongA(hWnd, var_14) & 0x80) == 0x80)
                    arg2[7] = sub_470274(arg2[7])
            
            int32_t eax_37 = arg2[7]
            
            if (eax_37 != 0 && *(data_4b1ce4 + 0x6c) != 0
                    && eax_37 == *(*(data_4b1ce4 + 0x6c) + 0x1b4))
                esi = *(data_4b1ce4 + 0x6c)
            else if (eax_37 == 0)
                data_4b1ce0
                
                if (sub_478b08() == 0)
                    arg2[7] = *(data_4b1ce0 + 0x30)
                else
                    uint32_t eax_41
                    eax_41.w = arg1[0x15].w & 0x8000
                    
                    if (eax_41.w != 0x8000)
                        eax_41.b = arg1 == *(data_4b1ce0 + 0x44)
                    else
                        eax_41.b = 1
                    
                    if (eax_41.b == 0)
                        void* ebp_4 = *(data_4b1ce0 + 0x44)
                        char eax_44
                        
                        if (ebp_4 != 0)
                            eax_44 = sub_45fc28(ebp_4)
                        
                        if (ebp_4 == 0 || eax_44 == 0)
                            arg2[7] = *(data_4b1ce0 + 0x30)
                        else
                            int32_t eax_46 = sub_478428(data_4b1ce0)
                            arg2[7] = eax_46
                            
                            if (eax_46 == sub_45f888(*(data_4b1ce0 + 0x44)))
                                if (sub_41a150(sub_46fc6c(*(data_4b1ce0 + 0x44)), arg1) s< 0)
                                    sub_419f9c(sub_46fc6c(*(data_4b1ce0 + 0x44)), arg1)
                                
                                sub_423408(arg1, *(data_4b1ce0 + 0x44))
                    else
                        arg2[7] = 0
        else
            char temp8_1 = result.b
            result.b -= 1
            
            if (temp8_1 == 1)
                int32_t* ebp_6 = arg1[0xcd]
                
                if (ebp_6 == 0 || (arg1[7].b & 0x10) != 0)
                    arg2[7] = sub_478428(data_4b1ce0)
                else
                    arg2[7] = sub_45f888(ebp_6)
                    esi = arg1[0xcd]
                
                int32_t eax_67 = arg2[7]
                
                if (eax_67 != 0 && *(data_4b1ce0 + 0x44) != 0
                        && eax_67 == *(*(data_4b1ce0 + 0x44) + 0x1b4))
                    esi = *(data_4b1ce0 + 0x44)
                else if (eax_67 == 0)
                    arg2[7] = *(data_4b1ce0 + 0x30)
    
    if (esi == 0)
        result = arg2[7]
        
        if (result != *(data_4b1ce0 + 0x30))
            arg1[0xd1] = result
    else
        if (sub_41a150(sub_46fc6c(esi), arg1) s< 0)
            sub_419f9c(sub_46fc6c(esi), arg1)
        
        result = sub_423408(arg1, esi)
        arg1[0xd0] = esi
    
    arg2[1] &= 0xbffcffff

arg2[9] = 8

if ((arg1[7].b & 0x10) == 0 || arg1[0xc] != 0)
    if (((arg1[7].b & 0x10) == 0 || arg1[0xc] == 0) && arg1[0x9e].b - 1 u< 2)
        arg2[3] = 0x80000000
        arg2[4] = 0x80000000
    
    var_14 = &arg2[9]
    esp = &var_14
    esi.w = 0xffa9
    sub_403e64(arg1, esi, &arg2[1], &arg2[2], var_14)
    char eax_84 = *(arg1 + 0x271)
    
    if (*(arg1 + 0x277) == 1 && (eax_84 == 0 || eax_84 == 3))
        eax_84 = 2
    
    if ((eax_84 == 2 || eax_84 == 5) && ((arg1[7].b & 0x10) == 0 || arg1[0xc] == 0))
        char edx_21 = arg1[0x9e].b
        char temp7_1
        
        if (edx_21 != 1)
            temp7_1 = edx_21 - 1
        
        if (edx_21 == 1 || temp7_1 == 2)
            arg2[5] = 0x80000000
            arg2[6] = 0x80000000
    
    if (eax_84 u>= 3)
        *(arg1 + 0x273) = 0
    else if ((arg1[7].b & 0x10) == 0)
        char eax_85 = *(arg1 + 0x273)
        
        if (eax_85 == 1)
            data_4b1ce0
            int16_t eax_88
            
            if (sub_478b08() == 0)
                eax_88 = 0
            else
                eax_88.b = (arg1[0x15].w & 0x8000) == 0x8000
            
            if (eax_88.b == 0)
                arg2[1] |= 0x20000000
            else
                data_4abaa4 = 1
        else if (eax_85 == 2)
            arg2[1] |= 0x1000000
    
    if ((*(arg1 + 0x1d) & 2) != 0)
        arg2[1] &= 0xff3fffff
    
    if (*(arg1 + 0x277) == 1)
        arg2[0xa] = DefMDIChildProcA
    
    esi.w = 0xffaa
    sub_403e64(arg1, esi, &arg2[1], &arg2[2])
    data_4b1ce0
    result = sub_478b08()
    
    if (result.b != 0)
        result.w = arg1[0x15].w & 0x8000
        
        if (result.w == 0x8000)
            result.b = 1
        else if ((arg1[7].b & 0x10) != 0)
            if (*(arg1 + 0x277) == 1 || arg1 != *(data_4b1ce0 + 0x44))
                result = 0
            else
                result.b = 1
        else if ((*(arg1 + 0x55) & 0x20) == 0 || *(arg1 + 0x277) == 1
                || arg1 != *(data_4b1ce0 + 0x44))
            result = 0
        else
            result.b = 1
        
        if (result.b != 0)
            arg2[2] |= 0x40000
else
    arg2[1] |= 0xcf0000

*esp
esp[1]
esp[2]
esp[3]
return result
